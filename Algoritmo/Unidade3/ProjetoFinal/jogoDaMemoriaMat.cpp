#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define tamVet 8

// Struct para criar jogadores
struct Jogador {
    char nomeJogador[30];
    int pontos;
}player1, player2;

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

// Função para preencher Jogadores
void preencherJogadores()
{
	// Inserindo dados do jogador 1
	printf("Entre com o nome do jogador 1:");
	scanf("%s",&player1.nomeJogador);
	printf("\n");
	player1.pontos=0;
	
	// Inserindo dados do jogador 2
	printf("Entre com o nome do jogador 2:");
	scanf("%s",&player2.nomeJogador);
	printf("\n");
	player2.pontos=0;
	
}

// Função para preencher perguntas									
void preencherPerguntas(struct Pergunta perguntas[])
{
   // Cria o arquivo binário de perguntas
   FILE *ask = fopen("perguntas.bin", "wb");
   
   // Checa para ver se o arquivo existe
 	if (ask != NULL)
 	{
        printf("Arquivo de perguntas aberto com sucesso.\n");
       
    }else{
    	
    	printf("Erro ao abrir o arquivo de perguntas.\n");
    	exit(1);
	}
	
   // Escrevendo as perguntas no arquivo binário 
    fwrite(perguntas, sizeof(Pergunta),tamVet , ask);

    fclose(ask);
    
}


// Função para preencher respostas																
void preencherRespostas(struct Resposta respostas[])
{
    // Cria o arquivo binário de respostas
    FILE *any = fopen("respostas.bin", "wb");

	// Checa para ver se o arquivo existe
    if (any != NULL)
 	{
        printf("Arquivo de respostas aberto com sucesso.\n");
       
    }else{
    	
    	printf("Erro ao abrir o arquivo de respostas.\n");
    	exit(1);
	}
	
	// Escrevendo as respostas no arquivo binário 
    fwrite(respostas, sizeof(Resposta), tamVet, any);

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
    // srand(time(NULL));


	// Inserindo jogadores
	preencherJogadores();

    // Inserindo perguntas no vetor de perguntas
    struct Pergunta perguntas[tamVet];
    
    	sprintf(perguntas[0].questao, "12 x 12");
        perguntas[0].id =0;
        
        sprintf(perguntas[1].questao, "21 ÷ 3");
        perguntas[1].id =1;
      
    	sprintf(perguntas[2].questao, "20 x 20");
        perguntas[2].id =2;
        
        sprintf(perguntas[3].questao, "144/2");
        perguntas[3].id =3;
        
        sprintf(perguntas[4].questao, "sqrt(25)");
        perguntas[4].id =4;
        
        sprintf(perguntas[5].questao, "2¹²");
        perguntas[5].id =5;
      
    	sprintf(perguntas[6].questao, "3*12/2");
        perguntas[6].id =6;
        
        sprintf(perguntas[7].questao, "sqrt(49)");
        perguntas[7].id =7;
        
        
	// Inserindo respostas no vetor de respostas
    struct Resposta respostas[tamVet];
    
    	sprintf(respostas[0].resultado, "144");
        respostas[0].id =0;
        
        sprintf(respostas[1].resultado, "7");
        respostas[1].id =1;
      
    	sprintf(respostas[2].resultado, "400");
        respostas[2].id =2;
        
        sprintf(respostas[3].resultado, "72");
        respostas[3].id =3;
        
        sprintf(respostas[4].resultado, "5");
		respostas[4].id =4;

		sprintf(respostas[5].resultado, "2048");
		respostas[5].id =5;

		sprintf(respostas[6].resultado, "18");
		respostas[6].id =6;

		sprintf(respostas[7].resultado, "7");
		respostas[7].id =7;
		
	// Preencher perguntas e respostas a partir dos arquivos binários
    preencherPerguntas(perguntas);
    preencherRespostas(respostas);
        


   // struct Pergunta tabuleiro[8][4];


    return 0;
}
