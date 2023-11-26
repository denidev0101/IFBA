#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char x[30] = "Deu certo";
	
	 FILE *file;
	 
	 file = fopen("arq.bin", "wb");
	 

    if (file != NULL) 
	{
        printf("Arquivo aberto com sucesso.\n");
       
    }else{
    	
    	printf("Erro ao abrir o arquivo.\n");
    	exit(1);
	}

    fwrite(x, sizeof(char), 30, file);

    fclose(file);
    
    printf("\n");
}
