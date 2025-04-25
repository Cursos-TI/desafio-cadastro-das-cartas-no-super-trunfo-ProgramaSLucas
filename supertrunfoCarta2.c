#include <stdio.h>

int main() {
    char estado = 'B';
    char codigodacarta[4] = "B01";
    char cidade[9] = "Salvador";
    int populacao = 6748000;
    float area = 1200.25;
    float pib = 300.50;
    int numerospontosTuristicos = 50;
    float densidade = 7128. 15;
    float pibpercapita = 35218,.83;

    printf("Estado: %d\n", estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área em Km²: %.2f quilometros quadrado\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numerospontosTuristicos);
    printf("Densidade: %.2f\n", densidade);
    printf("Pib per capita: %.2f\n", pib);
    
return 0;

}
