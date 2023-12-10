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
        if(a + b > c)
        {printf("można zbudować trojkąt");}
        else{printf("nie można zbudować trójkąta");}

}