/*q. 1 - Lista de Exercıcios 2 - Revisão de C para EDB2 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


/*DEVE SER RECURSIVA!!!*/
int countC(char* pal[], char l){
    int tam, count, vog, cnt;
    //função que converte para lower
    tam=len(pal);




    return count;
}


bool isVogal(char* p[]){
    bool check=false;
    for(int i=0; i<len(p); i++){
        if(p[i]=='a' || p[i]=='e' || p[i]=i ||
        p[i]=='o' || p[i]=='u'){
            check=true;
        }
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