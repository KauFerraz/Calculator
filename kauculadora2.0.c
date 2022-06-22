#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{setlocale(LC_ALL,"portuguese");
printf("MARKAO PAU NO CU\n\n");
int menu,cont,fim;
fim=0;
while(fim<1){
system("cls || clear");
float valor,valor2,valor_final;
    printf("Kauculadora 2.0 \n\n");
    printf("Escolha uma operação:\n");
    printf("1 - Adição e Subtração\n");
    printf("2 - Multiplicação\n");
    printf("3 - Divisão\n");
    printf("0 - Sair\n\n");

   scanf("%d",&menu);
   switch(menu){
    case 1:
        system("cls || clear");
        valor_final=0;
        cont=0;
        printf("Digite 0 para finalizar\n\n");
        while(cont<1){
        printf("Adicione um valor:\n");
        scanf("%f",&valor);
        if(valor==0)cont++;
            else valor_final=valor_final+valor;
}//while
            printf("\nSoma=%.2f\n\n",valor_final);
            printf("Pressione qualquer tecla para continuar\n");
            getch();
        break;
    case 2:
        system("cls || clear");
        valor_final=1;
        cont=0;
        printf("Digite 1 para finalizar\n\n");
        while(cont<1){
        printf("Adicione um valor:\n");
        scanf("%f",&valor);
        if(valor==1)cont++;
            else valor_final=valor_final*valor;
}//while
            printf("\nMultiplicação=%.2f\n\n",valor_final);
            printf("Pressione qualquer tecla para continuar\n");
            getch();
        break;
    case 3:
        system("cls || clear");
        printf("Numerador: \n");scanf("%f",&valor);
        printf("Denominador: \n");scanf("%f",&valor2);
        valor_final=valor/valor2;
        printf("Divisão= %.3f\n\n",valor_final);
            printf("Pressione qualquer tecla para continuar\n");
            getch();
        break;
    case 0:
        fim++;
        break;
}//switch
}//while
}//main
