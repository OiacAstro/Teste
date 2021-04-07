/*
 1) Complete o código abaixo para fazer uma pequena demonstração de operadores de ponteiros em C.

#include <stdio.h>
#include <stdlib.h>
int main()
{
int i;
int *ptr_b;
int *ptr_a;
int **ptr_p;
int val = 55;
ptr_a = (int*) malloc (4 * sizeof(int));
ptr_b = &ptr_a[1];
ptr_p = &ptr_b;
for (i =0; i<4; i++)
{
ptr_a[i] = 2*i + 1;
printf("ptr_a[%i]:\t%d\n",i, ptr_a[i]);
}
val = ptr_b[1];
printf("ptr_a:\t%6X\n", ptr_a);
printf("ptr_b:\t%6X\n", ptr_b);
printf("ptr_p:\t%6X\n", ptr_p);
//COMPLETAR
}
O código a ser inserido deverá: i. primeiramente exibir a lista de expressões abaixo com seus respectivos resultados,
imprimindo ainda a palavra “ERRO” nas linhas dos itens cujas expressões indicam acesso à
região de memória não permitida (possível erro de execução por invasão de memória);

a) ptr_p[0][2] = ????
b) ptr_a[4] = ????
c) **ptr_p + 3 = ????
d) *(ptr_b+1) + val
e) ptr_p[0]
f) ++(*ptr_b)
g) *(ptr_p - 1)
h) *(ptr_b+1) * 2
i) &(*ptr_p)
j) *(&ptr_b[1] - 2) + 3
k) ptr_b[1] == *(ptr_a +1)
l) *ptr_p - (*ptr_b - 6)
m) val * *ptr_b
n) ptr_b + ptr_a[1] - 5
o) **(&ptr_b+1)

ii. em seguida, o programa deverá restaurar os valores das variáveis que foram modificadas e
exibir uma segunda lista de operações, inteiramente equivalentes às primeiras, mas usando
expressões diferentes. Essa segunda lista também deverá mostrar os resultados das
expressões, que deverão ser os mesmos da primeira lista. Por exemplo, a expressão v[0] é
equivalente a *(v + 0).

Importante:
• Expressões equivalentes necessariamente produzem os mesmos resultados, mas o
contrário não é verdade. Por exemplo, x3 = x*x*x
para qualquer x, portanto são expressões equivalentes.
Já, (x+y) e (x*y) só produzirão o mesmo resultado para determinados valores de x e y,
portanto não são equivalentes.
• Os resultados que são endereços devem ser apresentados em hexadecimal

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int *ptr_b;
    int *ptr_a;
    int **ptr_p;
    int val = 55;
    ptr_a = (int*) malloc (4 * sizeof(int));
    ptr_b = &ptr_a[1];
    ptr_p = &ptr_b;
    for (i =0; i<4; i++)
    {
        ptr_a[i] = 2*i + 1;
        printf("ptr_a[%i]:\t%d\n",i, ptr_a[i]);
    }
    val = ptr_b[1];

    printf("\n\n");
    printf("ptr_a:\t%6X\n", ptr_a);
    printf("ptr_b:\t%6X\n", ptr_b);
    printf("ptr_p:\t%6X\n", ptr_p);

    printf("\n\n");

    printf("a) ptr_p[0][2]:\t%6X\n\n", ptr_p[0][2]);

    printf("b) ptr_a[4]:\t%6X\n\n", ptr_a[4]);

    printf("c) **ptr_p + 3:\t%6X\n\n",**ptr_p + 3);

    printf("d) *(ptr_b+1) + val:\t%6X\n\n",*(ptr_b+1) + val);

    printf("e) ptr_p[0]:\t%6X\n\n",ptr_p[0]);

    printf("f) ++(*ptr_b):\t%6X\n\n",++(*ptr_b));

    printf("g) *(ptr_p - 1):\t%6X\n\n",*(ptr_p - 1));

    printf("h) *(ptr_b+1) * 2:\t%6X\n\n",*(ptr_b+1) * 2);

    printf("i) &(*ptr_p):\t%6X\n\n",&(*ptr_p));

    printf("j) *(&ptr_b[1] - 2) + 3:\t%6X\n\n",*(&ptr_b[1] - 2) + 3);

    printf("k) ptr_b[1] == *(ptr_a +1):\t%6X\n\n",ptr_b[1] == *(ptr_a +1));

    printf("l) *ptr_p - (*ptr_b - 6):\t%6X\n\n",*ptr_p - (*ptr_b - 6));

    printf("m) val * *ptr_b:\t%6X\n\n",val * *ptr_b);

    printf("n) ptr_b + ptr_a[1] - 5:\t%6X\n\n",ptr_b + ptr_a[1] - 5);

    printf("o) **(&ptr_b+1):\t%6X\n\n",**(&ptr_b+1));
}
