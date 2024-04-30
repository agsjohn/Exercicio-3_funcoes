#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int geranumero(int inferior, int superior);

main(){
    int sup, inf, ran;
    setlocale(LC_ALL, "Portuguese");
    printf("Defina o limite inferior: ");
    scanf("%i", &inf);
    getchar();
    printf("Defina o limite superior: ");
    scanf("%i", &sup);
    getchar();
    ran = geranumero(inf, sup);
    printf("\nNúmero aleatório gerado: %i", ran);
    getchar();
}

int geranumero(int inferior, int superior){
    srand(time(NULL));
    int ale;
    do{
        ale = rand() % superior + 1;
    }while(ale < inferior);
}
