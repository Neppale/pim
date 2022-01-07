#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "relatorios.h"
#include "cadastros.h"

void selecaoCadastro() {
    int selecao2;

    printf("\nSelecione uma opcao digitando seu respectivo numero abaixo: \n");
    printf("1 - Cadastro de Atletas \n");
    printf("2 - Cadastro de Modalidade \n");
    printf("3 - Cadastro de Equipe Olimpica \n");
    printf("4 - Cadastro de Pais \n");
    printf("5 - Cadastro de Alojamento \n");
    printf("6 - Cadastro de Locais de Jogos \n");
    printf("7 - Cadastro de Equipamentos \n");
    printf("8 - Cadastro de Medicos \n");
    printf("9 - Cadastro de Funcionarios \n");
    printf("10 - Cadastro de Voluntarios \n");
    printf("11 - Cadastro de Inspetores COVID \n");
    //printf("12 - Voltar \n");
    while ((selecao2 < 1) || (selecao2 > 11)) {
        scanf("%d", & selecao2);
    }

    switch (selecao2) {
    case 1:
        cadastroAtleta();
        break;
    case 2:
        cadastroModalidade();
        break;
    case 3:
        cadastroEquipe();
        break;
    case 4:
        cadastroPais();
        break;
    case 5:
        cadastroAlojamento();
        break;
    case 6:
        cadastroLocais();
        break;
    case 7:
        cadastroEquipamentos();
        break;
    case 8:
        cadastroMedicos();
        break;
    case 9:
        cadastroFuncionarios();
        break;
    case 10:
        cadastroVoluntarios();
        break;
    case 11:
        cadastroInspetores();
    case 12:
        break;
    default:
        break;
    }
}

void selecaoRelatorio(){
    int selecao2;

    printf("\nSelecione uma opcao digitando seu respectivo numero abaixo: \n");
    printf("1 - Relatorio de Atletas \n");
    printf("2 - Relatorio de Modalidade \n");
    printf("3 - Relatorio de Equipe Olimpica \n");
    printf("4 - Relatorio de Pais \n");
    printf("5 - Relatorio de Alojamento \n");
    printf("6 - Relatorio de Locais de Jogos \n");
    printf("7 - Relatorio de Equipamentos \n");
    printf("8 - Relatorio de Medicos \n");
    printf("9 - Relatorio de Funcionarios \n");
    printf("10 - Relatorio de Voluntarios \n");
    printf("11 - Relatorio de Inspetores COVID \n");
    //printf("12 - Voltar \n");
    while ((selecao2 < 1) || (selecao2 > 11)) {
        scanf("%d", & selecao2);
    }

    switch (selecao2) {
    case 1:
        relatorioAtleta();
        break;
    case 2:
        relatorioModalidade();
        break;
    case 3:
        relatorioEquipe();
        break;
    case 4:
        relatorioPais();
        break;
    case 5:
        relatorioAlojamento();
        break;
    case 6:
        relatorioLocais();
        break;
    case 7:
        relatorioEquipamentos();
        break;
    case 8:
        relatorioMedicos();
        break;
    case 9:
        relatorioFuncionarios();
        break;
    case 10:
        relatorioVoluntarios();
        break;
    case 11:
        relatorioInspetores();
    case 12:
        break;
    default:
        break;
    }
}

void menu(){
    int selecao1;
    int selecao2;
    int selecao3;

    printf("\n=========================================================== \n");
    printf("                  JOGOS OLIMPICOS DE 2024                   \n");
    printf("                 SOFTWARE DE ADMINISTRACAO                  \n");
    printf("                     Seja bem-vindo!                        \n");
    printf("=========================================================== \n");
    printf("\nSelecione uma opcao digitando seu respectivo numero abaixo: \n");
    printf("1 - Cadastro de Informacoes \n");
    printf("2 - Relatorios \n");
    printf("3 - Calendario \n");
    printf("4 - Sair\n");
    scanf("%d", &selecao1);

    switch (selecao1){
        case 1:
            selecaoCadastro();
            break;
        case 2:
            selecaoRelatorio();
            break;
        case 3:
        calendario();
            break;
        default:
            break;
    }

}

void calendario() {
    system("cls");
    printf("\nEsta funcao ainda esta em desenvolvimento.\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    getchar();
    system("cls");
    menu();
    /*todo errado pq eu tava aprendendo a usar strcmp de madrugada
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
*/
}

void main(){
    menu();
}