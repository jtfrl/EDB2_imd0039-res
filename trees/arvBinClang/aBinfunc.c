#include "arvBin.h"


Arv *arv_criavazia(void){
  return NULL;
}


Arv *arv_cria(char c, Arv *sae, Arv *sad){
  Arv *p = (Arv *) malloc(sizeof(Arv));
  p->info = c;
  p->esq = sae;
  p->dir = sad;
  return p;
}

/* ///|||//////|||//////|||//////|||//////|||///   */

int is_arvVazia(Arv *a) {
  return a==NULL;
}

//liberações de memória
Arv *arv_libera(Arv *a){
  if(!is_arvVazia(a)){
    arv_libera(a->esq);  /* libera sae */
    arv_libera(a->dir);  /* libera sad */
    free(a);             /* libera raiz */
  }
  return NULL;
}


bool arv_pertence(Arv *a, char c){
  if(is_arvVazia(a))
    return 0;  /* Árvore vazia: não encontrou */

  else
    return a->info==c ||
           arv_pertence(a->esq,c) ||
           arv_pertence(a->dir,c); 
}

/* outra impl para arv_pertence*/

/*
int arv_pertence(Arv *a, char c)
{
  if(arv_vazia(a))
    return 0; 
  else
    return a->info==c ||
           arv_pertence(a->esq,c) ||
           arv_pertence(a->dir,c);
}
*/

//implementação de funções de nível e de altura

int getHeight(Arv* arv){
  if(is_arvVazia(arv)) return 0;
  else{
    int lh=getHeight(arv->esq); //mede a altura com base em ambas
    int rh=getHeight(arv->dir);

    if(lh>rh) return lh+1;
    else return rh+1;
  }

}

int getLevel(Arv* arv){
  return getHeight(arv)+1;
}


void addSpace(int count){
  //int level=getLevel(arv);
  for(int i=0;i<count;i++){
    printf("  ");
  }
}

void arv_imprime(Arv *a, int level){
  if(!is_arvVazia(a)){
    addSpace(level);
    printf("%c ", a->info);  /* mostra raiz */
    //printf("'.' '.'\n");
    //addSpace(a);

    arv_imprime(a->esq, getLevel(a)+1);     /* mostra sae */
    arv_imprime(a->dir, getLevel(a)+1);     /* mostra sad */
  
  }
      printf("\n");
}

void fullPrint(Arv *a){
  arv_imprime(a, 0);
}


