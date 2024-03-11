#include<stdio.h>

#define S(a,b,c) ((a+b+c)/2)
#define TA(a,b,c) (sqrt(S(a,b,c)(S(a,b,c)-a)(S(a,b,c)-b)(S(a,b,c)-c)))
#define TP(a,b,c) (a+b+c)
#define CA(r) (3.14*r*r)
#define CP(r) (2*3.14*r)
#define SA(s) (s*s)
#define SP(s) (4*s)
void main(){
float a,b,c,r,s,Ta,Tp,Ca,Cp,Sa,Sp;
printf("enter the values of a,b,c,r,s");
scanf("%f %f %f %f %f ",&a,&b,&c,&r,&s);

Ta=TA(a,b,c);
Tp=TP(a,b,c);
Ca=CA(r);
Cp=CP(r);
Sa=SA(s);
Sp=SP(s);
printf("Ta=%f\nTp=%f\nCa=%f\nCp=%f\nSa=%f\nSp",Ta,Tp,Ca,Cp,Sa,Sp);
}
 