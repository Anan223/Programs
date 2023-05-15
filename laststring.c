/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char name[100];
    int i,j,b,count=0;
    gets(name);
    printf("%s",name);
    int a=strlen(name);
    printf("%d\n",a);
    for(i=0;i<a;i++)
        {
         if(name[i]==' ')
            {
                count++;
                b=i;
                
            }
        }
        //printf("%d",b);
        //printf("%d",count);
        for(i=b;i<a;i++)
        {
            printf("%c",name[i]);
        }
        
        
    
    //printf("%s",name);

    return 0;
}
