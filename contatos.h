#define TOTAL 3
#define NOME 25
#define SOBRENOME 50
#define EMAIL 50

typedef struct Contato {
  char nome[NOME];
  char sobrenome[SOBRENOME];
  int numero;
  char email[EMAIL];
} Contato;

typedef enum {OK, SEM_CONTATOS, NAO_ENCONTRADO} ERROS;

typedef ERROS (*funcao)(Contato[], int*);

ERROS criar(Contato contatos[], int *pos);
ERROS listar(Contato contatos[], int *pos);
ERROS deletar(Contato contatos[], int *pos);

void clearBuffer();