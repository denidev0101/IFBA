#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Struct para pergunta
struct Pergunta {
    char questao[100];
    int id;
};

// Struct para resposta
struct Resposta {
    char resposta[100];
    int id;
};

// Função para preencher perguntas
void preencherPerguntas(struct Pergunta perguntas[]) {
    // Implemente aqui a leitura das perguntas do arquivo binário
    FILE *file = fopen("perguntas.bin", "rb");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo de perguntas.\n");
        exit(1);
    }

    fread(perguntas, sizeof(struct Pergunta), 8, file);

    fclose(file);
}

// Função para preencher respostas
void preencherRespostas(struct Resposta respostas[]) {
    // Implemente aqui a leitura das respostas do arquivo binário
    FILE *file = fopen("respostas.bin", "rb");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo de respostas.\n");
        exit(1);
    }

    fread(respostas, sizeof(struct Resposta), 8, file);

    fclose(file);
}

// Função para criar tabuleiro
void criarTabuleiro(struct Pergunta perguntas[], struct Resposta respostas[], struct Pergunta tabuleiro[][4]) {
    int i, j, randomIndex;

    // Preencher tabuleiro com perguntas e respostas de forma aleatória
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            // Gera índices aleatórios para perguntas e respostas
            randomIndex = rand() % 8;

            // Insere a pergunta no tabuleiro
            tabuleiro[i][j] = perguntas[randomIndex];

            // Insere a resposta no tabuleiro
            tabuleiro[i + 1][j] = respostas[randomIndex];
        }
    }
}

int main() {
    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Definir structs e variáveis necessárias
    struct Pergunta perguntas[8];
    struct Resposta respostas[8];
    struct Pergunta tabuleiro[8][4];

    // Preencher perguntas e respostas a partir dos arquivos binários
    preencherPerguntas(perguntas);
    preencherRespostas(respostas);

    // Restante do código para implementar as outras funcionalidades do jogo

    return 0;
}
