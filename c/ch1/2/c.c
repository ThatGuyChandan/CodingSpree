#include<stdio.h>
void main(){

int AsciiValue;

printf("enter value of AsciiValue");
scanf("%d",&AsciiValue);

if(AsciiValue>=65 && AsciiValue<=90)
printf("capital letter");

else
{
   if(AsciiValue>=97 && AsciiValue>=122)
         printf("small letter");

   else 
   {
        if(AsciiValue>=48 && AsciiValue<=57)

           printf("digit");
         else 
       {
         if((AsciiValue>=0 && AsciiValue<=47)||(AsciiValue>=58&&AsciiValue<=64)||(AsciiValue>=91 && AsciiValue<=96)||(AsciiValue>=123 && AsciiValue<=127))

               printf("special symbol");
        }
   }

}     



}



