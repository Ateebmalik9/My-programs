// C program to use ternary operator
#include <stdio.h>

int main() 
{
    int z,a,b;
    printf("Please enter number a: ");
    scanf("%d",&a);
    printf("Please enter number b: ");
    scanf("%d",&b);
    z=a>b? a:b;
    printf("%d",z);
    return 0;
}



// C program to use ternary operator
#include <stdio.h>

int main() 
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    
    age>=18? printf("Can vote"):printf("Cannot vote");
    return 0;
}
