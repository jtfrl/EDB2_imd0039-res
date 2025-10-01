/* sae  --> subárvore à esq.
   sad  --> subárvore à dir.
*/
#ifndef ARV_BIN
#define ARV_BIN

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct arv{ //também é no
  char info;
  struct arv *esq;
  struct arv *dir;
}Arv;

//typedef struct arv Arv;

/* |||\|||\\\ ||\|||\\\ ||\|||\\\|\|||\\\ */
//implementações de 'classe'
Arv *arv_criavazia(void);
Arv *arv_cria(char c, Arv *sae, Arv *sad);

/* ///|||//////|||//////|||//////|||//////|||///   */

int is_arvVazia(Arv *a);
//liberações de memória
Arv *arv_libera(Arv *a);



int getHeight(Arv* arv);
int getLevel(Arv* arv);
void addSpace(int c);
void arv_imprime(Arv *a, int level);
void fullPrint(Arv* a);
bool arv_pertence(Arv *a, char c);

#endif //ARV_BIN