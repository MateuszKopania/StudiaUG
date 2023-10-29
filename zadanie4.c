#include <stdio.h>
int main()
{
    int l1,l2,l3;
    printf ("podaj l1");
    scanf("%d" ,&l1);
    printf ("podaj l2");
    scanf("%d" ,&l2);
    printf ("podaj l3");
    scanf("%d" ,&l3);
   if(l1>=l2 && l1>=l3) {
    printf("l1 największe");
   }
   else if (l2>=l1 && l2>=l3) {
    printf("l2 największe");
   } else{
    printf("l3 najwieksze");
   }        

}