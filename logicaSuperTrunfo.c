#include <stdio.h>

int main(){
// CARTA 0
char estado, codigoDaCarta[5], cidade[20];
int qtdPontosTuristicos;
double area, pib, densidadePopulacional, PIBperCapita;
unsigned long  populacao;
double superPoder1;


// CARTA 1
char Estado2, CodigoDaCarta[5], Cidade[20];
int QtdPontosTuristicos;
double Area, Pib, densidadePopulacional2, PIBperCapita2;
unsigned long  Populacao;
double superPoder2;

// ENTRADA CARTA 1
printf("INICIANDO CADASTRO DA PRIMEIRA CARTA\n");

printf("Digite uma letra de 'a' ao 'h' para representar um dos 8 estados: ");
scanf("%c", &estado);

printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
scanf("%s", codigoDaCarta);

printf("Nome da cidade: ");
scanf("\n%[^\n]", cidade);

printf("Numero de habitantes da cidade: ");
scanf("%lu", &populacao);

printf("A área da cidade em quilômetros quadrados: ");
scanf("%lf", &area);

printf("Produto interno bruto da cidade: ");
scanf("%lf", &pib);

printf("Quantidade de pontos turísticos na cidade: ");
scanf("%d", &qtdPontosTuristicos);

densidadePopulacional = (double)populacao / area;
PIBperCapita = pib / populacao;

superPoder1 =  populacao + area + pib + qtdPontosTuristicos + PIBperCapita + (1.0/ densidadePopulacional);

printf("\nCADASTRO DA PRIMEIRA CARTA FINALIZADO\n\n");

// ENTRADA CARTA 2

printf("INICIANDO CADASTRO DA SEGUNDA CARTA\n\n");

printf("Digite uma letra de 'a' ao 'h' para representar os estados: ");
scanf("\n%c", &Estado2);

printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
scanf("%s", CodigoDaCarta);

printf("Nome da cidade: ");
scanf("\n%[^\n]", Cidade);

printf("Numero de habitantes da cidade: ");
scanf("%lu", &Populacao);

printf("A área da cidade em quilômetros quadrados: ");
scanf("%lf", &Area);

printf("Produto interno bruto da cidade: ");
scanf("%lf", &Pib);

printf("Quantidade de pontos turísticos na cidade: ");
scanf("%d", &QtdPontosTuristicos);

densidadePopulacional2 = (double)Populacao / Area;
PIBperCapita2 =  Pib / Populacao;

superPoder2 =  Populacao + Area + Pib + QtdPontosTuristicos + PIBperCapita2 + (1.0/ densidadePopulacional2);


printf("\nCADASTRO DE CARTAS FINALIZADO\n\n");

// // SAIDA CARTA 1
printf("CARTA 0\n");
printf("Estado: %c\n", estado);
printf("Codigo  da carta: %s\n", codigoDaCarta);
printf("Nome da cidade: %s\n", cidade);
printf("Populacao: %lu\n", populacao);
printf("Area: %.2lf km²\n", area);
printf("PIB: %.2lf bilhoes de reais\n", pib);
printf("Pontos turistico: %d\n", qtdPontosTuristicos);
printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional);
printf("PIB per Capita: %.2lf reais\n" , PIBperCapita);
printf("Super poder: %.2lf\n\n", superPoder1);

//SAIDA CARTA 2
printf("CARTA 1\n");
printf("Estado: %c\n", Estado2);
printf("Codigo  da carta: %s\n", CodigoDaCarta);
printf("Nome da cidade: %s\n", Cidade);
printf("Populacao: %lu\n", Populacao);
printf("Area: %.2lf km²\n", Area);
printf("PIB: %.2lf bilhoes de reais\n", Pib);
printf("Pontos turistico: %d\n", QtdPontosTuristicos);
printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2lf reais\n" , PIBperCapita2);
printf("Super poder: %.2lf\n\n", superPoder2);


//MENU_INTERATIVO
int opcao;
printf("Escolha qual atribulto deseja comparar:\n\n");
printf("1 - Populacao\n");
printf("2 - Densidade populacional\n");
printf("3 - Super poder\n");
scanf("%d", &opcao);
printf(" \n");

switch (opcao)
{
case 1:
    populacao > Populacao;
    if (populacao > Populacao) {
        printf("Carta 1 - %s - Populacao - %lu\n", cidade , populacao);
        printf("Carta 2 - %s - Populacao - %lu\n", Cidade , Populacao);
        printf("Carta 1 - GANHOU...\n\n");}
    
    else if (populacao < Populacao) {
        printf("Carta 1 - %s - Populacao - %lu\n", cidade , populacao);
        printf("Carta 2 - %s - Populacao - %lu\n", Cidade , Populacao);
        printf("Carta 2 - GANHOU...\n\n");}

    else
        printf("EMPATE...");

    break;

case 2:
    densidadePopulacional < densidadePopulacional2;
    if (densidadePopulacional < densidadePopulacional2) {
        printf("Carta 1 - %s - %lf\n", cidade, densidadePopulacional);
        printf("Carta 2 - %s - %lf\n", Cidade, densidadePopulacional2);
        printf("Carta 1 - GANHOU...");}

    else if (densidadePopulacional > densidadePopulacional2) {
        printf("Carta 1 - %s - %lf\n", cidade, densidadePopulacional);
        printf("Carta 2 - %s - %lf\n", Cidade, densidadePopulacional2);
        printf("Carta 2 - GANHOU...");}

    else
        printf("EMPATE...");

    break;

case 3:
    superPoder1 > superPoder2;
    if (superPoder1 > superPoder2) {
        printf("Carta 1 - %s - %lf\n",cidade, superPoder1);
        printf("Carta 2 - %s - %lf\n",Cidade, superPoder2);
        printf("carta 1 - GANHOU...");}

    else if (superPoder1 < superPoder2) {
        printf("Carta 1 - %s - %lf\n",cidade, superPoder1);
        printf("Carta 2 - %s - %lf\n",Cidade, superPoder2);
        printf("carta 2 - GANHOU...");}

    else
        printf("EMPATE...");

}

return 0;

}