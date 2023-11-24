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

// Fun��o para preencher perguntas
void preencherPerguntas(struct Pergunta perguntas[]) {
    // Implemente aqui a leitura das perguntas do arquivo bin�rio
    FILE *file = fopen("perguntas.bin", "rb");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo de perguntas.\n");
        exit(1);
    }

    fread(perguntas, sizeof(struct Pergunta), 8, file);

    fclose(file);
}

// Fun��o para preencher respostas
void preencherRespostas(struct Resposta respostas[]) {
    // Implemente aqui a leitura das respostas do arquivo bin�rio
    FILE *file = fopen("respostas.bin", "rb");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo de respostas.\n");
        exit(1);
    }

    fread(respostas, sizeof(struct Resposta), 8, file);

    fclose(file);
}

// Fun��o para criar tabuleiro
void criarTabuleiro(struct Pergunta perguntas[], struct Resposta respostas[], struct Pergunta tabuleiro[][4]) {
    int i, j, randomIndex;

    // Preencher tabuleiro com perguntas e respostas de forma aleat�ria
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            // Gera �ndices aleat�rios para perguntas e respostas
            randomIndex = rand() % 8;

            // Insere a pergunta no tabuleiro
            tabuleiro[i][j] = perguntas[randomIndex];

            // Insere a resposta no tabuleiro
            tabuleiro[i + 1][j] = respostas[randomIndex];
        }
    }
}

int main() {
    // Inicializar o gerador de n�meros aleat�rios
    srand(time(NULL));

    // Definir structs e vari�veis necess�rias
    struct Pergunta perguntas[8];
    struct Resposta respostas[8];
    struct Pergunta tabuleiro[8][4];

    // Preencher perguntas e respostas a partir dos arquivos bin�rios
    preencherPerguntas(perguntas);
    preencherRespostas(respostas);

    // Restante do c�digo para implementar as outras funcionalidades do jogo

    return 0;
}
