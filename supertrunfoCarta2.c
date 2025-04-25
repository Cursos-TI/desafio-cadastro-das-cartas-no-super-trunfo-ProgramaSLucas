#include <stdio.h>

int main() {
    char estado = 'B';
    char codigodacarta[4] = "B01";
    char cidade[9] = "Salvador";
    int populacao = 6748000;
    float area = 1200.25;
    float pib = 300.50;
    int numerospontosTuristicos = 50;

    printf("Estado: %d\n", estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área em Km²: %.2f quilometros quadrado\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numerospontosTuristicos);

return 0;

}
