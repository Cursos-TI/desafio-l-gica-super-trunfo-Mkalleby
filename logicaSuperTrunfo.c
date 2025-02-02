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
    float cart1_area, cart1_pib, cart1_pib_per_capta, cart1_densidade_pupulacional;

// Variáveis carta 2
    int cart2_num_cidade, cart2_pontos_turisticos, cart2_populacao;
    char cart2_nome[50], cart2_codigo_cidade;
    float cart2_area, cart2_pib, cart2_pib_per_capta, cart2_densidade_pupulacional;

//variavel com as letras possíveis para o código da cidade
    char letras_codigo[16] = {'a','b','c','d','e','f','g','h','A','B','C','D','E','F','G','H'};

//Variáveis de verificação
    char verif_letra_cart1, verif_letra_cart2;
    int verif_num_cart1, verif_num_cart2;
    int verif_cart1_populacao, verif_cart1_pontos_turisticos, verif_cart1_area, verif_cart1_pib, verif_cart1_pib_per_capta, verif_cart1_densidade_populacional;
    int verif_cart2_populacao, verif_cart2_pontos_turisticos, verif_cart2_area, verif_cart2_pib, verif_cart2_pib_per_capta, verif_cart2_densidade_populacional;
    int verif_cart3_populacao, verif_cart3_pontos_turisticos, verif_cart3_area, verif_cart3_pib, verif_cart3_pib_per_capta, verif_cart3_densidade_populacional;
