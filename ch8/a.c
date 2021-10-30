#include<stdio.h>
void main(){
int num[25],i;
for(i=0;i<25;i++){
    printf("enter the number ");
    scanf("\n%d",&num[i]);
}
    int E=0,O=0,P=0,N=0,Z=0;
 for(i=0;i<25;i++){
    if(num[i]==0){
        Z++;
    }
    else{
if(num[i]>0){
    P++;
}
else{
    if(num[i]<0){
        N++;
    }
}
    
    if(num[i]%2==0){
        E++;
    }
    else
    O++;
    }
 }
    printf("numb of even=%d\n",E);
    printf("numb of odd=%d\n",O);
    printf("numb of positive=%d\n",P);
    printf("numb of negative=%d\n",N);
    printf("numb of zero=%d",Z);
 
}