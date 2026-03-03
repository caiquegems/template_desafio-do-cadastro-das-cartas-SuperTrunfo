#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){

    char estado1, estado2;
    char cod1 [4], cidade2[25];
    char cidade1[25], cod2[4];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int turist1, turist2;
    int escolhadeatributo;

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
        int resuper1;
        int resuper2;
    
        repop = pop1 > pop2;
        reare = area1 > area2;
        repib = pib1 > pib2;
        repotu = turist1 > turist2;
        redepo = dpopu1 < dpopu2;
        repibc = pibc1 > pibc2;
        resuper1 = pop1+pib1+area1+pibc1+(1/dpopu1);
        resuper2 = pop2+pib2+area2+pibc2+(1/dpopu2);



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
    //escolha de atributos
 printf("Esta na Hora de escolhe o meio de vitoria\n");
 printf("1. População\n");
 printf("2. Área\n");
 printf("3. PIB");
 printf("4. Pontos Turisticos\n");
 printf("5. PIB Per Capital\n");
 printf("6. Densidade Populasional\n");
 printf("6. Super Poder\n");
 printf("Qual a sua escolha?\n");
 scanf("%d", &escolhadeatributo);

 printf("------------------------ \n");

 switch (escolhadeatributo)
 {
case 1:
    //atributo populaçao
    printf("Atributo: população\n");
    printf("Carta 1 - %s (%s): %lu Hab\n",cidade1,cod1,pop1);
    printf("Carta 2 - %s (%s): %lu Hab\n",cidade2,cod2,pop2);
    if(pop1 > pop2){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else if (pop1 < pop2)
    {printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
    else {
     printf("Resultado: Empate");
    }
     break;
 case 2:
    
    //atributo área
    printf("Atributo: Área\n");
    printf("Carta 1 - %s (%s): %f km\n",cidade1,cod1,area1);
    printf("Carta 2 - %s (%s): %f km \n",cidade2,cod2,area2);
    if(area1 > area2){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else if (area1 < area2)
    {printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);} 
    else {
     printf("Resultado: Empate\n");
    }
    break;
 printf("------------------------ \n");
 case 3:
    //atributo pib
    printf("Atributo: Pib\n");
    printf("Carta 1 - %s (%s): %.2f bilhões de Reais\n ",cidade1,cod1,pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões de Reais\n",cidade2,cod2,pib2);
    if(pib1 > pib2){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else if (pib1 < pib2)
    {printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);} 
    else {
     printf("Resultado: Empate\n");
    }
 printf("------------------------ \n");
 break;
 case 4:
    //atributo pontos turisticos
    printf("Atributo: Pontos Turisticos\n");
    printf("Carta 1 - %s (%s): %d\n",cidade1,cod1,turist1);
    printf("Carta 2 - %s (%s): %d\n",cidade2,cod2,turist2);
    if(turist1 > turist2){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else if (turist1 < turist2)
    {printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);} 
    else {
     printf("Resultado: Empate\n");
    }
 printf("------------------------ \n");
 break;
 case 5:
     //atributo pib per capital
     printf("Atributo: Pib Per Capital\n");
    printf("Carta 1 - %s (%s): %.2f Reais\n",cidade1,cod1,pibc1);
    printf("Carta 2 - %s (%s): %.2f Reais\n",cidade2,cod2,pibc2);
    if(pibc1 > pibc2){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else if (pibc1 < pibc2) 
    {printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);} 
    else {
     printf("Resultado: Empate\n");
    }
 printf("------------------------ \n");
 break;
 case 6:
    //atributo densidade populacional
     printf("Atributo: Densidade Populacinal\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n",cidade1,cod1,dpopu1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n",cidade2,cod2,dpopu2);
    if(dpopu1 < dpopu2){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else if (dpopu1 > dpopu2)
    {printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);} 
    else {
     printf("Resultado: Empate\n");
    }
 printf("------------------------ \n");
 break;
 case 7:
     //atributo super poder
     printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s (%s): %.2f poder\n",cidade1,cod1,pop1+pib1+area1+pibc1+(1/dpopu1));
    printf("Carta 2 - %s (%s): %.2f poder\n",cidade2,cod2,pop2+pib2+area2+pibc2+(1/dpopu2));
    if(resuper1 > resuper2){printf("Resultado: Carta 1 (%s) venceu!!\n", cidade1);}
    else if (resuper1 < resuper2)
    {printf("Resultado: Carta 2 (%s) venceu!!\n",cidade2);}
     else {
     printf("Resultado: Empate\n");
    }
     printf("------------------------ \n");
          break;
     default:
     printf("Codigo invalido./n");
    break;
   

   return(0);
}
}