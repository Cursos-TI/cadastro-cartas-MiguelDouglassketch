//carta 


#include <stdio.h>

int main() {

    // ---------- cidade 1 ----------
    char pernanbuco;           // Estado
    char codigo55[5];          // Código da carta
    char recife[50];           // Nome da cidade
    int populacao50000;        // População
    float area222221;          // Área
    float pib100000;           // PIB
    int olinda;                // Pontos turísticos

    // ---------- cidade 2 ----------
    char saopaulo;             // Estado
    char codigo33[5];          // Código da carta
    char rj[50];               // Nome da cidade
    int populacao88888;        // População
    float area54545;           // Área
    float pib99999;            // PIB
    int spspsp;                // Pontos turísticos

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &pernanbuco);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo55);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", recife);

    printf("Digite a população: ");
    scanf("%d", &populacao50000);

    printf("Digite a área (em km²): ");
    scanf("%f", &area222221);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib100000);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &olinda);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &saopaulo);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo33);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", rj);

    printf("Digite a população: ");
    scanf("%d", &populacao88888);

    printf("Digite a área (em km²): ");
    scanf("%f", &area54545);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib99999);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &spspsp);

  
    printf("\n==================== cidade 1 ====================\n");
    printf("Estado: %c\n", pernanbuco);
    printf("Código: %s\n", codigo55);
    printf("Nome da Cidade: %s\n", recife);
    printf("População: %d\n", populacao50000);
    printf("Área: %.2f km²\n", area222221);
    printf("PIB: %.2f bilhões de reais\n", pib100000);
    printf("Número de Pontos Turísticos: %d\n", olinda);

    printf("\n==================== cidade 2 ====================\n");
    printf("Estado: %c\n", saopaulo);
    printf("Código: %s\n", codigo33);
    printf("Nome da Cidade: %s\n", rj);
    printf("População: %d\n", populacao88888);
    printf("Área: %.2f km²\n", area54545);
    printf("PIB: %.2f bilhões de reais\n", pib99999);
    printf("Número de Pontos Turísticos: %d\n", spspsp);

    return 0;
}

