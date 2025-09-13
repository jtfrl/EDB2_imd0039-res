/*q. 1 - Lista de Exercıcios 2 - Revisão de C para EDB2 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


/*DEVE SER RECURSIVA!!!*/
int countC(char* pal[], char l){
    int tam=0;
    int count=0;

    //converte para maisculo
    pal=toupper(pal);
    l=toupper(l);
    tam=len(pal);

    if(*pal=='\0') return 0;

    char vpal[50];

    //seleciona apenas consoantes
    for(int i=0; i<tam; i++){
        if(!isVogal(pal[i])){
            vpal[i]=pal[i];
        }
    }

    char at=vpal;

    if(at>l) count=1;

    return count+countC(pal+1,l);
}

/*
void convertCase(char* p[]){
    char convert_pal[50];
    int i=0;
    while(p[i]!='\0'){ //até o último caractere
        p[i]=p[i]-32;
        i++;
    }
}
*/

bool isVogal(char p){
    bool check=false;
  
    if(p=='a' || p=='e' || p='i' ||
    p=='o' || p=='u'){
        check=true;
    }

    return check;
}

int main(){
    char c;
    char palavra[100];

    scanf("%s", &c);
    fgets(palavra, 100, stdin);
    
    countC(palavra, c);

    return 0;
}