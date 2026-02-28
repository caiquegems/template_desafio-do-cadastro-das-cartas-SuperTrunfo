#include <stdio.h>

int main (){

    char estado1, estado2;
    char cod1 [4], cidade2[25];
    char cidade1[25], cod2[4];
    unsigned long int pop1, pop2;
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
       scanf(" %s", &cod1);

       printf("O Nome Da Cidade:\n");
       scanf("%s", &cidade1);

       printf("O Numero Da população:\n");
       scanf("%lu", &pop1);

       printf("A Área Da Cidade:\n");
       scanf(" %f", &area1);

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
       scanf("%lu", &pop2);

       printf("A Área Da Cidade:\n");
       scanf(" %f", &area2);

       printf("O PIB:\n");
       scanf(" %f", &pib2);

       printf("O Numero Dos Pontos Turisticos:\n");
       scanf(" %d", &turist2);

      float dpopu1, pibc1, dpopu2, pibc2;

        dpopu1 = pop1 / area1;
        dpopu2 = pop2 / area2;
        pibc1 =  pib1 / pop1;
        pibc2 =  pib2 / pop2;

        int repop;
        int reare;
        int repib;
        int repotu;
        int redepo;
        int repibc;
        int resuper;

        repop = pop1 > pop2;
        reare = area1 > area2;
        repib = pib1 > pib2;
        repotu = turist1 > turist2;
        redepo = dpopu1 < dpopu2;
        repibc = pibc1 > pibc2;
        resuper = (pop1+pib1+area1+pibc1+(1/dpopu1))>(pop2+pib2+area2+pibc2+(1/dpopu2))



         printf("------------------------ \n");
        printf("CARTA 01 \n");
         printf("------------------------ \n");
       printf("ESTADO: %c \n", estado1);
       printf("CÓDIGO: %s \n", cod1);
       printf("NOME DA CIDADE: %s \n", cidade1);
       printf("POPULAÇÃO: %lu \n", pop1);
       printf("ÁREA: %f km \n", area1);
       printf("PIB: %.2f bilhões de Reais \n", pib1);
       printf("NÚMERO DE PONTOS TURÍSTICOS: %d \n", turist1);
       printf("Densidade Populacional: %.2f hab/km²\n", dpopu1);
       printf("PIB per Capita: %.2f reais\n", pibc1);
         printf("------------------------ \n");
        printf("CARTA 02\n");
         printf("------------------------ \n");
       printf("ESTADO: %c\n", estado2);
       printf("CÓDIGO: %s\n", cod2);
       printf("NOME DA CIDADE: %s\n", cidade2);
       printf("POPULAÇÃO: %lu\n", pop2);
       printf("ÁREA: %f km\n", area2);
       printf("PIB: %.2f bilhões de Reais \n", pib2);
       printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turist2);
       printf("Densidade Populacional: %.2f hab/km²\n", dpopu2);
       printf("PIB per Capita: %.2f reais\n", pibc2);
    printf("------------------------ \n");
 //atributo populaçao
    printf("Atributo: população\n");
    printf("Carta 1 - %s (%s): %lu Hab\n",cidade1,cod1,pop1);
    printf("Carta 2 - %s (%s): %lu Hab\n",cidade2,cod2,pop2);
    if(repop==1){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else{printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
 printf("------------------------ \n");
    //atributo área
    printf("Atributo: Área\n");
    printf("Carta 1 - %s (%s): %f km\n",cidade1,cod1,area1);
    printf("Carta 2 - %s (%s): %f km \n",cidade2,cod2,area2);
    if(reare==1){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else{printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
 printf("------------------------ \n");
    //atributo pib
    printf("Atributo: Pib\n");
    printf("Carta 1 - %s (%s): %.2f bilhões de Reais\n ",cidade1,cod1,pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões de Reais\n",cidade2,cod2,pib2);
    if(repib==1){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else{printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
 printf("------------------------ \n");
    //atributo pontos turisticos
    printf("Atributo: Pontos Turisticos\n");
    printf("Carta 1 - %s (%s): %d\n",cidade1,cod1,turist1);
    printf("Carta 2 - %s (%s): %d\n",cidade2,cod2,turist2);
    if(repotu==1){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else{printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
 printf("------------------------ \n");
     //atributo pib per capital
     printf("Atributo: Pib Per Capital\n");
    printf("Carta 1 - %s (%s): %.2f Reais",cidade1,cod1,pibc1);
    printf("Carta 2 - %s (%s): %.2f Reais",cidade2,cod2,pibc2);
    if(repibc==1){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else{printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
 printf("------------------------ \n");
    //atributo densidade populacional
     printf("Atributo: Densidade Populacinal\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n",cidade1,cod1,dpopu1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n",cidade2,cod2,dpopu2);
    if(redepo==1){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else{printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
 printf("------------------------ \n");
     //atributo super poder
     printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s (%s): %.2f poder\n",cidade1,cod1,pop1+pib1+area1+pibc1+(1/dpopu1));
    printf("Carta 2 - %s (%s): %.2f poder\n",cidade2,cod2,pop2+pib2+area2+pibc2+(1/dpopu2));
    if(resuper==1){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else{printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
           
          printf("------------------------ \n");
    

return(0);
       

} 
