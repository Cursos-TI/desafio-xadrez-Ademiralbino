#include <stdio.h>

// --- Funções Recursivas para as Peças ---

// Função recursiva para o movimento da Torre
// Move-se 5 casas para a direita
void moverTorre(int casas) {
    if (casas <= 0) {
        return; // Caso base da recursão
    }
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva para a próxima casa
}

// Função recursiva para o movimento da Rainha
// Move-se 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) {
        return; // Caso base da recursão
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva para a próxima casa
}

// Função recursiva para o movimento do Bispo
// A lógica de loops aninhados para o Bispo é mais complexa, então a recursividade
// é usada para controlar o número de "passos" na diagonal.
void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return; // Caso base
    }
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1); // Próxima iteração recursiva
}


// --- Função Principal ---
int main() {
    printf("--- Movimento da Torre (usando recursividade) ---\n");
    moverTorre(5); // Chamada inicial para 5 casas
    
    printf("\n");

    printf("--- Movimento da Rainha (usando recursividade) ---\n");
    moverRainha(8); // Chamada inicial para 8 casas
    
    printf("\n");
    
    // --- Movimento do Bispo usando loops aninhados e recursividade ---
    // O Bispo se move na diagonal (cima e direita)
    // A implementação com loops aninhados pode ser um pouco diferente da intuitiva.
    // Aqui, o loop externo controla o movimento 'vertical' e o interno, o 'horizontal'.
    // A combinação dos dois simula a diagonal.
    printf("--- Movimento do Bispo (usando loops aninhados) ---\n");
    int casasDiagonal = 5;
    for (int i = 0; i < casasDiagonal; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    
    printf("\n");
    
    // --- Movimento do Cavalo (usando loops aninhados complexos) ---
    // O Cavalo se move em "L": 2 para cima, 1 para a direita.
    // Usamos `break` para sair do loop interno e `continue` para pular uma iteração se necessário.
    
    printf("--- Movimento do Cavalo (usando loops aninhados complexos) ---\n");
    int casasCima = 2;
    int casasDireita = 1;

    for (int i = 0; i < 3; i++) { // Loop externo para controlar os passos do "L"
        if (i < 2) { // Primeiros dois passos: para cima
            printf("Cima\n");
        } else { // Terceiro passo: para a direita
            int j = 0;
            while (j < casasDireita) {
                if (j == 0) {
                    printf("Direita\n");
                }
                j++;
            }
        }
    }
    
    return 0;
}