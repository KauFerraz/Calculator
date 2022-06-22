#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{//setlocale(LC_ALL,"portuguese");
int menu,cont,fim,numero;
fim=0;
while(fim<1){
system("cls || clear");
float valor,valor2,valor_final;
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c Calculadora 3.0        %c\n",186,186);
    printf("\t%c                        %c\n",186,186);
    printf("\t%c Escolha uma opera%c%co:  %c\n",186,135,198,186);
    printf("\t%c 1 - Adi%c%co e Subtra%c%co %c\n",186,135,198,135,198,186);
    printf("\t%c 2 - Multiplica%c%co      %c\n",186,135,198,186);
    printf("\t%c 3 - Divis%co            %c\n",186,198,186);
    printf("\t%c 0 - Sair               %c\n",186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   scanf("%d",&menu);
   switch(menu){
    case 1:
        valor_final=0;
        cont=0;
        numero=1;
        while(cont<1){
        system("cls || clear");
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
        printf("\t%cDigite 0 para finalizar%c\n",186,186);
        printf("\t%c                       %c\n",186,186);
        printf("\t%cAdicione o %d%c valor:   %c\n",186,numero,167,186);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
        scanf("%f",&valor);
        if(valor==0)cont++;
            else valor_final=valor_final+valor;
        numero++;
}//while
            system("cls || clear");
            printf("\t%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("\t%cSoma=%.2f%c\n",186,valor_final,186);
            printf("\t%c%c%c%c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,205,205,188);
            printf("Pressione qualquer tecla para continuar\n");
            getch();
        break;
    case 2:
        valor_final=1;
        cont=0;
        numero=1;
        while(cont<1){
        system("cls || clear");
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
        printf("\t%cDigite 1 para finalizar%c\n",186,186);
        printf("\t%c                       %c\n",186,186);
        printf("\t%cAdicione o %d%c valor:   %c\n",186,numero,167,186);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
        scanf("%f",&valor);
        if(valor==1)cont++;
            else valor_final=valor_final*valor;
        numero++;
}//while
            printf("\nMultiplica%c%co=%.2f\n\n",135,198,valor_final);
            printf("Pressione qualquer tecla para continuar\n");
            getch();
        break;
    case 3:
        system("cls || clear");
        printf("Numerador: \n");scanf("%f",&valor);
        printf("Denominador: \n");scanf("%f",&valor2);
        valor_final=valor/valor2;
        printf("Divis%co= %.3f\n\n",198,valor_final);
            printf("Pressione qualquer tecla para continuar\n");
            getch();
        break;
    case 0:
        fim++;
        break;
}//switch
}//while
}//main
