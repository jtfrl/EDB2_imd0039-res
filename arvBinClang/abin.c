#include "arvBin.h"

int main(){

    Arv *a1 = arv_cria('d', arv_criavazia(), arv_criavazia());
    Arv *a2 = arv_cria('o', arv_criavazia(), a1);
    Arv *a3 = arv_cria('p', a2, arv_criavazia());
    Arv *a4 = arv_cria('a', arv_criavazia(), a3);
    Arv *a5 = arv_cria('m', a1, arv_criavazia());
    Arv *a6 = arv_cria('i', arv_criavazia(), a5);
    Arv *a7 = arv_cria('n', a6, arv_criavazia());
    Arv *a8 = arv_cria('a', arv_criavazia(), a7);

    arv_imprime(a1);
    arv_imprime(a2);
    arv_imprime(a3);
    arv_imprime(a4);
    arv_imprime(a5);
    arv_imprime(a6);
    arv_imprime(a7);
    arv_imprime(a8);


    return 0;
}