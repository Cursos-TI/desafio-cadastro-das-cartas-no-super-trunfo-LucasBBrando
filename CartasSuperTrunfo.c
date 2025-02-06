#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa    

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    unsigned int numCidade1 = 1,numCidade2 = 2;
    char cidade1[50], cidade2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float pontosTuristicos1, pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("*****BEM VINDO AO SUPER TRUNFO *****\n");
    printf("***VAMOS AGORA COLOCAR AS INFORMAÇÕES*** \n \n");

    //Primeira coleta de dados para carta-completo

    printf("PRIMEIRA CARTA!! \n \n");

    printf("Insira o nome da Cidade:\n");
    scanf("%s",&cidade1);

    printf("Insira o numero da População:\n");
    scanf("%u",&populacao1);

    printf("Insira o tamanho da Área da Cidade:\n");
    scanf("%f",&area1);

    printf("Insira o PIB:\n");
    scanf("%f",&pib1);

    printf("Insira os Pontos Turisticos da Cidade:\n");
    scanf("%f",&pontosTuristicos1);

    //Segunda coleta de dados para carta-completo

    printf("\nSEGUNDA CARTA!! \n \n");
    
    printf("Insira o nome da Cidade:\n");
    scanf("%s",&cidade2);

    printf("Insira o numero da População:\n");
    scanf("%u",&populacao2);

    printf("Insira o tamanho da Área:\n");
    scanf("%f",&area2);

    printf("Insira o PIB:\n");
    scanf("%f",&pib2);

    printf("Insira os Pontos Turisticos da Cidade:\n");
    scanf("%f",&pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n \n \n");
    printf("##AGORA AS CARTAS## \n \n");

    //primeira carta - colocar a comparação- concluido
    printf("Primeira Carta Inserida!!\n \n");
    printf("*Cod: %d \n*Nome da Cidade: %s\n*População: %.0f\n",numCidade1, cidade1, populacao1);
    printf("*Área: %.2f \n*PIB da Cidade: $%.2f \n*Pontos turisticos: %.0f \n \n", area1, pib1, pontosTuristicos1);

    float dencidadePopulacao1 =  populacao1 / area1;
    float pibCapita1 = pib1 / populacao1;
    float somaTotal1 = populacao1 + area1 + pib1 + pontosTuristicos1;

    printf("*PIB per Capita: %.2f \n*Dencidade Populacional: %.2f \n \n", pibCapita1, dencidadePopulacao1);
    printf("**SUPER PODER: %.0f** \n \n", somaTotal1);
    
    //segunda carta - colocar a comparação- concluido
    printf("Segunda Carta Inserida!!\n \n");
    printf("*Cod: %d \n*Nome da Cidade: %s\n*População: %.0f\n",numCidade2, cidade2, populacao2);
    printf("*Área: %.2f \n*PIB da Cidade: $%.2f \n*Pontos turisticos: %.0f \n \n", area2, pib2, pontosTuristicos2);
    
    float dencidadePopulacao2 =  populacao2 / area2;
    float pibCapita2 = pib2 / populacao2;
    float somaTotal2 = populacao2 + area2 + pib2 + pontosTuristicos2;


    printf("*PIB per Capita: %.2f \n*Dencidade Populacional: %.0f \n \n", pibCapita2, dencidadePopulacao2);
    printf("**SUPER PODER: %.0f** \n \n", somaTotal2);

    char* resultComparacao1 = ((float)pibCapita1 > pibCapita2) ? "Primeira cidade ganhou" : "Segunda cidade ganhou";
    char* resultComparacao2 = ((float) dencidadePopulacao1 < dencidadePopulacao2) ? "Primeira cidade ganhou" : "Segunda cidade ganhou";
    char* resultComparacao3 = somaTotal1 > somaTotal2 ? "Primeira cidade ganhou" : "Segunda cidade ganhou";
    
    //Comparações das cartas
    printf("COMPARACAO!\n\n");
    printf("*PIB PER CAPITA: %s\n", resultComparacao1);
    printf("*DENCIDADE POPULACIONAL: %s\n", resultComparacao2);
    printf("*SUPER PODER: %s\n", resultComparacao3);

    return 0;
}
