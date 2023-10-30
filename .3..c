#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);

    if((x>= 'a' && x<= 'z')||(x>= 'A' && x<= 'Z'))
       {
       printf("This is Alphabet\n");
       }

    else if(x>= '1' && x<= '9')
        {
            printf("This is a digit");
        }
        else
            printf("This is a special character.");




}
