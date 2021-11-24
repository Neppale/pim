#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

void menu();
void calendario();


void cadastroatleta(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *atletaspointer; 
    atletaspointer = fopen("Database/data.csv", "a+"); 

    while (!feof(atletaspointer)){
        fgets(lastline, 150, atletaspointer);     //calculando quantas linhas pular pra definir o codigo do atleta
        counter++; 
    }

    fseek (atletaspointer, -150, SEEK_END);

    atleta atual;
    atual.codigo = counter;
        

    fflush(stdin);
    printf("\nInsira o nome completo do atleta. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a idade do atleta. \n");
    scanf("%d", &atual.idade);
    fflush(stdin);

    printf("\nInsira o sexo do atleta (Masculino ou Feminino). \n");
    fgets(atual.sexo, LIMITEMAXIMO, stdin);
    atual.sexo[strlen(atual.sexo) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a nacionalidade do atleta. \n");
    fgets(atual.nacionalidade, LIMITEMAXIMO, stdin);
    atual.nacionalidade[strlen(atual.nacionalidade) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a modalidade em que o atleta ira competir. \n");
    fgets(atual.modalidade, LIMITEMAXIMO, stdin);
    atual.modalidade[strlen(atual.modalidade) - 1] = '\0';
    fflush(stdin);
        

    fprintf(atletaspointer, "%d", counter);
    fprintf(atletaspointer, ",");
    fprintf(atletaspointer, "%s", atual.nome);
    fprintf(atletaspointer, ",");
    fprintf(atletaspointer, "%d", atual.idade);
    fprintf(atletaspointer, ",");
    fprintf(atletaspointer, "%s", atual.sexo);
    fprintf(atletaspointer, ",");
    fprintf(atletaspointer, "%s", atual.nacionalidade);
    fprintf(atletaspointer, ",");
    fprintf(atletaspointer, "%s", atual.modalidade);
    fprintf(atletaspointer, "\n");

    //Atleta cadastrado no data.csv!

    fclose(atletaspointer);
    counter = 0;

        
    printf("\nAtleta cadastrado com sucesso!\n");
    do {
        printf("Gostaria de cadastrar outro atleta? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroatleta();
        if ((selecao == 'N') || (selecao == 'n')) menu();
    }while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); 
    
}

void menu(){
    int selecao;
    printf("\nSelecione uma opcao digitando seu respectivo numero abaixo: \n");
    printf("1 - Cadastro de Atletas \n");
    printf("2 - Pesquisa de Atletas \n");
    printf("3 - Relatorios \n");
    scanf("%d", &selecao);

    switch (selecao){
        case 1:
            cadastroatleta();
            break;
        case 4:
            calendario();
            break;
        default:
            break;
    }

}

void calendario() {
    //todo errado pq eu tava aprendendo a usar strcmp de madrugada
    int selecaodia;
    char selecaomes[6];
    fflush(stdin);

    printf("\nOs Jogos Olimpicos de Verao de 2024 iniciarao em 26 de julho de 2024 e terminarao em 11 de agosto de 2024.\n");
    do {
        printf("Selecione um mes (Julho ou Agosto).\n");
        fgets(selecaomes, 6, stdin);
        selecaomes[strlen(selecaomes) - 1] = '\0';
        fflush(stdin);
    } while ((strcmp(selecaomes, "Julho") != 0) || (strcmp(selecaomes, "julho") != 0) || (strcmp(selecaomes, "Agosto") != 0) || (strcmp(selecaomes, "agosto") != 0));

    if ((strcmp(selecaomes, "Julho") == 0) || (strcmp(selecaomes, "julho") == 0)) {
        printf("Selecione um dia (1 - 31).\n");
        scanf("%d", & selecaodia);
        fflush(stdin);

    } else if ((strcmp(selecaomes, "Agosto") == 0) || (strcmp(selecaomes, "agosto") == 0)) {
        printf("Selecione um dia (1 - 31).\n");
        scanf("%d", & selecaodia);
        fflush(stdin);

    } else {
        printf("Mes invalido. Verifique a ortografia.\n\n");
    }

}

void main(){
    menu();
}






