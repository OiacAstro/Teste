/*
 1) Complete o c�digo abaixo para fazer uma pequena demonstra��o de operadores de ponteiros em C.

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
O c�digo a ser inserido dever�: i. primeiramente exibir a lista de express�es abaixo com seus respectivos resultados,
imprimindo ainda a palavra �ERRO� nas linhas dos itens cujas express�es indicam acesso �
regi�o de mem�ria n�o permitida (poss�vel erro de execu��o por invas�o de mem�ria);

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

ii. em seguida, o programa dever� restaurar os valores das vari�veis que foram modificadas e
exibir uma segunda lista de opera��es, inteiramente equivalentes �s primeiras, mas usando
express�es diferentes. Essa segunda lista tamb�m dever� mostrar os resultados das
express�es, que dever�o ser os mesmos da primeira lista. Por exemplo, a express�o v[0] �
equivalente a *(v + 0).

Importante:
� Express�es equivalentes necessariamente produzem os mesmos resultados, mas o
contr�rio n�o � verdade. Por exemplo, x3 = x*x*x
para qualquer x, portanto s�o express�es equivalentes.
J�, (x+y) e (x*y) s� produzir�o o mesmo resultado para determinados valores de x e y,
portanto n�o s�o equivalentes.
� Os resultados que s�o endere�os devem ser apresentados em hexadecimal

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
