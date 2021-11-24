#define LIMITEMAXIMO 50

typedef struct atleta{
    int codigo;
    int idade;
    char nome[LIMITEMAXIMO];
    char sexo[LIMITEMAXIMO]; 
    char modalidade[LIMITEMAXIMO];
    char nacionalidade[LIMITEMAXIMO];
} atleta;

typedef struct equipe{
    int qtdmembros;
    char nome[LIMITEMAXIMO];
    char modalidade[25];
    char equipamentos[100];
 } equipe;

typedef struct modalidade{
    int idade;
    char nome[LIMITEMAXIMO];
    char regras[LIMITEMAXIMO];
    char sexo[LIMITEMAXIMO];
 } modalidade;

 typedef struct pais{
    int qtdatletas;
    int qtdmedicos;
    int funcionarios;
    char id[3];
 } pais;

 typedef struct alojamento{
    int qtdatletas;
    char setor;
    char sexo[LIMITEMAXIMO];
 } alojamento;

 typedef struct localjogos{
    char [LIMITEMAXIMO];
    
 } localjogos;




