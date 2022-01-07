#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

void menu();
void calendario();
void cadastromodalidade();
void cadastroequipe();
void cadastropais();
void cadastroalojamento();
void cadastrolocais();
void cadastroequipamentos();
void cadastrotreinamentos();
void cadastromedicos();
void cadastrofuncionarios();
void cadastrovoluntarios();
void cadastroinspetores();
void cadastroatleta();
void main();

void menu(){
    int selecao1;
    int selecao2;
    printf("\n=========================================================== \n");
    printf("                  JOGOS OLIMPICOS DE 2024                   \n");
    printf("                 SOFTWARE DE ADMINISTRACAO                  \n");
    printf("                     Seja bem-vindo!                        \n");
    printf("=========================================================== \n");
    printf("\nSelecione uma opcao digitando seu respectivo numero abaixo: \n");
    printf("1 - Cadastro de Informacoes \n");
    printf("2 - Relatorios \n");
    printf("3 - Sair \n");
    scanf("%d", &selecao1);

    switch (selecao1){
        case 1:
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
            while ((selecao2 < 1) || (selecao2 > 11)){
                scanf("%d", &selecao2);
            }
            
            switch (selecao2){
                case 1:
                    cadastroatleta();
                    break;
                case 2:
                    cadastromodalidade();
                    break;
                case 3:
                    cadastroequipe();
                    break;
                case 4:
                    cadastropais();
                    break;
                case 5:
                    cadastroalojamento();
                    break;
                case 6:
                    cadastrolocais();
                    break;
                case 7:
                    cadastroequipamentos();
                    break;
                case 8:
                    cadastromedicos();
                    break;
                case 9:
                    cadastrofuncionarios();
                    break;
                case 10:
                    cadastrovoluntarios();
                    break;
                case 11:
                    cadastroinspetores();
                case 12:
                    break;
                default: 
                    break;
            }
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }

}

void cadastroatleta(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *atletaspointer; 
    atletaspointer = fopen("Database/atletas.csv", "a+"); 

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

    //Cadastro da modalidade no arquivo.
    fprintf(atletaspointer, "%d,%s,%d,%s,%s,%s\n",atual.codigo, atual.nome, atual.idade, atual.sexo, atual.nacionalidade, atual.modalidade); 

    //Atleta cadastrado no data.csv!

    fclose(atletaspointer);
    counter = 0;

        
    printf("\nAtleta cadastrado com sucesso!\n");
    /*do {
        printf("Gostaria de cadastrar outro atleta? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroatleta();
        if ((selecao == 'N') || (selecao == 'n')) menu();
    }while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); */
    menu();
    
}

