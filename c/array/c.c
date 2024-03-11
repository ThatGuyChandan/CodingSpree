#include<stdio.h>
void main(){
    int i=0,a[5],x,sum=0,min,max;
    float avg;
    for(i=0;i<5;i++){
        printf("enter the num ");
        scanf("%d",&a[i]);
    }
    a[3]=2;
    a[2]=a[2]+3;
    printf("new value of a[4]=");
    scanf("%d",&x);
    a[4]=x;
    for(i=0;i<5;i++){
        a[i]=a[i]*a[0];
    }
    for(i=0;i<5;i++){
    if(a[i]<6){
        printf("\nnumb smaller than 6=%d",a[i]);
    }
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("\naverage=%f",avg);
    
min=a[0];
for(i=0;i<5;i++){
    if(a[i]<min){
        min=a[i];
    }
}
printf("\nminmum numb=%d",min);
max=a[0];
for(i=0;i<5;i++){
    if(a[i]>max){
        max=a[i];
    }
}
printf("\nmaximium numb=%d",max);
}
