#include "arvBin.h"

int main(){

   Arv *a8 = arv_cria('a', arv_criavazia(), arv_criavazia());
   Arv *a4 = arv_cria('a', arv_criavazia(), arv_criavazia());
   Arv *a5 = arv_cria('m', arv_criavazia(), arv_criavazia());
   Arv *a6 = arv_cria('i', arv_criavazia(), arv_criavazia());
   Arv *a7 = arv_cria('n', arv_criavazia(), a8);
   Arv *a2 = arv_cria('o', a5, a4);
   Arv *a3 = arv_cria('p', a7, a6);
   Arv *a = arv_cria('d', a3, a2);

   //arv_imprime(a, 1);
   fullPrint(a);




    return 0;
}