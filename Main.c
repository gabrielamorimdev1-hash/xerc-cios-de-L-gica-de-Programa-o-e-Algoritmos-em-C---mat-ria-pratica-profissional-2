#include <stdio.h>

int main() {

/*EXERCÍCIO 1 — Saudação

 DESCRIÇÃO NARRATIVA: 
LEIA O NOME DE UMA PESSOA E APRESENTE UMA MENSAGEM DE BOAS-VINDAS
   PSEUDOCÓDIGO: 

   INICIO 
    LEIA NOME
        ↓
   SCANF()    
        ↓
    ESCREVA MENSAGEM
        ↓
    PRINTF()
    FIM
*/
    char nome[200];

    printf("Exercicio 1 - Saudação ---- \nDigite o seu nome: ");
    scanf("%s", nome);
    printf("Bem-vindo(a), %s!\n", nome);




/*EXERCÍCIO 2 - SOMA DE DOIS NÚMEROS
DESCRIÇÃO NARRATIVA:
LEIA DOIS NUMEROS INTEIRO, CALCULE A SOMA ENTRE ELES E APRENSENTE NA TELA 
O PRIMEIRO NÚMERO, O SEGUNDO NÚMERO E O RESULTADO DA SOMA. 

PSEUDOCODIGO:
INICIO
LEIA NUMERO1, NUMERO2
          ↓
    SCANF()    
          ↓
    SOMA = NUMERO1 + NUMERO2
          ↓
    ESCREVA NUMERO1, NUMERO2, SOMA
          ↓
    PRINTF()
FIM    

*/ 
    int num1, num2, soma;    

    printf("Exercicio 2 - Soma de dois números ----\nDigite o primeiro número: ");
    scanf("%d", &num1);

    printf("digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("o valor da soma é %d + %d = %d\n", num1, num2, soma);
        
    
/* EXERCÍCIO 3 - Quatro operações
DESCRIÇÃO NARRATIVA:
Leia dois números inteiros e calcule as quatro operações básicas 
(soma, subtração, multiplicação e divisão) entre eles. Em seguida, 
apresente os dois números informados e os resultados de cada uma das operações na tela.

PSEUDOCODIGO:
    LEIA NUMEROA, NUMEROB
          ↓
    SCANF()    
          ↓
    SOMA = NUMEROA + NUMEROB
    SUBTRACAO = NUMEROA - NUMEROB
    MULTIPLICACAO = NUMEROA * NUMEROB
    DIVISAO = NUMEROA / NUMEROB
          ↓
    ESCREVA NUMEROA, NUMEROB, SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO
          ↓
    PRINTF()
FIM

*/      

    int numeroA, numeroB, soma2, subtracao, multiplicacao;
    double divisao;

    printf("Exercicio 3 - Quatro operações ----\nDigite o primeiro número: ");
    scanf("%d", &numeroA);

    printf("Digite o segundo numero:");
    scanf("%d", &numeroB);

    soma2 = numeroA + numeroB;
    subtracao = numeroA - numeroB;
    multiplicacao = numeroA * numeroB;
    divisao = (double)numeroA / (double)numeroB;

    printf("Primeiro numero: %d\n", numeroA);
    printf("Segundo numero: %d\n", numeroB);
    printf("os valores sao: %d + %d = %d\n", numeroA, numeroB, soma2);
    printf("os valores sao: %d - %d = %d\n", numeroA, numeroB, subtracao);
    printf("os valores sao: %d * %d = %d\n", numeroA, numeroB, multiplicacao);
    printf("os valores sao: %d / %d = %.2f\n", numeroA , numeroB, divisao);



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