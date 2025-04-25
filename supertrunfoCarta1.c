#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo!\n");
    printf("Novo commit\n");

    char estado= 'P';
    char codigodacarta [4]= "P01";
    char cidade[20] = "Recife";
    int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int numeropontosTuristicos = 55;
    float densidade = 6803.60;
    float pibpercapita = 33094.37;

    printf("Estado: %d\n", estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Cidade: %d\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área em Km²: %.2f quilometros quadrado\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Números de pontos Turisticos: %d\n", numeropontosTuristicos);
    printf("Densidade: %.2f\n", densidade);
    printf("Pib per capita: %.2f\n", pib);


}
