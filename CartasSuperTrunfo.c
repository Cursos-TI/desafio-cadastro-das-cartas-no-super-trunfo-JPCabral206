#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

// Declaração de variáveis globais
int turisticos, populacao;  // Armazena o número de pontos turísticos e a população
char estado[50], codigo[50], cidade[50];  // Armazena o estado, código e nome da cidade
float area, pib, densidade, pibper;  // Armazena a área, PIB, densidade populacional e PIB per capita
int num = 1;  // Variável não utilizada no código

// Função para criar uma carta com informações da cidade
void criar_carta() {
    printf("Bem-vindo as Cartas Super Triunfo\n");

    printf("Digite o nome da sua Cidade: \n");
    scanf("%s", cidade);  // Lê o nome da cidade

    printf("Digite o codigo da cidade de 1 a 4: \n");
    scanf("%s", codigo);  // Lê o código da cidade

    printf("Digite o codigo do estado de A até H: \n");
    scanf("%s", estado);  // Lê o código do estado

    printf("Digite o número da populacao:\n");
    scanf("%d", &populacao);  // Lê a população da cidade
    
    printf("Digite o numero da area:\n");
    scanf("%f", &area);  // Lê a área da cidade

    printf("Digite o PIB: \n");
    scanf("%f", &pib);  // Lê o PIB da cidade

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turisticos);  // Lê o número de pontos turísticos

    // Calcula a densidade populacional (habitantes por km²)
    densidade = populacao / area;

    // Calcula o PIB per capita (PIB dividido pela população)
    pibper = pib / populacao;
}

// Função para exibir a carta da cidade cadastrada
void visualizar_carta() {
    printf("Codigo da Carta: %s %s \n", codigo, estado);  // Exibe o código da carta
    printf("Nome da cidade: %s\n", cidade);  // Exibe o nome da cidade
    printf("Populacao: %d Pessoas\n", populacao);  // Exibe a população da cidade
    printf("Area: %.2f Km2\n", area);  // Exibe a área da cidade
    printf("PIB: %.2f bilhoes de reais\n", pib);  // Exibe o PIB da cidade
    printf("Pontos Turisticos: %d\n", turisticos);  // Exibe o número de pontos turísticos
    printf("Densidade populacional: %.2f hab./km2\n", densidade);  // Exibe a densidade populacional
    printf("PIB Per Capita: %.2f Reais\n\n", pibper);  // Exibe o PIB per capita
}

int main() {
    int opcao;  // Variável para armazenar a escolha do usuário

    // Loop do menu principal
    do {
        // Exibe o menu de opções
        printf("\nSeja bem-vindo ao Super Trunfo!\n"
               "1 - Criar carta de cidade\n"
               "2 - Visualizar cartas\n"
               "3 - Sair\n\n");
        
        scanf("%d", &opcao);  // Lê a opção escolhida pelo usuário

        // Estrutura switch para executar a opção escolhida
        switch (opcao) {
            case 1:
                criar_carta();  // Chama a função para criar uma carta
                continue;  // Retorna ao início do loop
            case 2:
                visualizar_carta();  // Chama a função para visualizar a carta
                continue;  // Retorna ao início do loop
            case 3:
                printf("Saindo...\n");  // Exibe mensagem de saída
                break;  // Sai do switch
            default:
                printf("Opcao invalida! Tente novamente.\n");  // Mensagem de erro para opção inválida
        }

    } while (opcao != 3);  // Continua no loop até que o usuário escolha sair (opção 3)

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}