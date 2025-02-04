#include <stdio.h>
 

    int turisticos,populacao;
    char estado[50], codigo[50], cidade[50];    
    float area, pib, densidade, pibper;
    int num= 1;

    void criar_carta(){

    printf("Bem vindo as Cartas Super Triunfo\n");

    printf("Digite o nome da sua Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o codigo da cidade de 1 a 4: \n");
    scanf("%s", &codigo);

    printf("Digite o codigo do estado de A ate H: \n");
    scanf("%s", &estado);

    printf("Digite o Numero da populacao:\n");
    scanf("%d", &populacao);
    
    printf("Digite o Numero da Area:\n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &turisticos);

    
    densidade = populacao / area;
    pibper = pib / populacao;

    }

    void visualizar_carta(){
    printf("Codigo da Carta: %s %s \n", codigo, estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %d Pessoas\n", populacao);
    printf("Area: %.2f Km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("Densidade populacional: %.2f hab./km2\n", densidade);
    printf("PIB Per Capita : %f Reais\n\n", pibper);
}
int main() {
    int opcao ;
    do{
    printf("\nSeja Bem vindo ao Super Trunfo!\n"
    "1 - Criar carta de cidade\n"
    "2 - Visualizar cartas\n"
    "3 - comparar cartas\n"
    "4 - Sair\n\n"
    );
    scanf("%d", &opcao);
    switch (opcao) {
            case 1:
                criar_carta();
                continue;
            case 2:
                visualizar_carta();
                continue;
            case 3:
                continue;    
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
    }


} while (opcao !=4);

    return 0;
}