//Variável menu
    int menu_principal, menu_cart1, menu_cart2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Olá seja bem vindo(a)\n");
    printf("\n");
    printf("----------Primeira Carta----------\n");
    printf("\n");
    //o codigo será gerado automaticamente com base nas escolhas do usuário
    printf("Insira a letra do estado (De A - H): \n");
    scanf("%c", &cart1_codigo_cidade);

    //Verificando se a letra digitado da carta 1 está entre A a H
    verif_letra_cart1 = cart1_codigo_cidade == letras_codigo[0] || cart1_codigo_cidade == letras_codigo[1] || cart1_codigo_cidade == letras_codigo[2] ||
    cart1_codigo_cidade == letras_codigo[3] || cart1_codigo_cidade == letras_codigo[4] || cart1_codigo_cidade == letras_codigo[5] ||
    cart1_codigo_cidade == letras_codigo[6] || cart1_codigo_cidade == letras_codigo[7] || cart1_codigo_cidade == letras_codigo[8] ||
    cart1_codigo_cidade == letras_codigo[9] || cart1_codigo_cidade == letras_codigo[10] || cart1_codigo_cidade == letras_codigo[11] ||
    cart1_codigo_cidade == letras_codigo[12] || cart1_codigo_cidade == letras_codigo[13] || cart1_codigo_cidade == letras_codigo[14] ||
    cart1_codigo_cidade == letras_codigo[15] ? 1 : 0;

    if (verif_letra_cart1 == 1)
    {
        //se sim pergunte o número da cidade
        printf("Insira o numero da cidade (De 1 a 4): \n");
        scanf("%d", &cart1_num_cidade);

        //Verificando se o número digitado da carta 1 está entre 1 a 4
        verif_num_cart1 = cart1_num_cidade >= 1 && cart1_num_cidade <= 4 ? 1 : 0;

        //se sim pergunte o resto das informações da carta 1
        if (verif_num_cart1 == 1)
        {
            printf("Insira o nome da cidade: \n");
            scanf("%s", &cart1_nome);
            printf("Insira a população da cidade: \n");
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

            //Verificando se a letra digitado da carta 2 está entre A a H
            verif_letra_cart2 = cart2_codigo_cidade == letras_codigo[0] || cart2_codigo_cidade == letras_codigo[1] || cart2_codigo_cidade == letras_codigo[2] ||
            cart2_codigo_cidade == letras_codigo[3] || cart2_codigo_cidade == letras_codigo[4] || cart2_codigo_cidade == letras_codigo[5] ||
            cart2_codigo_cidade == letras_codigo[6] || cart2_codigo_cidade == letras_codigo[7] || cart2_codigo_cidade == letras_codigo[8] ||
            cart2_codigo_cidade == letras_codigo[9] || cart2_codigo_cidade == letras_codigo[10] || cart2_codigo_cidade == letras_codigo[11] ||
            cart2_codigo_cidade == letras_codigo[12] || cart2_codigo_cidade == letras_codigo[13] || cart2_codigo_cidade == letras_codigo[14] ||
            cart2_codigo_cidade == letras_codigo[15] ? 1 : 0;

            if (verif_letra_cart2 == 1)
            {
                //se sim pergunte o numero da cidade
                printf("Insira o numero da cidade (De 1 a 4): \n");
                scanf(" %d", &cart2_num_cidade);

                //Verificando se o número digitado da carta 2 está entre 1 a 4
                verif_num_cart2 = cart2_num_cidade >= 1 && cart2_num_cidade <= 4 ? 1 : 0;

                //se sim pergunte o resto das infomações da carta 2 e execute o código inteiro normalmente
                if (verif_num_cart2 == 1)
                {
                    printf("Insira o nome da cidade: \n");
                    scanf("%s", &cart2_nome);
                    printf("Insira a população da cidade: \n");
                    scanf("%d", &cart2_populacao);
                    printf("Insira a área da cidade: \n");
                    scanf("%f", &cart2_area);
                    printf("Insira o PIB da cidade: \n");
                    scanf("%f", &cart2_pib);
                    printf("Insira o número de pontos turísticos da cidade: \n");
                    scanf("%d", &cart2_pontos_turisticos);

                    // Processamento para calcular a densidade populacional e o PIB per capta

                    // Carta 1
                    cart1_densidade_pupulacional = (float) cart1_populacao / cart1_area;

                    cart1_pib_per_capta = (float) cart1_pib / cart1_populacao;

                    // Carta 2
                    cart2_densidade_pupulacional = (float) cart2_populacao / cart2_area;

                    cart2_pib_per_capta = (float) cart2_pib / cart2_populacao;


                    // Comparação entre as cartas:
                    printf("\n");
                    printf("----------Comparação----------\n");
                    printf("\n");

                    //Comparação de atributos com base na escolha do usuário

                    printf("*Os atributos da Carta 1 e Carta 2 serão comparados*\n");
                    printf("\n");
                    printf("1- Escolher atributos manualmente\n");
                    printf("2- Escolher todos os atributos automaticamente\n");
                    printf("\n");
                    printf("Escolha uma opção: ");
                    scanf("%d", &menu_principal);
                    
                    //switch do menu principal
                    switch (menu_principal)
                    {
                    case 1:
                    //opção 1- Escolher atributos manualmente
                    printf("\n");
                    printf("----------Menu de seleção para comparação----------\n");
                    printf("*atributos da Carta 1 e Carta 2 que podem ser usados na comparação*\n");
                    printf("\n");
                    printf("1- População\n");
                    printf("2- Área\n");
                    printf("3- PIB\n");
                    printf("4- Pontos Turísticos\n");
                    printf("5- Densidade Populacional\n");
                    printf("6- PIB per capta\n");
                    printf("\n");
                    printf("Escolha o 1° atributo: ");
                    scanf("%d", &menu_cart1);
                    printf("\n");
                    printf("Escolha o 2° atributo: ");
                    scanf("%d", &menu_cart2);
                    printf("\n");

                    //verificando se foi digitado 2 atrubutos iguais
                    if (menu_cart1 == menu_cart2)
                    {
                    //se sim mostre o erro
                        printf("Ops, você escolheu 2 atributos iguais, tente novamente.\n");
                    }else{
                    //se não execute o código normalmente
                        // Exibição dos Dados das Cartas:
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
                        printf("Densidade populacional: %.2f\n", cart1_densidade_pupulacional);
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
                        printf("Densidade populacional: %.2f\n", cart2_densidade_pupulacional);
                        printf("PIB per Capta: %f\n", cart2_pib_per_capta);
                        printf("\n");

                        //resultados da comparação
                            //switch do 1° atributo
                            switch (menu_cart1)
                            {
                            case 1:
                            //escolha população
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("População: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart1_populacao = cart1_populacao > cart2_populacao ? 1 : 0;

                                if (cart1_populacao == cart2_populacao)
                                {
                                    printf("A população %d da carta 1, é igual que a %d da carta 2!!",cart1_populacao, cart2_populacao);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if (verif_cart1_populacao == 1)
                                {
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
                                }
                            break;

                            case 2:
                            //escolha área
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("Área: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart1_area = cart1_area > cart2_area ? 1 : 0;

                                if (cart1_area == cart2_area)
                                {
                                    printf("A área %f da carta 1, é igual que a %f da carta 2!!",cart1_area, cart2_area);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart1_area == 1){
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
                                }
                            break;

                            case 3:
                            //escolha PIB
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("PIB: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart1_pib = cart1_pib > cart2_pib ? 1 : 0;

                                if (cart1_pib == cart2_pib)
                                {
                                    printf("O PIB %f da carta 1, é igual que ao %f da carta 2!!",cart1_pib, cart2_pib);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart1_pib == 1){
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
                                }
                            break;

                            case 4:
                            //escolha pontos turísticos
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("Pontos Turísticos: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart1_pontos_turisticos = cart1_pontos_turisticos > cart2_pontos_turisticos ? 1 : 0;

                                if(cart1_pontos_turisticos == cart2_pontos_turisticos){
                                    printf("O(Os) %d ponto(os) turístico(os) da carta 1, é(são) igual(iguais) ao(aos) %d da carta 2!!",cart1_pontos_turisticos, cart2_pontos_turisticos);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart1_pontos_turisticos == 1){
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
                                }
                            break;

                            case 5:
                            //escolha densidade populacional
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("Densidade Populacional: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart1_densidade_populacional = cart1_densidade_pupulacional < cart2_densidade_pupulacional ? 1 : 0;

                                if (cart1_densidade_pupulacional == cart2_densidade_pupulacional)
                                {
                                    printf("A densidade populacional %f da carta 1, é igual que ao %f da carta 2!!",cart1_densidade_pupulacional, cart2_densidade_pupulacional);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart1_densidade_populacional == 1){
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
                                }
                            break;

                            case 6:
                            //escolha PIB per capta
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("PIB per capta: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart1_pib_per_capta = cart1_pib_per_capta > cart2_pib_per_capta ? 1 : 0;

                                if (cart1_pib_per_capta == cart2_pib_per_capta){
                                    printf("O PIB per capta %f da carta 1, igual ao %f da carta 2!!",cart1_pib_per_capta, cart2_pib_per_capta);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart1_pib_per_capta == 1){
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
                                }
                            break;
                            
                            default:
                                printf("Opção inválida.\n");
                            break;
                            }
                            //fim do switch do 1° atributo

                            //switch do 2° atributo
                            switch (menu_cart2)
                            {
                            case 1:
                            //escolha população
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("População: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart2_populacao = cart1_populacao > cart2_populacao ? 1 : 0;

                                if (cart1_populacao == cart2_populacao)
                                {
                                    printf("A população %d da carta 1, é igual que a %d da carta 2!!",cart1_populacao, cart2_populacao);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if (verif_cart2_populacao == 1)
                                {
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
                                }
                            break;

                            case 2:
                            //escolha área
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("Área: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart2_area = cart1_area > cart2_area ? 1 : 0;

                                if (cart1_area == cart2_area)
                                {
                                    printf("A área %f da carta 1, é igual que a %f da carta 2!!",cart1_area, cart2_area);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart2_area == 1){
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
                                }
                            break;

                            case 3:
                            //escolha PIB
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("PIB: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart2_pib = cart1_pib > cart2_pib ? 1 : 0;

                                if (cart1_pib == cart2_pib)
                                {
                                    printf("O PIB %f da carta 1, é igual que ao %f da carta 2!!",cart1_pib, cart2_pib);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart2_pib == 1){
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
                                }
                            break;

                            case 4:
                            //escolha pontos turísticos
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("Pontos Turísticos: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart2_pontos_turisticos = cart1_pontos_turisticos > cart2_pontos_turisticos ? 1 : 0;

                                if(cart1_pontos_turisticos == cart2_pontos_turisticos){
                                    printf("O(Os) %d ponto(os) turístico(os) da carta 1, é(são) igual(iguais) ao(aos) %d da carta 2!!",cart1_pontos_turisticos, cart2_pontos_turisticos);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart2_pontos_turisticos == 1){
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
                                }
                            break;

                            case 5:
                            //escolha densidade populacional
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("Densidade Populacional: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart2_densidade_populacional = cart1_densidade_pupulacional < cart2_densidade_pupulacional ? 1 : 0;

                                if (cart1_densidade_pupulacional == cart2_densidade_pupulacional)
                                {
                                    printf("A densidade populacional %f da carta 1, é igual que ao %f da carta 2!!",cart1_densidade_pupulacional, cart2_densidade_pupulacional);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart2_densidade_populacional == 1){
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
                                }
                            break;

                            case 6:
                            //escolha PIB per capta
                                printf("----------Resultados das Comparações----------\n");
                                printf("\n");
                                printf("PIB per capta: \n");

                                //guardando resultados em variaveis e comparando em seguida
                                verif_cart2_pib_per_capta = cart1_pib_per_capta > cart2_pib_per_capta ? 1 : 0;

                                if (cart1_pib_per_capta == cart2_pib_per_capta){
                                    printf("O PIB per capta %f da carta 1, é igual ao %f da carta 2!!",cart1_pib_per_capta, cart2_pib_per_capta);
                                    printf("\n");
                                    printf("Houve um empate, nenhum vencedor!!!\n");
                                    printf("\n");
                                }else{
                                    if(verif_cart2_pib_per_capta == 1){
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
                                }
                            break;
                            
                            default:
                                printf("Opção inválida.\n");
                            break;
                            //fim do switch do 2° atributo
                        }
                    }
                    break;

                    case 2:
                    //opção 2- Escolher todos os atributos automaticamente
                        // Exibição dos Dados das Cartas:
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
                        printf("Densidade populacional: %.2f\n", cart1_densidade_pupulacional);
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
                        printf("Densidade populacional: %.2f\n", cart2_densidade_pupulacional);
                        printf("PIB per Capta: %f\n", cart2_pib_per_capta);
                        printf("\n");

                        //resultado de todas as comparações
                        printf("\n");
                        printf("----------Resultados das Comparações----------\n");
                        printf("\n");
                        printf("População: \n");

                        //guardando resultados em variaveis e comparando em seguida
                        verif_cart3_populacao = cart1_populacao > cart2_populacao ? 1 : 0;

                        if (cart1_populacao == cart2_populacao)
                        {
                            printf("A população %d da carta 1, é igual que a %d da carta 2!!",cart1_populacao, cart2_populacao);
                            printf("\n");
                            printf("Houve um empate, nenhum vencedor!!!\n");
                            printf("\n");
                        }else{
                            if (verif_cart3_populacao == 1)
                        {
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
                        }

                        printf("Área: \n");

                        //guardando resultados em variaveis e comparando em seguida
                        verif_cart3_area = cart1_area > cart2_area ? 1 : 0;

                        if (cart1_area == cart2_area)
                        {
                            printf("A área %f da carta 1, é igual que a %f da carta 2!!",cart1_area, cart2_area);
                            printf("\n");
                            printf("Houve um empate, nenhum vencedor!!!\n");
                            printf("\n");
                        }else{
                            if(verif_cart3_area == 1){
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
                        }

                        printf("PIB: \n");

                        //guardando resultados em variaveis e comparando em seguida
                        verif_cart3_pib = cart1_pib > cart2_pib ? 1 : 0;

                        if (cart1_pib == cart2_pib)
                        {
                            printf("O PIB %f da carta 1, é igual que ao %f da carta 2!!",cart1_pib, cart2_pib);
                            printf("\n");
                            printf("Houve um empate, nenhum vencedor!!!\n");
                            printf("\n");
                        }else{
                            if(verif_cart3_pib == 1){
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
                        }

                        printf("Pontos Turísticos: \n");

                        //guardando resultados em variaveis e comparando em seguida
                        verif_cart3_pontos_turisticos = cart1_pontos_turisticos > cart2_pontos_turisticos ? 1 : 0;

                        if(cart1_pontos_turisticos == cart2_pontos_turisticos){
                            printf("O(Os) %d ponto(os) turístico(os) da carta 1, é(são) igual(iguais) ao(aos) %d da carta 2!!",cart1_pontos_turisticos, cart2_pontos_turisticos);
                            printf("\n");
                            printf("Houve um empate, nenhum vencedor!!!\n");
                            printf("\n");
                        }else{
                            if(verif_cart3_pontos_turisticos == 1){
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
                        }

                        printf("Densidade Populacional: \n");

                        //guardando resultados em variaveis e comparando em seguida
                        verif_cart3_densidade_populacional = cart1_densidade_pupulacional < cart2_densidade_pupulacional ? 1 : 0;

                        if (cart1_densidade_pupulacional == cart2_densidade_pupulacional)
                        {
                            printf("A densidade populacional %f da carta 1, é igual que ao %f da carta 2!!",cart1_densidade_pupulacional, cart2_densidade_pupulacional);
                            printf("\n");
                            printf("Houve um empate, nenhum vencedor!!!\n");
                            printf("\n");
                        }else{
                            if(verif_cart3_densidade_populacional == 1){
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
                        }

                        printf("PIB per capta: \n");

                        //guardando resultados em variaveis e comparando em seguida
                        verif_cart3_pib_per_capta = cart1_pib_per_capta > cart2_pib_per_capta ? 1 : 0;

                        if (cart1_pib_per_capta == cart2_pib_per_capta){
                            printf("O PIB per capta %f da carta 1, igual ao %f da carta 2!!",cart1_pib_per_capta, cart2_pib_per_capta);
                            printf("\n");
                            printf("Houve um empate, nenhum vencedor!!!\n");
                            printf("\n");
                        }else{
                            if(verif_cart3_pib_per_capta == 1){
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
                        }
                    break;
                    default:
                        printf("Opção inválida\n");
                    break;
                    //fim do switch do menu principal
                    }
                    //fim da comparação

                    //Encerrando o programa
                    printf("----------Fim do programa----------\n");
                    printf("\n");

                    return 0;

                    
                }else{
                    //se não
                    printf("O número digitado está incorreto, tente novamente.\n");
                }
                
            }else{
                //se não
                printf("A letra digitada está incorreta, tente novamente.\n");
            }

        }else{
            //se não
            printf("O número digitado está incorreto, tente novamente.\n");
        }
    
    }else{
        //se não
        printf("A letra digitada está incorreta, tente novamente.\n");
    }

}
