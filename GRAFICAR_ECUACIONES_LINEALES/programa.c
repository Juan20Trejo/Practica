#include "gnuplot_i.h"

int main(void){
    int m=0, b=0;
    int rango_1=0 , rango_2=0;

    printf("Dame el valor de m: ");
    scanf("%d",&m);
    printf("Dame el valor de b: ");
    scanf("%d",&b);
    printf("Dame el rango de inicio: ");
    scanf("%d",&rango_1);
    printf("Dame el rango final: ");
    scanf("%d",&rango_2);
    gnuplotT(m,b,rango_1,rango_2);
    impresionPuntos(rango_1,rango_2,m,b);
    return 0;
}