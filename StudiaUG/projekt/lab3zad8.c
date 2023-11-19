#include<stdio.h>
int main()
{
    int r,m,d;
    printf("podaj rok");
    scanf("%d" ,&r);
    printf("podaj miesiąc");
    scanf("%d" ,&m);
printf("podaj dzien");
    scanf("%d" ,&d);
    if(m>12){printf("data nie poprawna");
    }
 else if(m=1 || d>31){printf("zła data");}
       else {printf("data poprawna");}
}