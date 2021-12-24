#include<stdio.h>
int main()
{
    float a;
    printf("\nEnter marks of the student ");
    scanf("%f",&a);
    
    if(a>=85 && a<=100)
        printf("\nThe student's grade is A ");
        
    else if(a>=70 && a<=84)
        printf("\nThe student's grade is B ");
        
    else if(a>=55 && a<=69)
        printf("\nThe student's grade is C ");
        
    else if(a>=40 && a<=54)
        printf("\nThe student's grade is D ");
    
    else
        printf("\nThe student's grade is F");
        
    return(0);
}
