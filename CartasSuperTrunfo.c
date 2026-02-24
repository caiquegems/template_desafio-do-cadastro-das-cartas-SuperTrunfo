#include <stdio.h>

int main (){

    char estado1, estado2;
    char cod1 [4], cod2[4];
    char cidade1[50], cidade2[50];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int turist1, turist2;

       printf("BEM VINDO AO SUPER TRUNFO\n");
       printf("COMEÇE REGISTRANDO SUAS CARTAS:\n");
          printf("------------------------ \n");
       printf("CARTA 01\n");
          printf("------------------------ \n");
        printf("O ESTADO:\n");
       scanf("%c", &estado1);

       printf("O Codigo Do Estado:\n");
       scanf("%s", &cod1);

       printf("O Nome Da Cidade:\n");
       scanf("%s", &cidade1);

       printf("O Numero Da população:\n");
       scanf("%d", &pop1);

       printf("A Área Da Cidade:\n");
       scanf("%f", &area1);

       printf("O PIB:\n");
       scanf(" %f", &pib1);

       printf("O Numero Dos Pontos Turisticos:\n");
       scanf(" %d", &turist1);
          printf("------------------------ \n");
       printf("CARTA 02\n");
          printf("------------------------ \n");
        printf("O ESTADO:\n");
       scanf(" %c", &estado2);

       printf("O Codigo Do Estado:\n");
       scanf(" %s", &cod2);

       printf("O Nome Da Cidade:\n");
       scanf(" %s", &cidade2);

       printf("O Numero Da população:\n");
       scanf("%d", &pop2);

       printf("A Área Da Cidade:\n");
       scanf(" %f", &area2);

       printf("O PIB:\n");
       scanf(" %f", &pib2);

       printf("O Numero Dos Pontos Turisticos:\n");
       scanf(" %d", &turist2);
         printf("------------------------ \n");
        printf("CARTA 01 \n");
         printf("------------------------ \n");
       printf("ESTADO: %c \n", estado1);
       printf("CÓDIGO: %s \n", cod1);
       printf("NOME DA CIDADE: %s \n", cidade1);
       printf("POPULAÇÃO: %d \n", pop1);
       printf("ÁREA: %f km \n", area1);
       printf("PIB: %f bilhões de Reais \n", pib1);
       printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", turist1);
         printf("------------------------ \n");
        printf("CARTA 02\n");
         printf("------------------------ \n");
       printf("ESTADO: %c\n", estado2);
       printf("CÓDIGO: %s\n", cod2);
       printf("NOME DA CIDADE: %s", cidade2);
       printf("POPULAÇÃO: %d\n", pop2);
       printf("ÁREA: %f km\n", area2);
       printf("PIB: %f bilhões de Reais \n", pib2);
       printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turist2);
          printf("------------------------ \n");

return(0);
       

} 
