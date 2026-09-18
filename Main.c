#include <stdio.h>

int main() {

    /* EXERCÍCIO 1 — Saudação

    DESCRIÇÃO NARRATIVA:
    LEIA O NOME DE UMA PESSOA E APRESENTE UMA MENSAGEM DE BOAS-VINDAS.

    PSEUDOCÓDIGO:
    INICIO
        LEIA NOME
        ESCREVA MENSAGEM
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA NOME
        ↓
    ESCREVA MENSAGEM
        ↓
    FIM
    */

    char nome[200];

    printf("\nExercicio 1 - Saudacao ----\n");
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Ola, %s! Seja bem-vindo(a) a disciplina de Logica de Programacao.\n", nome);


    /* EXERCÍCIO 2 — Soma de dois números

    DESCRIÇÃO NARRATIVA:
    LEIA DOIS NUMEROS INTEIROS, CALCULE A SOMA ENTRE ELES
    E APRESENTE OS NUMEROS E O RESULTADO.

    PSEUDOCÓDIGO:
    INICIO
        LEIA NUMERO1, NUMERO2
        SOMA = NUMERO1 + NUMERO2
        ESCREVA NUMERO1, NUMERO2, SOMA
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA NUMERO1, NUMERO2
        ↓
    SOMA = NUMERO1 + NUMERO2
        ↓
    ESCREVA NUMERO1, NUMERO2, SOMA
        ↓
    FIM
    */

    int num1, num2, soma;

    printf("\nExercicio 2 - Soma de dois numeros ----\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O valor da soma e %d + %d = %d\n", num1, num2, soma);


    /* EXERCÍCIO 3 — Quatro operações

    DESCRIÇÃO NARRATIVA:
    LEIA DOIS NUMEROS E CALCULE SOMA, SUBTRACAO,
    MULTIPLICACAO E DIVISAO.

    PSEUDOCÓDIGO:
    INICIO
        LEIA NUMEROA, NUMEROB
        SOMA = NUMEROA + NUMEROB
        SUBTRACAO = NUMEROA - NUMEROB
        MULTIPLICACAO = NUMEROA * NUMEROB
        DIVISAO = NUMEROA / NUMEROB
        ESCREVA RESULTADOS
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA NUMEROA, NUMEROB
        ↓
    CALCULE AS QUATRO OPERACOES
        ↓
    ESCREVA RESULTADOS
        ↓
    FIM
    */

    int numeroA, numeroB, soma2, subtracao, multiplicacao;
    double divisao;

    printf("\nExercicio 3 - Quatro operacoes ----\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &numeroA);

    printf("Digite o segundo numero: ");
    scanf("%d", &numeroB);

    soma2 = numeroA + numeroB;
    subtracao = numeroA - numeroB;
    multiplicacao = numeroA * numeroB;

    printf("%d + %d = %d\n", numeroA, numeroB, soma2);
    printf("%d - %d = %d\n", numeroA, numeroB, subtracao);
    printf("%d * %d = %d\n", numeroA, numeroB, multiplicacao);

    if (numeroB != 0) {
        divisao = (double) numeroA / numeroB;
        printf("%d / %d = %.2f\n", numeroA, numeroB, divisao);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }


    /* EXERCÍCIO 4 — Média do aluno

    DESCRIÇÃO NARRATIVA:
    LEIA TRES NOTAS E CALCULE A MEDIA ARITMETICA.

    PSEUDOCÓDIGO:
    INICIO
        LEIA NOTA1, NOTA2, NOTA3
        MEDIA = (NOTA1 + NOTA2 + NOTA3) / 3
        ESCREVA MEDIA
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA NOTAS
        ↓
    CALCULE MEDIA
        ↓
    ESCREVA MEDIA
        ↓
    FIM
    */

    float nota1, nota2, nota3, media;

    printf("\nExercicio 4 - Media do aluno ----\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media final: %.2f\n", media);


    /* EXERCÍCIO 5 — Área do retângulo

    DESCRIÇÃO NARRATIVA:
    LEIA A BASE E A ALTURA DE UM RETANGULO E CALCULE SUA AREA.

    PSEUDOCÓDIGO:
    INICIO
        LEIA BASE, ALTURA
        AREA = BASE * ALTURA
        ESCREVA AREA
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA BASE, ALTURA
        ↓
    AREA = BASE * ALTURA
        ↓
    ESCREVA AREA
        ↓
    FIM
    */

    float base, altura, areaRetangulo;

    printf("\nExercicio 5 - Area do retangulo ----\n");

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    areaRetangulo = base * altura;

    printf("Area do retangulo: %.2f\n", areaRetangulo);


    /* EXERCÍCIO 6 — Área do círculo

    DESCRIÇÃO NARRATIVA:
    LEIA O RAIO DE UM CIRCULO E CALCULE SUA AREA.
    CONSIDERE PI = 3.14159.

    PSEUDOCÓDIGO:
    INICIO
        LEIA RAIO
        AREA = 3.14159 * RAIO * RAIO
        ESCREVA AREA
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA RAIO
        ↓
    CALCULE AREA
        ↓
    ESCREVA AREA
        ↓
    FIM
    */

    float raio, areaCirculo;

    printf("\nExercicio 6 - Area do circulo ----\n");

    printf("Digite o raio: ");
    scanf("%f", &raio);

    areaCirculo = 3.14159 * raio * raio;

    printf("Area do circulo: %.2f\n", areaCirculo);


    /* EXERCÍCIO 7 — Conversão de temperatura

    DESCRIÇÃO NARRATIVA:
    LEIA UMA TEMPERATURA EM CELSIUS E CONVERTA PARA FAHRENHEIT.

    PSEUDOCÓDIGO:
    INICIO
        LEIA CELSIUS
        FAHRENHEIT = (CELSIUS * 9 / 5) + 32
        ESCREVA FAHRENHEIT
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA CELSIUS
        ↓
    CONVERTA PARA FAHRENHEIT
        ↓
    ESCREVA RESULTADO
        ↓
    FIM
    */

    float celsius, fahrenheit;

    printf("\nExercicio 7 - Conversao de temperatura ----\n");

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);


    /* EXERCÍCIO 8 — Salário mensal

    DESCRIÇÃO NARRATIVA:
    LEIA A QUANTIDADE DE HORAS TRABALHADAS E O VALOR RECEBIDO
    POR HORA. CALCULE O SALARIO BRUTO.

    PSEUDOCÓDIGO:
    INICIO
        LEIA HORAS, VALOR_HORA
        SALARIO = HORAS * VALOR_HORA
        ESCREVA SALARIO
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA HORAS, VALOR_HORA
        ↓
    CALCULE SALARIO
        ↓
    ESCREVA SALARIO
        ↓
    FIM
    */

    float horas, valorHora, salario;

    printf("\nExercicio 8 - Salario mensal ----\n");

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    printf("Salario bruto: R$ %.2f\n", salario);


    /* EXERCÍCIO 9 — Consumo de combustível

    DESCRIÇÃO NARRATIVA:
    LEIA A DISTANCIA PERCORRIDA E A QUANTIDADE DE COMBUSTIVEL
    UTILIZADA. CALCULE O CONSUMO MEDIO EM KM/L.

    PSEUDOCÓDIGO:
    INICIO
        LEIA DISTANCIA, LITROS
        CONSUMO = DISTANCIA / LITROS
        ESCREVA CONSUMO
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA DISTANCIA, LITROS
        ↓
    CALCULE CONSUMO
        ↓
    ESCREVA CONSUMO
        ↓
    FIM
    */

    float distancia, litros, consumo;

    printf("\nExercicio 9 - Consumo de combustivel ----\n");

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite os litros utilizados: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo medio: %.2f km/L\n", consumo);


    /* EXERCÍCIO 10 — Valor da compra

    DESCRIÇÃO NARRATIVA:
    LEIA O NOME DO PRODUTO, QUANTIDADE COMPRADA E PRECO UNITARIO.
    CALCULE O VALOR TOTAL.

    PSEUDOCÓDIGO:
    INICIO
        LEIA PRODUTO, QUANTIDADE, PRECO
        TOTAL = QUANTIDADE * PRECO
        ESCREVA TOTAL
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA PRODUTO, QUANTIDADE, PRECO
        ↓
    CALCULE TOTAL
        ↓
    ESCREVA TOTAL
        ↓
    FIM
    */

    char produto[100];
    int quantidade;
    float preco, totalCompra;

    printf("\nExercicio 10 - Valor da compra ----\n");

    printf("Digite o nome do produto: ");
    scanf("%s", produto);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Digite o preco unitario: ");
    scanf("%f", &preco);

    totalCompra = quantidade * preco;

    printf("Produto: %s\n", produto);
    printf("Valor total: R$ %.2f\n", totalCompra);


    /* EXERCÍCIO 11 — Maior de idade

    DESCRIÇÃO NARRATIVA:
    LEIA A IDADE DE UMA PESSOA E INFORME SE ELA E
    MAIOR OU MENOR DE IDADE.

    PSEUDOCÓDIGO:
    INICIO
        LEIA IDADE
        SE IDADE >= 18 ENTAO
            ESCREVA "MAIOR DE IDADE"
        SENAO
            ESCREVA "MENOR DE IDADE"
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA IDADE
        ↓
    IDADE >= 18?
      ↙       ↘
    SIM       NAO
     ↓         ↓
    MAIOR     MENOR
      ↘       ↙
         FIM
    */

    int idadeM;

    printf("\nExercicio 11 - Maior de idade ----\n");

    printf("Digite a sua idade: ");
    scanf("%d", &idadeM);

    if (idadeM >= 18) {
        printf("Maior de idade.\n");
    } else {
        printf("Menor de idade.\n");
    }


    /* EXERCÍCIO 12 — Número positivo ou negativo

    DESCRIÇÃO NARRATIVA:
    LEIA UM NUMERO E INFORME SE ELE E POSITIVO, NEGATIVO OU ZERO.

    PSEUDOCÓDIGO:
    INICIO
        LEIA NUMERO
        SE NUMERO > 0
            ESCREVA "POSITIVO"
        SENAO SE NUMERO < 0
            ESCREVA "NEGATIVO"
        SENAO
            ESCREVA "ZERO"
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA NUMERO
        ↓
    NUMERO > 0?
     ↙      ↘
   SIM      NAO
    ↓        ↓
 POSITIVO  NUMERO < 0?
           ↙       ↘
         SIM       NAO
          ↓         ↓
       NEGATIVO    ZERO
    */

    float numero12;

    printf("\nExercicio 12 - Numero positivo ou negativo ----\n");

    printf("Digite um numero: ");
    scanf("%f", &numero12);

    if (numero12 > 0) {
        printf("Numero positivo.\n");
    } else if (numero12 < 0) {
        printf("Numero negativo.\n");
    } else {
        printf("O numero e zero.\n");
    }


    /* EXERCÍCIO 13 — Número par ou ímpar

    DESCRIÇÃO NARRATIVA:
    LEIA UM NUMERO INTEIRO E DETERMINE SE ELE E PAR OU IMPAR.

    PSEUDOCÓDIGO:
    INICIO
        LEIA NUMERO
        SE NUMERO % 2 == 0
            ESCREVA "PAR"
        SENAO
            ESCREVA "IMPAR"
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA NUMERO
        ↓
    NUMERO % 2 == 0?
       ↙       ↘
     SIM       NAO
      ↓         ↓
     PAR       IMPAR
    */

    int numero13;

    printf("\nExercicio 13 - Numero par ou impar ----\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero13);

    if (numero13 % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }


    /* EXERCÍCIO 14 — Maior entre dois números

    DESCRIÇÃO NARRATIVA:
    LEIA DOIS NUMEROS DIFERENTES E APRESENTE QUAL E O MAIOR.

    PSEUDOCÓDIGO:
    INICIO
        LEIA A, B
        SE A > B
            ESCREVA A
        SENAO
            ESCREVA B
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA A, B
        ↓
      A > B?
     ↙     ↘
   SIM     NAO
    ↓       ↓
 MOSTRA A MOSTRA B
    */

    float valorA14, valorB14;

    printf("\nExercicio 14 - Maior entre dois numeros ----\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &valorA14);

    printf("Digite o segundo numero: ");
    scanf("%f", &valorB14);

    if (valorA14 > valorB14) {
        printf("O maior numero e %.2f\n", valorA14);
    } else {
        printf("O maior numero e %.2f\n", valorB14);
    }


    /* EXERCÍCIO 15 — Maior entre três números

    DESCRIÇÃO NARRATIVA:
    LEIA TRES NUMEROS E DETERMINE QUAL E O MAIOR.

    PSEUDOCÓDIGO:
    INICIO
        LEIA A, B, C

        SE A >= B E A >= C
            ESCREVA A
        SENAO SE B >= A E B >= C
            ESCREVA B
        SENAO
            ESCREVA C
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA A, B, C
        ↓
    A E O MAIOR?
      ↙      ↘
    SIM      NAO
     ↓        ↓
 MOSTRA A   B E O MAIOR?
             ↙      ↘
           SIM      NAO
            ↓        ↓
         MOSTRA B  MOSTRA C
    */

    float valorA15, valorB15, valorC15;

    printf("\nExercicio 15 - Maior entre tres numeros ----\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &valorA15);

    printf("Digite o segundo numero: ");
    scanf("%f", &valorB15);

    printf("Digite o terceiro numero: ");
    scanf("%f", &valorC15);

    if (valorA15 >= valorB15 && valorA15 >= valorC15) {
        printf("O maior numero e %.2f\n", valorA15);
    } else if (valorB15 >= valorA15 && valorB15 >= valorC15) {
        printf("O maior numero e %.2f\n", valorB15);
    } else {
        printf("O maior numero e %.2f\n", valorC15);
    }


    /* EXERCÍCIO 16 — Situação acadêmica

    DESCRIÇÃO NARRATIVA:
    LEIA DUAS NOTAS E CALCULE A MEDIA.
    MEDIA >= 7 = APROVADO
    MEDIA >= 5 E < 7 = RECUPERACAO
    MEDIA < 5 = REPROVADO

    PSEUDOCÓDIGO:
    INICIO
        LEIA NOTA1, NOTA2
        MEDIA = (NOTA1 + NOTA2) / 2

        SE MEDIA >= 7
            ESCREVA "APROVADO"
        SENAO SE MEDIA >= 5
            ESCREVA "RECUPERACAO"
        SENAO
            ESCREVA "REPROVADO"
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA NOTAS
        ↓
    CALCULE MEDIA
        ↓
    MEDIA >= 7?
      ↙      ↘
    SIM      NAO
     ↓        ↓
 APROVADO  MEDIA >= 5?
             ↙      ↘
           SIM      NAO
            ↓        ↓
      RECUPERACAO  REPROVADO
    */

    float notaA16, notaB16, media16;

    printf("\nExercicio 16 - Situacao academica ----\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &notaA16);

    printf("Digite a segunda nota: ");
    scanf("%f", &notaB16);

    media16 = (notaA16 + notaB16) / 2;

    printf("Media: %.2f\n", media16);

    if (media16 >= 7) {
        printf("Situacao: Aprovado.\n");
    } else if (media16 >= 5) {
        printf("Situacao: Recuperacao.\n");
    } else {
        printf("Situacao: Reprovado.\n");
    }


    /* EXERCÍCIO 17 — Desconto na compra

    DESCRIÇÃO NARRATIVA:
    ATE R$ 100 = SEM DESCONTO
    DE R$ 100,01 A R$ 500 = 5%
    ACIMA DE R$ 500 = 10%

    PSEUDOCÓDIGO:
    INICIO
        LEIA VALOR

        SE VALOR <= 100
            PERCENTUAL = 0
        SENAO SE VALOR <= 500
            PERCENTUAL = 5
        SENAO
            PERCENTUAL = 10
        FIM_SE

        DESCONTO = VALOR * PERCENTUAL / 100
        FINAL = VALOR - DESCONTO

        ESCREVA VALOR, PERCENTUAL, DESCONTO, FINAL
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA VALOR
        ↓
    VALOR <= 100?
      ↙       ↘
    SIM       NAO
     ↓         ↓
     0%     VALOR <= 500?
              ↙      ↘
            SIM      NAO
             ↓        ↓
             5%      10%
               ↘    ↙
             CALCULA
             DESCONTO
    */

    float valorCompra17;
    float percentual17;
    float desconto17;
    float valorFinal17;

    printf("\nExercicio 17 - Desconto na compra ----\n");

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra17);

    if (valorCompra17 <= 100) {
        percentual17 = 0;
    } else if (valorCompra17 <= 500) {
        percentual17 = 5;
    } else {
        percentual17 = 10;
    }

    desconto17 = valorCompra17 * percentual17 / 100;
    valorFinal17 = valorCompra17 - desconto17;

    printf("Valor original: R$ %.2f\n", valorCompra17);
    printf("Percentual de desconto: %.0f%%\n", percentual17);
    printf("Valor do desconto: R$ %.2f\n", desconto17);
    printf("Valor final: R$ %.2f\n", valorFinal17);


    /* EXERCÍCIO 18 — Faixa etária

    DESCRIÇÃO NARRATIVA:
    0 A 12 = CRIANCA
    13 A 17 = ADOLESCENTE
    18 A 59 = ADULTO
    60 OU MAIS = IDOSO

    PSEUDOCÓDIGO:
    INICIO
        LEIA IDADE

        SE IDADE <= 12
            ESCREVA "CRIANCA"
        SENAO SE IDADE <= 17
            ESCREVA "ADOLESCENTE"
        SENAO SE IDADE <= 59
            ESCREVA "ADULTO"
        SENAO
            ESCREVA "IDOSO"
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA IDADE
        ↓
    IDADE <= 12?
      ↙      ↘
 CRIANCA    IDADE <= 17?
             ↙      ↘
      ADOLESCENTE  IDADE <= 59?
                     ↙      ↘
                  ADULTO   IDOSO
    */

    int idade18;

    printf("\nExercicio 18 - Faixa etaria ----\n");

    printf("Digite a idade: ");
    scanf("%d", &idade18);

    if (idade18 <= 12) {
        printf("Crianca.\n");
    } else if (idade18 <= 17) {
        printf("Adolescente.\n");
    } else if (idade18 <= 59) {
        printf("Adulto.\n");
    } else {
        printf("Idoso.\n");
    }


    /* EXERCÍCIO 19 — Cálculo do IMC

    DESCRIÇÃO NARRATIVA:
    LEIA PESO E ALTURA.
    CALCULE IMC = PESO / ALTURA AO QUADRADO.

    ABAIXO DE 18.5 = ABAIXO DO PESO
    18.5 A 24.9 = PESO ADEQUADO
    25.0 A 29.9 = SOBREPESO
    30 OU MAIS = OBESIDADE

    PSEUDOCÓDIGO:
    INICIO
        LEIA PESO, ALTURA
        IMC = PESO / (ALTURA * ALTURA)

        SE IMC < 18.5
            ESCREVA "ABAIXO DO PESO"
        SENAO SE IMC < 25
            ESCREVA "PESO ADEQUADO"
        SENAO SE IMC < 30
            ESCREVA "SOBREPESO"
        SENAO
            ESCREVA "OBESIDADE"
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA PESO, ALTURA
        ↓
    CALCULE IMC
        ↓
    IMC < 18.5?
      ↙      ↘
 ABAIXO    IMC < 25?
             ↙      ↘
         ADEQUADO   IMC < 30?
                      ↙     ↘
                 SOBREPESO OBESIDADE
    */

    float peso19, altura19, imc19;

    printf("\nExercicio 19 - Calculo do IMC ----\n");

    printf("Digite o peso em kg: ");
    scanf("%f", &peso19);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura19);

    imc19 = peso19 / (altura19 * altura19);

    printf("IMC: %.2f\n", imc19);

    if (imc19 < 18.5) {
        printf("Abaixo do peso.\n");
    } else if (imc19 < 25) {
        printf("Peso adequado.\n");
    } else if (imc19 < 30) {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }


    /* EXERCÍCIO 20 — Calculadora

    DESCRIÇÃO NARRATIVA:
    LEIA DOIS NUMEROS E UMA OPERACAO (+, -, * OU /).
    REALIZE A OPERACAO ESCOLHIDA.
    NA DIVISAO, VERIFIQUE SE O SEGUNDO NUMERO E ZERO.

    PSEUDOCÓDIGO:
    INICIO
        LEIA NUMERO1
        LEIA NUMERO2
        LEIA OPERACAO

        SE OPERACAO == '+'
            RESULTADO = NUMERO1 + NUMERO2

        SENAO SE OPERACAO == '-'
            RESULTADO = NUMERO1 - NUMERO2

        SENAO SE OPERACAO == '*'
            RESULTADO = NUMERO1 * NUMERO2

        SENAO SE OPERACAO == '/'
            SE NUMERO2 != 0
                RESULTADO = NUMERO1 / NUMERO2
            SENAO
                ESCREVA "DIVISAO POR ZERO"
            FIM_SE

        SENAO
            ESCREVA "OPERACAO INVALIDA"
        FIM_SE
    FIM

    FLUXOGRAMA:
    INICIO
        ↓
    LEIA NUMERO1, NUMERO2, OPERACAO
        ↓
    QUAL OPERACAO?
     ↙   ↓   ↓   ↘
    +    -   *    /
    ↓    ↓   ↓    ↓
   SOMA SUB MULT  NUM2 == 0?
                  ↙      ↘
                SIM      NAO
                 ↓        ↓
               ERRO    DIVISAO
                  ↘      ↙
                    FIM
    */

    float calcA20, calcB20, resultado20;
    char operacao20;

    printf("\nExercicio 20 - Calculadora ----\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &calcA20);

    printf("Digite o segundo numero: ");
    scanf("%f", &calcB20);

    printf("Digite a operacao (+, -, * ou /): ");
    scanf(" %c", &operacao20);

    if (operacao20 == '+') {
        resultado20 = calcA20 + calcB20;
        printf("Resultado: %.2f\n", resultado20);

    } else if (operacao20 == '-') {
        resultado20 = calcA20 - calcB20;
        printf("Resultado: %.2f\n", resultado20);

    } else if (operacao20 == '*') {
        resultado20 = calcA20 * calcB20;
        printf("Resultado: %.2f\n", resultado20);

    } else if (operacao20 == '/') {

        if (calcB20 != 0) {
            resultado20 = calcA20 / calcB20;
            printf("Resultado: %.2f\n", resultado20);
        } else {
            printf("Nao e possivel dividir por zero.\n");
        }

    } else {
        printf("Operacao invalida.\n");
    }


    return 0;
}