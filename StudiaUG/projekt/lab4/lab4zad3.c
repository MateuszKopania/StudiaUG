#include<stdio.h>
int main()
{
 int a, b ,c;
c=1;
 printf("podaj a");
scanf("%d" ,&a);
 printf("podaj b");
scanf("%d" ,&b);
int wynik=1;
do {
  printf("liczba c =%d\n", c);
  c=c+1;
  wynik= wynik * a;
}
while (wynik<=b);
printf("%d" ,c);

return 0;
}