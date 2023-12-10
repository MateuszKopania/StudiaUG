#include <stdio.h>
int main()
{
    int k;
    char z;
    printf("podaj znak ASCII");
    scanf("%d", &k);
z = (char)k;
printf("%c", &z);
if ((z >= 'A' && z <= 'Z') || (z >= 'a' && z <= 'z')) {
        printf("Podany znak jest literą alfabetu.\n");
    } else {
        printf("Podany znak nie jest literą alfabetu.\n");
    }
printf(z);
    return 0;
}