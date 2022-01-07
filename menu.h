#define LIMITEMAXIMO 50

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
void relatorioAtleta();
void relatorioModalidade();
void relatorioEquipe();
void relatorioPais();
void relatorioAlojamento();
void relatorioLocais();
void relatorioEquipamentos();
void relatorioMedicos();
void relatorioFuncionarios();
void relatorioVoluntarios();
void relatorioInspetores();


typedef struct atleta{
    int codigo;
    int idade;
    char nome[LIMITEMAXIMO];
    char sexo[LIMITEMAXIMO]; 
    char modalidade[LIMITEMAXIMO];
    char nacionalidade[LIMITEMAXIMO];
} atleta;

typedef struct equipe{
    int id;
    int qtdfuncionarios;
    char pais[LIMITEMAXIMO];
 } equipe;

typedef struct modalidade{
    int id;
    int idade;
    char nome[LIMITEMAXIMO];
    char regra1[LIMITEMAXIMO];
    char regra2[LIMITEMAXIMO];
    char regra3[LIMITEMAXIMO];
    char regra4[LIMITEMAXIMO];
    char regra5[LIMITEMAXIMO];
    char sexo[LIMITEMAXIMO];
 } modalidade;

 typedef struct pais{
    int qtdatletas;
    int qtdmedicos;
    int qtdfuncionarios;
    char id[5];
    char nome[LIMITEMAXIMO];
 } pais;

 typedef struct alojamento{
    int qtdatletas;
    char setor;
    char sexo[LIMITEMAXIMO];
 } alojamento;

 typedef struct localjogos{
    char nome[LIMITEMAXIMO];
    char modalidade[LIMITEMAXIMO];
 } localjogos;

 typedef struct equipamento{
    char modalidade[LIMITEMAXIMO];
    char equipamentojogo1[LIMITEMAXIMO];
    char equipamentojogo2[LIMITEMAXIMO];
    char equipamentojogo3[LIMITEMAXIMO];
    char equipamentoprotecao1[LIMITEMAXIMO];
    char equipamentoprotecao2[LIMITEMAXIMO];
    char equipamentoprotecao3[LIMITEMAXIMO];
 } equipamento;

 typedef struct treinamento{
    int data;
    int horario;
    int frequencia;
    char local;
    char nome[LIMITEMAXIMO];
 } treinamento;

typedef struct medico{
    int id;
    char nome[LIMITEMAXIMO];
    char pais[LIMITEMAXIMO];
    char especializacao[LIMITEMAXIMO];
 } medico;

typedef struct inspetorcovid{
    int id;
    char nome[LIMITEMAXIMO];
    char pais[LIMITEMAXIMO];
 } inspetorcovid;

 typedef struct funcionario{
    int id;
    char nome[LIMITEMAXIMO];
    char pais[LIMITEMAXIMO];
    char areadeatuacao[LIMITEMAXIMO];
    char cargo[LIMITEMAXIMO];
 } funcionario;


 typedef struct voluntario{
    int id;
    char nome[LIMITEMAXIMO];
    char pais[LIMITEMAXIMO];
 } voluntario;

 
 


