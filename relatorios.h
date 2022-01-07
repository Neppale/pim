void relatorioAtleta(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de atletas sao organizadas da seguinte forma:\n");
    printf("Cadastro,Nome Completo,Idade,Sexo,Nacionalidade,Modalidade\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/atletas.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== ATLETAS ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n===============================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioModalidade(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de modalidades sao organizadas da seguinte forma:\n");
    printf("Cadastro,Nome da Modalidade,Idade Maxima,Sexo,Regra 1,Regra 2,Regra 3,Regra 4,Regra 5.\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/modalidades.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== MODALIDADES ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n====================================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioEquipe(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de equipe olimpica sao organizadas da seguinte forma:\n");
    printf("Identificacao,pais,quantidade de funcionarios\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/equipes.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== EQUIPES ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n===============================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioPais(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de paises sao organizadas da seguinte forma:\n");
    printf("Nome,Identificacao,Quantidade de atletas,Quantidade de Medicos,Quantidade de Funcionarios\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/paises.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== PAISES ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n================================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioAlojamento(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de alojamentos sao organizadas da seguinte forma:\n");
    printf("Capacidade,Setor,Sexo\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/alojamentos.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== ALOJAMENTOS ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n===================================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioLocais(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de locais de jogo sao organizadas da seguinte forma:\n");
    printf("Nome,Modalidade\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/locaisjogos.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== LOCAIS ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n==============================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioEquipamentos(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de equipamentos sao organizadas da seguinte forma:\n");
    printf("Modalidade,Equipamento de Jogo 1,Equipamento de Jogo 2,Equipamento de Jogo 3,Equipamento de Protecao 1,Equipamento de Protecao 2,Equipamento de Protecao 3\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/equipamentos.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== EQUIPAMENTOS ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n====================================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioTreinamentos(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de treinamentos sao organizadas da seguinte forma:\n");
    printf("Pais,Data,Horario,Frequencia Semanal\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/treinamentos.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== TREINAMENTOS ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n===============================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioMedicos(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de medicos sao organizadas da seguinte forma:\n");
    printf("Nome,Pais,Especializacao\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/medicos.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== MEDICOS ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n===============================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioFuncionarios(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de funcionarios sao organizadas da seguinte forma:\n");
    printf("Nome,Pais,Area de Atuacao,Cargo\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/funcionarios.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== FUNCIONARIOS ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n====================================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioVoluntarios(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de voluntarios sao organizadas da seguinte forma:\n");
    printf("Nome,Pais\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/voluntarios.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== VOLUNTARIOS ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n===================================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}

void relatorioInspetores(){
    system("cls");
    printf("\n\nAs informacoes no relatorio de inspetores COVID sao organizadas da seguinte forma:\n");
    printf("Nome,Pais\n\n");
    getchar();

    FILE* ptr;
    char ch;
 
    ptr = fopen("Database/inspetorescovid.csv", "r");
 
    if (NULL == ptr) {
        printf("Nao foi possível abrir o arquivo. Tente novamente. \n");
    }
 
    printf("==================== INSPETORES ====================\n\n");
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    fclose(ptr);
    printf("\n==================================================\n");
    printf("Pressione enter para voltar para o menu.");
    getchar();
    system("cls");
    menu();
}
