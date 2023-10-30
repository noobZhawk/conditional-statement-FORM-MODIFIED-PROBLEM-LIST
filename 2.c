#include <stdio.h>
int main ()
{
  int p,c,m;
  printf("Input the marks obtained in Physics: ");
  scanf("%d",&p);

    printf("Input the marks obtained in chemistry: ");
  scanf("%d",&c);

    printf("Input the marks obtained in math: ");
  scanf("%d",&m);


  int d,x=0;
   d=p+c+m;


  if (m>=65)
    x++;
  if (p>=55)
    x++;
   if(c>=50)
        x++;

   if(x=3)
   {
      if(d>=180)
        printf("The candidate is eligible for admission. ");
      else
         printf("The candidate is not eligible for admission. ");
   }





}
