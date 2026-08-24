#include <stdio.h>

int main() {



/* DESCRIÇÃO NARRATIVA:
LEIA A IDADE DE UMA PESSOA. EM SEGUIDA,
VERIFIQUE SE A IDADE É MAIOR OU IGUAL A 18 ANOS. 
SE FOR, EXIBA A MENSAGEM "ACESSO PERMITIDO". 
CASO CONTRÁRIO, EXIBA A MENSAGEM "ACESSO NEGADO".

PSEUDOCÓDIGO:

INICIO
    ESCREVA "DIGITE A SUA IDADE:"
    LEIA IDADE
          ↓
    SE IDADE >= 18 ENTAO
        ESCREVA "ACESSO PERMITIDO"
    SENAO
        ESCREVA "ACESSO NEGADO"
    FIM_SE
FIM

*/
    int idadeM;

    printf("EXERCÍCIO 11 Maior de Idade ---\nDigite a sua idade: ");
    scanf("%d", &idadeM);

    if (idadeM >= 18) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}