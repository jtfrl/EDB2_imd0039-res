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

void arv_imprime(Arv *a){
  if(!is_arvVazia(a)){
    printf("%c ", a->info);  /* mostra raiz */
    arv_imprime(a->esq);     /* mostra sae */
    arv_imprime(a->dir);     /* mostra sad */
  }
}




