#include <stdio.h>

void Questao1()
{
    // Faça um programa em C que exibe os números ímpares entre 100 e 200.
    int num = 100;
    while (num != 200)
    {
        if (num % 2 != 0)
        {
            printf("NUMERO %d\n", num);
        }
        num++;
    }
}
void Questao2()
{
    // Faça um programa em C que leia 20 valores inteiros e positivos e: Encontre o maior valor, Encontre o menor valor, Calcule a média dos números lidos
    int valores[20];
    int big = 0, small, media = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("Insira o valor #%d: ", i + 1);
        scanf("%d", &valores[i]);
        if (valores[i] > big)
        {
            big = valores[i];
        }
        else if (valores[i] < small)
        {
            small = valores[i];
        }
        media += valores[i];
    }
    printf("Maior Valor: %d \n Menor Valor: %d \n Media dos Valores: %d", big, small, media);
}
void Questao3()
{
    // Faça um programa em C que determine o maior entre N números lidos. A condição de parada é a
    // entrada de um valor 0, ou seja, o programa deve ficar calculando o maior até que a entrada seja igual a 0 (ZERO).
    int big = 0, stop = 0, val;
    while (stop != -1){
        printf("Insira o valor #%d: ", stop+1);
        scanf("%d", &val);
        if (val != 0){
            if (val > big){
                big = val;
            }
                stop++;
        }else{
            stop = -1;
        }
    }
    printf("O maior valor : %d", big);
}
void Questao4()
{/*Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge,
necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo
dispostos em um tabuleiro de xadrez (tem 64 quadros), de tal forma que o primeiro quadro deveria
conter apenas um grão e os quadros subseqüentes, o dobro do quadro anterior. A rainha achou o
trabalho barato e pediu que o serviço fosse executado, sem se dar conta de que seria impossível efetuar
o pagamento. Faça um programa em C para calcular o número de grãos que o monge esperava receber.*/

}
void Questao5()
{//Faça um programa em C que conte de 1 a 100 e a cada múltiplo de 10 emita a mensagem ‘Múltiplo de 10’.
    int cont = 1;
    while(cont!=101){
        if(cont%10==0){
        printf("\nMultiplo de 10: %d", cont);
        }
        cont++;
    }
}
void Questao6()
{/*Faça três programas em C que leiam um valor N (inteiro), e calcule o fatorial de N. Um programa com
for, um com while e outro com do-while.*/
int n, opt, fat = 1;
    printf("Insira N para calcular o fatorial: ");
    scanf("%d", &n);
    printf("Escolha um metodo 1-WHILE 2-DO WHILE 3-FOR: ");
    scanf("%d", &opt);
    switch(opt){
        case 1:
        while(n!=0){
            fat *= n;
            n--;
        }
        printf("N Fatorial de %d!: %d",n ,fat);
        break;
        case 2:
        do{
            fat *= n;
            n--;
        }while(n!=0);
        printf("N Fatorial de %d!: %d",n ,fat);
        break;
        case 3:
        for(int i = 1; i<=n; i++){
            fat *= i;  
        }
        printf("N Fatorial de %d!: %d",n ,fat);
        break;
        default:
        break;
}
}
void Questao7()
{
}
void Questao8()
{
}
void Questao9()
{
}
void Questao10()
{
}
void Questao11()
{
}
void Questao12()
{
}
void Questao13()
{
}
void Questao14()
{
}
void Questao15()
{
}
void Questao16()
{/*Uma escola vai distribuir kits de material escolar para seus alunos. Cada caixa enviada pelo fornecedor contém 24 kits.

Faça um programa em C que leia a quantidade de alunos matriculados e informe quantas caixas completas a escola precisará encomendar para atender a todos os alunos, garantindo que ninguém fique sem kit.

No quadro abaixo há três exemplos:

Entrada	Saída
Informe o número de alunos: 50	3 caixas
Informe o número de alunos: 72	3 caixas
Informe o número de alunos: 25	2 caixas*/
}

int main()
{
    int quest;
    do
    {
        printf("\nESCOLHA A QUESTAO DA LISTA (1-16): ");
        scanf("%d", &quest);
        system("cls");

        switch (quest)
        {
        case 1:
            Questao1();
            break;
        case 2:
            Questao2();
            break;
        case 3:
            Questao3();
            break;
        case 4:
            Questao4();
            break;
        case 5:
            Questao5();
            break;
        case 6:
            Questao6();
            break;
        case 7:
            Questao7();
            break;
        case 8:
            Questao8();
            break;
        case 9:
            Questao9();
            break;
        case 10:
            Questao10();
            break;
        case 11:
            Questao11();
            break;
        case 12:
            Questao12();
            break;
        case 13:
            Questao13();
            break;
        case 14:
            Questao14();
            break;
        case 15:
            Questao15();
            break;
        case 16:
            Questao16();
            break;
        }

    } while (quest != 0);
    return 0;

}
