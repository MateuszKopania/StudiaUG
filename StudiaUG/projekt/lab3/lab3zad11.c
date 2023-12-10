#include <stdio.h>
int main()
{
    int a,c,b;
    printf("podaj długość boku a\n");
    scanf("%d", &a);
    printf("podaj długość boku c\n");
      scanf("%d", &c);
      printf("podaj długość boku b\n");
        scanf("%d", &b);
int e = a*a;
int f = b*b;
int g = c*c;
        if( e + f == g)
        {printf("można zrobic trójkat prostokatny");}
        else{printf("nie można");}

}