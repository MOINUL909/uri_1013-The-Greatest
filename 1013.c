/*moinul*/
#include <stdio.h>

int main() {
    int a,b,c,x,MaiorAB;
    scanf("%d%d%d",&a,&b,&c);
    MaiorAB=(a+b+abs(a-b))/2;
    x=(MaiorAB+c+abs(MaiorAB-c))/2;
 printf("%d eh o maior\n",x);
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    return 0;
}
