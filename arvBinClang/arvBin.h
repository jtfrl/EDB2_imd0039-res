/* sae  --> subárvore à esq.
   sad  --> subárvore à dir.
*/
#ifndef ARV_BIN
#define ARV_BIN

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct arv{
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

void arv_imprime(Arv *a);
bool arv_pertence(Arv *a, char c);

#endif //ARV_BIN