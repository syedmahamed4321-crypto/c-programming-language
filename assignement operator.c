#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);
    printf("----assignement operators----");
    printf("\nAdd and assign=%d",a+=5);
    printf("\nsubtract and assign=%d",b-=30);
    printf("multiply and assign=%d",a*=2);
    printf("\ndivide and assign=%d",a/=4);
    printf("modulus and assign=%d",a%=2);
    printf("\nAND and assign=%d",a&=6);
    printf("\nXOR and assign=%d",a^=b);
    printf("\nleft shift assign=%d",a<<=2);
    printf("\nright shift assign=%d",a>>=2);
}
