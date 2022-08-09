// Swapping
#include <stdio.h>

int main() {
    //Swapping with 3rd variable
    int a,b,c;
    a=5;
    b=10;
    printf("a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nSwapping\n");
    printf("a=%d and b=%d\n",a,b);
    
    //Swapping without 3rd variable
    int d,e;
    d=6;
    e=10;
    printf("\nd=%d and e=%d",d,e);
    d=d+e;
    e=d-e;
    d=d-e;
    printf("\nSwapping\n");
    printf("d=%d and e=%d",d,e);
    
    return 0;
}
