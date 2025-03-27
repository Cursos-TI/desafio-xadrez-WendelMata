#include <stdio.h>

// Funções recursivas para movimentação das peças (Nível Mestre)
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Bispo movendo para diagonal superior direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Torre movendo para a direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Rainha movendo para a esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    int i, j;

    // Nível Novato: Movimentação simples com loops
    printf("=== Nível Novato ===\n");
    for (i = 0; i < 5; i++) {
        printf("Bispo movendo para diagonal superior direita\n");
    }
    for (i = 0; i < 5; i++) {
        printf("Torre movendo para a direita\n");
    }
    for (i = 0; i < 8; i++) {
        printf("Rainha movendo para a esquerda\n");
    }

    // Nível Aventureiro: Movimentação do cavalo em L com loops aninhados
    printf("\n=== Nível Aventureiro ===\n");
    for (i = 0; i < 2; i++) {
        printf("Cavalo movendo para baixo\n");
    }
    j = 0;
    while (j < 1) {
        printf("Cavalo movendo para a esquerda\n");
        j++;
    }

    // Nível Mestre: Movimentação com recursão e loops múltiplos
    printf("\n=== Nível Mestre ===\n");
    moverBispo(5);
    moverTorre(5);
    moverRainha(8);
    
    // Movimentação do cavalo com continue e break
    printf("\nMovimentação do cavalo em L para cima à direita:\n");
    for (i = 0; i < 2; i++) {
        if (i == 1) continue;
        printf("Cavalo movendo para cima\n");
    }
    for (j = 0; j < 1; j++) {
        printf("Cavalo movendo para a direita\n");
        break;
    }

    return 0;
}