void cadastromodalidade(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *modalidadepointer; 
    modalidadepointer = fopen("Database/modalidades.csv", "a+"); 

    while (!feof(modalidadepointer)){
        fgets(lastline, 150, modalidadepointer);     //calculando quantas linhas pular pra definir o codigo da modalidade
        counter++; 
    }

    fseek (modalidadepointer, -150, SEEK_END);

    modalidade atual;
    atual.id = counter;
        

    fflush(stdin);
    printf("\nInsira o nome da modalidade. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a idade maxima para esta modalidade. \n");
    scanf("%d", &atual.idade);
    fflush(stdin);

    printf("\nEsta modalidade e masculina ou feminina? \n");
    fgets(atual.sexo, LIMITEMAXIMO, stdin);
    atual.sexo[strlen(atual.sexo) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a primeira regra desta modalidade. \n");
    fgets(atual.regra1, LIMITEMAXIMO, stdin);
    atual.regra1[strlen(atual.regra1) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a segunda regra desta modalidade. \n");
    fgets(atual.regra2, LIMITEMAXIMO, stdin);
    atual.regra2[strlen(atual.regra2) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a terceira regra desta modalidade. \n");
    fgets(atual.regra3, LIMITEMAXIMO, stdin);
    atual.regra3[strlen(atual.regra3) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a quarta regra desta modalidade. \n");
    fgets(atual.regra4, LIMITEMAXIMO, stdin);
    atual.regra4[strlen(atual.regra4) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a quinta regra desta modalidade. \n");
    fgets(atual.regra5, LIMITEMAXIMO, stdin);
    atual.regra5[strlen(atual.regra5) - 1] = '\0';
    fflush(stdin);

    //Cadastro da modalidade no arquivo.
    fprintf(modalidadepointer, "%d,%s,%d,%s,%s,%s,%s,%s,%s\n",atual.id, atual.nome, atual.idade, atual.sexo, atual.regra1, atual.regra2, atual.regra3, atual.regra4, atual.regra5); 

    //Modalidade cadastrada no modalidades.csv!

    fclose(modalidadepointer);
    counter = 0;

        
    printf("\nModalidade cadastrada com sucesso!\n");
    /*do {
        printf("Gostaria de cadastrar outra modalidade? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastromodalidade(); fflush(stdin);
        if ((selecao == 'N') || (selecao == 'n')) menu(); fflush(stdin);
    }while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); */
    menu();
}

void cadastroequipe(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *equipepointer; 
    equipepointer = fopen("Database/equipes.csv", "a+"); 

    while (!feof(equipepointer)){
        fgets(lastline, 150, equipepointer);     //calculando quantas linhas pular pra definir o codigo da equipe
        counter++; 
    }

    fseek (equipepointer, -150, SEEK_END);

    equipe atual;
    atual.id = counter;
        

    fflush(stdin);
    printf("\nInsira o pais de origem da equipe. \n");
    fgets(atual.pais, LIMITEMAXIMO, stdin);
    atual.pais[strlen(atual.pais) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a quantidade de membros nesta equipe. \n");
    scanf("%d", &atual.qtdfuncionarios);
    fflush(stdin);

    //Cadastro de equipe no arquivo.
    fprintf(equipepointer, "%d,%s,%d\n",atual.id, atual.pais, atual.qtdfuncionarios);

    //Equipe cadastrada no equipes.csv!

    fclose(equipepointer);
    counter = 0;

        
    printf("\nEquipe cadastrada com sucesso!\n");
    /*while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); {
        printf("Gostaria de cadastrar outra equipe? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroequipe();
        if ((selecao == 'N') || (selecao == 'n')) menu(); 
    }*/
    menu(); 
}

void cadastropais(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *paispointer; 
    paispointer = fopen("Database/paises.csv", "a+"); 

    while (!feof(paispointer)){
        fgets(lastline, 150, paispointer);     //calculando quantas linhas pular pra definir o codigo da equipe
        counter++; 
    }

    fseek (paispointer, -150, SEEK_END);

    pais atual;
    //atual.id = counter;
        

    fflush(stdin);
    printf("\nInsira o nome do pais. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o ID deste pais (Ex. BRA para Brasil). \n");
    fgets(atual.id, 3, stdin);
    atual.id[strlen(atual.id) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a quantidade de atletas deste pais. \n");
    scanf("%d", &atual.qtdatletas);
    fflush(stdin);

    printf("\nInsira a quantidade de medicos deste pais. \n");
    scanf("%d", &atual.qtdatletas);
    fflush(stdin);

    printf("\nInsira a quantidade de funcionarios deste pais. \n");
    scanf("%d", &atual.qtdfuncionarios);
    fflush(stdin);

    //Cadastro de país no arquivo.
    fprintf(paispointer, "%d,%s,%s,%d,%d,%d\n", counter, atual.nome, atual.id, atual.qtdatletas, atual.qtdmedicos, atual.qtdfuncionarios);

    //Pais cadastrado no paises.csv!

    fclose(paispointer);
    counter = 0;

        
    printf("\nPais cadastrado com sucesso!\n");
    /*while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); {
        printf("Gostaria de cadastrar outra equipe? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroequipe();
        if ((selecao == 'N') || (selecao == 'n')) menu(); 
    }*/
    menu(); 
}

void cadastroalojamento(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *alojamentospointer; 
    alojamentospointer = fopen("Database/alojamentos.csv", "a+"); 

    while (!feof(alojamentospointer)){
        fgets(lastline, 150, alojamentospointer);     //calculando quantas linhas pular pra definir o codigo do alojamento
        counter++; 
    }

    fseek (alojamentospointer, -150, SEEK_END);

    alojamento atual;
    //atual.id = counter;

    printf("\nInsira a capacidade total de atletas neste alojamento. \n");
    scanf("%d", &atual.qtdatletas);
    fflush(stdin);

    fflush(stdin);
    printf("\nInsira o setor deste alojamento (A ate Z). \n");
    scanf("%c",&atual.setor);
    fflush(stdin);

    printf("\nInsira o sexo destinado a este alojamento (Masculino ou Feminino). \n");
    fgets(atual.sexo, LIMITEMAXIMO, stdin);
    atual.sexo[strlen(atual.sexo) - 1] = '\0';
    fflush(stdin);

    //Cadastro de alojamento no arquivo.
    fprintf(alojamentospointer, "%d,%d,%c,%s\n",counter, atual.qtdatletas, atual.setor, atual.sexo);

    //Alojamento cadastrado no alojamentos.csv!

    fclose(alojamentospointer);
    counter = 0;

        
    printf("\nAlojamento cadastrado com sucesso!\n");
    /*while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); {
        printf("Gostaria de cadastrar outra equipe? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroequipe();
        if ((selecao == 'N') || (selecao == 'n')) menu(); 
    }*/
    menu(); 
}

void cadastrolocais(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *locaispointer; 
    locaispointer = fopen("Database/locaisjogos.csv", "a+"); 

    while (!feof(locaispointer)){
        fgets(lastline, 150, locaispointer);     //calculando quantas linhas pular pra definir o codigo do alojamento
        counter++; 
    }

    fseek (locaispointer, -150, SEEK_END);

    localjogos atual;
    //atual.id = counter;

    fflush(stdin);
    printf("\nInsira o nome do local. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a modalidade a ser jogada neste local. \n");
    fgets(atual.modalidade, LIMITEMAXIMO, stdin);
    atual.modalidade[strlen(atual.modalidade) - 1] = '\0';
    fflush(stdin);

    //Cadastro de local no arquivo.
    fprintf(locaispointer, "%d,%s,%s\n", counter, atual.nome, atual.modalidade);

    //Local cadastrado no locaisjogos.csv!

    fclose(locaispointer);
    counter = 0;

        
    printf("\nLocal de jogo cadastrado com sucesso!\n");
    /*while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); {
        printf("Gostaria de cadastrar outra equipe? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroequipe();
        if ((selecao == 'N') || (selecao == 'n')) menu(); 
    }*/
    menu(); 
}

void cadastroequipamentos(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *equipamentospointer; 
    equipamentospointer = fopen("Database/equipamentos.csv", "a+"); 

    while (!feof(equipamentospointer)){
        fgets(lastline, 150, equipamentospointer);     //calculando quantas linhas pular pra definir o codigo do equipamento
        counter++; 
    }

    fseek (equipamentospointer, -150, SEEK_END);

    equipamento atual;
    //atual.id = counter;
        

    fflush(stdin);
    printf("\nInsira a modalidade dos equipamentos a serem cadastrados. \n");
    fgets(atual.modalidade, LIMITEMAXIMO, stdin);
    atual.modalidade[strlen(atual.modalidade) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o primeiro equipamento de jogo desta modalidade. \n");
    fgets(atual.equipamentojogo1, LIMITEMAXIMO, stdin);
    atual.equipamentojogo1[strlen(atual.equipamentojogo1) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o segundo equipamento de jogo desta modalidade. \n");
    fgets(atual.equipamentojogo2, LIMITEMAXIMO, stdin);
    atual.equipamentojogo2[strlen(atual.equipamentojogo2) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o terceiro equipamento de jogo desta modalidade. \n");
    fgets(atual.equipamentojogo3, LIMITEMAXIMO, stdin);
    atual.equipamentojogo3[strlen(atual.equipamentojogo3) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o primeiro equipamento de protecao desta modalidade. \n");
    fgets(atual.equipamentoprotecao1, LIMITEMAXIMO, stdin);
    atual.equipamentoprotecao1[strlen(atual.equipamentoprotecao1) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o segundo equipamento de protecao desta modalidade. \n");
    fgets(atual.equipamentoprotecao2, LIMITEMAXIMO, stdin);
    atual.equipamentoprotecao2[strlen(atual.equipamentoprotecao2) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o terceiro equipamento de protecao desta modalidade. \n");
    fgets(atual.equipamentoprotecao3, LIMITEMAXIMO, stdin);
    atual.equipamentoprotecao3[strlen(atual.equipamentoprotecao3) - 1] = '\0';
    fflush(stdin);
    
    //Cadastro de equipamentos no arquivo.
    fprintf(equipamentospointer, "%d,%s,%s,%s,%s,%s,%s,%s\n", counter, atual.modalidade, atual.equipamentojogo1, atual.equipamentojogo2, atual.equipamentojogo3, atual.equipamentoprotecao1, atual.equipamentoprotecao2, atual.equipamentoprotecao3);
    

    //Equipamento cadastrado no equipamentos.csv!

    fclose(equipamentospointer);
    counter = 0;

        
    printf("\nEquipamento cadastrado com sucesso!\n");
    /*do {
        printf("Gostaria de cadastrar outra modalidade? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastromodalidade(); fflush(stdin);
        if ((selecao == 'N') || (selecao == 'n')) menu(); fflush(stdin);
    }while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); */
    menu();
}

void cadastrotreinamentos(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *treinamentospointer; 
    treinamentospointer = fopen("Database/treinamentos.csv", "a+"); 

    while (!feof(treinamentospointer)){
        fgets(lastline, 150, treinamentospointer);     //calculando quantas linhas pular pra definir o codigo do treinamento
        counter++; 
    }

    fseek (treinamentospointer, -150, SEEK_END);

    treinamento atual;
    //atual.id = counter;

    printf("\nInsira o pais da equipe que deseja cadastrar um treinamento. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    fflush(stdin);
    printf("\nInsira a data em que sera realizado o treinamento (Ex: digite 2507 para o dia 25 de julho). \n");
    scanf("%d",&atual.data);
    fflush(stdin);

    printf("\nInsira o horario em que sera realizado o treinamento (Ex: digite 1030 para 10:30AM ou 2230 para 10:30 PM). \n");
    scanf("%d", &atual.horario);
    fflush(stdin);

    printf("\nInsira a frequencia em que sera realizado o treinamento (Ex: 2 vezes por semana). \n");
    scanf("%d", &atual.frequencia);
    fflush(stdin);

    //Cadastro de treinamentos no arquivo.
    fprintf(treinamentospointer, "%d,%s,%d,%d,%d\n", counter, atual.nome, atual.data, atual.horario, atual.frequencia);

    //Treinamento cadastrado no treinamentos.csv!

    fclose(treinamentospointer);
    counter = 0;

        
    printf("\nTreinamento cadastrado com sucesso!\n");
    /*while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); {
        printf("Gostaria de cadastrar outra equipe? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroequipe();
        if ((selecao == 'N') || (selecao == 'n')) menu(); 
    }*/
    menu(); 
}

void cadastromedicos(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *medicopointer; 
    medicopointer = fopen("Database/medicos.csv", "a+"); 

    while (!feof(medicopointer)){
        fgets(lastline, 150, medicopointer);     //calculando quantas linhas pular pra definir o codigo do medico
        counter++; 
    }

    fseek (medicopointer, -150, SEEK_END);

    medico atual;
    atual.id = counter;
        

    fflush(stdin);
    printf("\nInsira o nome completo do medico. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o pais do medico. \n");
    fgets(atual.pais, LIMITEMAXIMO, stdin);
    atual.pais[strlen(atual.pais) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a especializacao do medico. \n");
    fgets(atual.especializacao, LIMITEMAXIMO, stdin);
    atual.especializacao[strlen(atual.especializacao) - 1] = '\0';
    fflush(stdin);

    //Cadastro de medicos no arquivo.
    fprintf(medicopointer, "%d,%s,%s,%s\n",atual.id, atual.nome, atual.pais, atual.especializacao);

    //Medico cadastrado no medicos.csv!

    fclose(medicopointer);
    counter = 0;

        
    printf("\nMedico cadastrado com sucesso!\n");
    /*do {
        printf("Gostaria de cadastrar outro atleta? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroatleta();
        if ((selecao == 'N') || (selecao == 'n')) menu();
    }while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); */
    menu();
    
}

void cadastrofuncionarios(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *funcionariospointer; 
    funcionariospointer = fopen("Database/funcionarios.csv", "a+"); 

    while (!feof(funcionariospointer)){
        fgets(lastline, 150, funcionariospointer);     //calculando quantas linhas pular pra definir o codigo do funcionario
        counter++; 
    }

    fseek (funcionariospointer, -150, SEEK_END);

    funcionario atual;
    atual.id = counter;
        

    fflush(stdin);
    printf("\nInsira o nome completo do funcionario. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o pais do funcionario. \n");
    fgets(atual.pais, LIMITEMAXIMO, stdin);
    atual.pais[strlen(atual.pais) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira a area de atuacao do funcionario. \n");
    fgets(atual.areadeatuacao, LIMITEMAXIMO, stdin);
    atual.areadeatuacao[strlen(atual.areadeatuacao) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o cargo do funcionario. \n");
    fgets(atual.cargo, LIMITEMAXIMO, stdin);
    atual.cargo[strlen(atual.cargo) - 1] = '\0';
    fflush(stdin);

    //Cadastro de funcionários no arquivo.
    fprintf(funcionariospointer, "%d,%s,%s,%s,%s\n",atual.id, atual.nome, atual.pais, atual.areadeatuacao, atual.cargo);

    //Funcionario cadastrado no funcionarios.csv!

    fclose(funcionariospointer);
    counter = 0;

        
    printf("\nFuncionario cadastrado com sucesso!\n");
    /*do {
        printf("Gostaria de cadastrar outro atleta? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroatleta();
        if ((selecao == 'N') || (selecao == 'n')) menu();
    }while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); */
    menu();
    
}

void cadastrovoluntarios(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *voluntariospointer; 
    voluntariospointer = fopen("Database/voluntarios.csv", "a+"); 

    while (!feof(voluntariospointer)){
        fgets(lastline, 150, voluntariospointer);     //calculando quantas linhas pular pra definir o codigo do voluntario
        counter++; 
    }

    fseek (voluntariospointer, -150, SEEK_END);

    voluntario atual;
    atual.id = counter;
        

    fflush(stdin);
    printf("\nInsira o nome completo do voluntario. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o pais do voluntario. \n");
    fgets(atual.pais, LIMITEMAXIMO, stdin);
    atual.pais[strlen(atual.pais) - 1] = '\0';
    fflush(stdin);

    //Cadastro de voluntários no arquivo.
    fprintf(voluntariospointer, "%d,%s,%s\n",atual.id, atual.nome, atual.pais);

    //Voluntario cadastrado no voluntarios.csv!

    fclose(voluntariospointer);
    counter = 0;

        
    printf("\nVoluntario cadastrado com sucesso!\n");
    /*do {
        printf("Gostaria de cadastrar outro atleta? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroatleta();
        if ((selecao == 'N') || (selecao == 'n')) menu();
    }while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); */
    menu();
    
}

void cadastroinspetores(){
    char selecao;
    int counter = 0;
    char lastline[150];

    FILE *inspetorespointer; 
    inspetorespointer = fopen("Database/inspetorescovid.csv", "a+"); 

    while (!feof(inspetorespointer)){
        fgets(lastline, 150, inspetorespointer);     //calculando quantas linhas pular pra definir o codigo do inspetor
        counter++; 
    }

    fseek (inspetorespointer, -150, SEEK_END);

    voluntario atual;
    atual.id = counter;
        

    fflush(stdin);
    printf("\nInsira o nome completo do inspetor COVID. \n");
    fgets(atual.nome, LIMITEMAXIMO, stdin);
    atual.nome[strlen(atual.nome) - 1] = '\0';
    fflush(stdin);

    printf("\nInsira o pais do inspetor COVID. \n");
    fgets(atual.pais, LIMITEMAXIMO, stdin);
    atual.pais[strlen(atual.pais) - 1] = '\0';
    fflush(stdin);

    //Cadastro de inspetores no arquivo.
    fprintf(inspetorespointer, "%d,%s,%s\n",atual.id, atual.nome, atual.pais);

    //Inspetor cadastrado no inspetorescovid.csv!

    fclose(inspetorespointer);
    counter = 0;

        
    printf("\nInspetor COVID cadastrado com sucesso!\n");
    /*do {
        printf("Gostaria de cadastrar outro atleta? (S/N). \n");
        scanf("%c", &selecao);
        fflush(stdin);
        if ((selecao == 'S') || (selecao == 's')) cadastroatleta();
        if ((selecao == 'N') || (selecao == 'n')) menu();
    }while ((selecao != 'N') || (selecao != 'n') || (selecao != 'S') || (selecao != 's')); */
    menu();
    
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
