#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
// Variáveis carta 1
    int cart1_num_cidade, cart1_pontos_turisticos, cart1_populacao;
    char cart1_nome[50], cart1_codigo_cidade;
    float cart1_area, cart1_pib, cart1_pib_per_capta, cart1_densidade_pupulacional, cart1_super_poder;

    // Variáveis carta 2
    int cart2_num_cidade, cart2_pontos_turisticos, cart2_populacao;
    char cart2_nome[50], cart2_codigo_cidade;
    float cart2_area, cart2_pib, cart2_pib_per_capta, cart2_densidade_pupulacional, cart2_super_poder;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Olá seja bem vindo(a)\n");
    printf("\n");
    printf("----------Primeira Carta----------\n");
    printf("\n");
    printf("Insira a letra do estado (De A - H): \n");
    scanf("%c", &cart1_codigo_cidade);
    printf("Insira o numero da cidade (De 1 a 4): \n");
    scanf("%d", &cart1_num_cidade);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cart1_nome);
    printf("Insira a polulação da cidade: \n");
    scanf("%d", &cart1_populacao);
    printf("Insira a área da cidade: \n");
    scanf("%f", &cart1_area);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &cart1_pib);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &cart1_pontos_turisticos);

    printf("\n");
    
    printf("----------Segunda Carta----------\n");
    printf("\n");
    printf("Insira a letra do estado (De A - H): \n");
    scanf(" %c", &cart2_codigo_cidade);
    printf("Insira o numero da cidade (De 1 a 4): \n");
    scanf(" %d", &cart2_num_cidade);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cart2_nome);
    printf("Insira a polulação da cidade: \n");
    scanf("%d", &cart2_populacao);
    printf("Insira a área da cidade: \n");
    scanf("%f", &cart2_area);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &cart2_pib);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &cart2_pontos_turisticos);

    // Processamento

    // Carta 1
    cart1_densidade_pupulacional = (float) cart1_populacao / cart1_area;

    cart1_pib_per_capta = (float) cart1_pib / cart1_populacao;

    // Carta 2
    cart2_densidade_pupulacional = (float) cart2_populacao / cart2_area;

    cart2_pib_per_capta = (float) cart2_pib / cart2_populacao;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n");

    printf("----------Dados----------\n");

    // Carta 1
    printf("\n");
    printf("Primeira Carta: \n");
    printf("\n");

    printf("Codigo da sua cidade: %c%d\n", cart1_codigo_cidade, cart1_num_cidade);
    printf("Nome da cidade: %s\n", cart1_nome);
    printf("População: %d\n", cart1_populacao);
    printf("Área: %f\n", cart1_area);
    printf("PIB: %.3f\n", cart1_pib);
    printf("Pontos turísticos: %d\n", cart1_pontos_turisticos);
    printf("Densidade pupulacional: %.2f\n", cart1_densidade_pupulacional);
    printf("PIB per Capta: %f\n", cart1_pib_per_capta);

    // Carta 2

    printf("\n");
    printf("Segunda Carta: \n");
    printf("\n");

    printf("Codigo da sua cidade: %c%d\n", cart2_codigo_cidade, cart2_num_cidade);
    printf("Nome da cidade: %s\n", cart2_nome);
    printf("População: %d\n", cart2_populacao);
    printf("Área: %f\n", cart2_area);
    printf("PIB: %.3f\n", cart2_pib);
    printf("Pontos turísticos: %d\n", cart2_pontos_turisticos);
    printf("Densidade pupulacional: %.2f\n", cart2_densidade_pupulacional);
    printf("PIB per Capta: %f\n", cart2_pib_per_capta);

    printf("\n");
    printf("----------Comparação----------\n");
    printf("\n");
    // Comparação entre as cartas:

    //Comparação de atributos
    printf("População: \n");

    if(cart1_populacao > cart2_populacao){
        printf("A população %d da carta 1, é maior que a %d da carta 2!!",cart1_populacao, cart2_populacao);
        printf("\n");
        printf("A carta número 1 é a vencedora!!!\n");
        printf("\n");
    }else{
        printf("A população %d da carta 1, é menor que a %d da carta 2!!",cart1_populacao, cart2_populacao);
        printf("\n");
        printf("A carta número 2 é a vencedora!!!\n");
        printf("\n");
    }

    printf("Área: \n");

    if(cart1_area > cart2_area){
        printf("A área %f da carta 1, é maior que a %f da carta 2!!",cart1_area, cart2_area);
        printf("\n");
        printf("A carta número 1 é a vencedora!!!\n");
        printf("\n");
    }else{
         printf("A área %f da carta 1, é menor que a %f da carta 2!!",cart1_area, cart2_area);
        printf("\n");
        printf("A carta número 2 é a vencedora!!!\n");
        printf("\n");
    }

    printf("PIB: \n");

    if(cart1_pib > cart2_pib){
        printf("O PIB %f da carta 1, é maior que o %f da carta 2!!",cart1_pib, cart2_pib);
        printf("\n");
        printf("A carta número 1 é a vencedora!!!\n");
        printf("\n");
    }else{
        printf("O PIB %f da carta 1, é menor que o %f da carta 2!!",cart1_pib, cart2_pib);
        printf("\n");
        printf("A carta número 2 é a vencedora!!!\n");
        printf("\n");
    }

    printf("Pontos Turísticos: \n");

    if(cart1_pontos_turisticos > cart2_pontos_turisticos){
        printf("O(Os) %d ponto(os) turístico(os) da carta 1, é(são) maior(maiores) que o(os) %d da carta 2!!",cart1_pontos_turisticos, cart2_pontos_turisticos);
        printf("\n");
        printf("A carta número 1 é a vencedora!!!\n");
        printf("\n");
    }else{
        printf("O(Os) %d ponto(os) turístico(os) da carta 1, é(são) menor(menores) que o(os) %d da carta 2!!",cart1_pontos_turisticos, cart2_pontos_turisticos);
        printf("\n");
        printf("A carta número 2 é a vencedora!!!\n");
        printf("\n");
    }

    printf("Densidade Populacional: \n");

    if(cart1_densidade_pupulacional < cart2_densidade_pupulacional){
        printf("A densidade populacional %f da carta 1, é menor que a %f da carta 2!!",cart1_densidade_pupulacional, cart2_densidade_pupulacional);
        printf("\n");
        printf("A carta número 1 é a vencedora!!!\n");
        printf("\n");
    }else{
        printf("A densidade populacional %f da carta 2, é menor que a %f da carta 1!!", cart2_densidade_pupulacional, cart1_densidade_pupulacional);
        printf("\n");
        printf("A carta número 2 é a vencedora!!!\n");
        printf("\n");
    }

    printf("PIB per capta: \n");

    if(cart1_area > cart2_area){
        printf("O PIB per capta %f da carta 1, é maior que o %f da carta 2!!",cart1_pib_per_capta, cart2_pib_per_capta);
        printf("\n");
        printf("A carta número 1 é a vencedora!!!\n");
        printf("\n");
    }else{
        printf("O PIB per capta %f da carta 1, é menor que o %f da carta 2!!",cart1_pib_per_capta, cart2_pib_per_capta);
        printf("\n");
        printf("A carta número 2 é a vencedora!!!\n");
        printf("\n");
    }
    //fim da comparação
    //Encerrando o programa

    printf("\n");
    printf("----------Fim do programa----------\n");
    printf("\n");

    return 0;

    return 0;
}
