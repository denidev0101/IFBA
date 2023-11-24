#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define TAM 4
// Struct para pergunta
struct Pergunta {
    char questao[100];
    int id;
};

// Struct para resposta
struct Resposta {
    char resultado[100];
    int id;
};

															// Função para preencher perguntas
void preencherPerguntas(struct Pergunta perguntas[])
{
   	
	printf("%s", perguntas[2);
	   
	   															 // Implemente aqui a leitura das perguntas do arquivo binário
   FILE *ask = fopen("perguntas.bin", "rb");
	struct Pergunta asks[] = Pergunta perguntas[];
 	 if (ask == NULL)
	{
        printf("Erro ao abrir o arquivo de perguntas.\n");
        exit(1);
    }
   

    fread(perguntas, sizeof(struct Pergunta), 4, ask);

    fclose(ask);
    */   
}

																// Função para preencher respostas
void preencherRespostas(struct Resposta respostas[])
{
    															// Implemente aqui a leitura das respostas do arquivo binário
    FILE *any = fopen("respostas.bin", "rb");

    if (any == NULL)
	{
        printf("Erro ao abrir o arquivo de respostas.\n");
        exit(1);
    }

    fread(respostas, sizeof(struct Resposta), 4, any);

    fclose(any);
}



/*
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
*/
int main() {
	setlocale(LC_ALL,"Portuguese");
    // Inicializar o gerador de números aleatórios
    //srand(time(NULL));

    // Definir structs e variáveis necessárias
    
    
    struct Pergunta perguntas[TAM];
    
    	sprintf(perguntas[0].questao, "5+2");
        perguntas[0].id =0;
        
        sprintf(perguntas[1].questao, "7-3");
        perguntas[1].id =1;
      
    	sprintf(perguntas[2].questao, "4*8");
        perguntas[2].id =2;
        
        sprintf(perguntas[3].questao, "10/2");
        perguntas[3].id =3;
    
    struct Resposta respostas[TAM];
    
    	sprintf(respostas[0].resultado, "7");
        respostas[0].id =0;
        
        sprintf(respostas[1].resultado, "4");
        respostas[1].id =1;
      
    	sprintf(respostas[2].resultado, "32");
        respostas[2].id =2;
        
        sprintf(respostas[3].resultado, "5");
        respostas[3].id =3;
        
    
    
    

   // struct Pergunta tabuleiro[8][4];

    // Preencher perguntas e respostas a partir dos arquivos binários
    preencherPerguntas(perguntas);
    preencherRespostas(respostas);

    // Restante do código para implementar as outras funcionalidades do jogo



    return 0;
}
