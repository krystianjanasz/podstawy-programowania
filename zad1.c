#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    double wynik;
    wynik= 3/((1.0/a)+(1.0/b)+(1.0/c));
    printf("%.lf",wynik);
    return 0;
}
