#include<stdio.h>



void main(){

int dearnessAllowance,rentAllowance,grossSalary,basicAllowance;
printf("Enter value of basicAllowance");
scanf("%d",&basicAllowance);


dearnessAllowance=(40*basicAllowance)/100;



rentAllowance=(60*basicAllowance)/100;

grossSalary=dearnessAllowance+rentAllowance+basicAllowance;
 printf("%d",grossSalary);

}