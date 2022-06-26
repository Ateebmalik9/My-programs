/*
https://www.w3resource.com/c-programming-exercises/for-loop/index.php
*/

Q1
#include <stdio.h>

int main() {
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\t",i);
    } 
    
    
    
    return 0;
}

Q2
#include <stdio.h>

int main() {
    int i, sum=0;
    
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
    } 
    printf("%d",sum);
    
    return 0;
}

Q3
#include <stdio.h>

int main() {
    int i, n, sum=0;
    
    printf("Number of first natural numbers to be added? ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    } 
    printf("%d",sum);
    
    return 0;
}

Q4
#include <stdio.h>

int main() {
    int i,num,sum=0;
    float avg;
    for(i=1;i<=10;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d", &num);
        sum=sum+num;
    }
    printf("%d\n",sum);
    printf("%f",avg=sum/10);
    
    return 0;
}

Q5
#include <stdio.h>

int main() {
    int i, n, cube;
    
    printf("upto what number you want to know cubes? ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("The Number is: %d and cube of %d is %d\n",i ,i, cube=i*i*i);
    } 
    
    return 0;
}

Q6
int main() {
    int i, n,;
    
    printf("Input number: ");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n ,i, n*i);
    } 
    
    return 0;
}
Q7
#include <stdio.h>

int main() {
    int i,j, n;
    
    printf("Input upto the table number starting from 1: ");
    scanf("%d",&n);
    printf("Multiplication table from 1 to %d\n",n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
     {
        printf("%dx%d = %d, ",j,i,i*j);
     }
     printf("\n");
    } 
    
    return 0;
}

Q8
#include <stdio.h>

int main() {
    int i,j, n, sum=0;
    
    printf("Number of first odd natural numbers to be added: ");
    scanf("%d",&n);
    printf("The odd numbers are: ");
    for(i=1;i<=n;i++)
    {
        j=2*i-1;
        sum=sum+j;
        printf("%d ",j);
    } 
    
    printf("\nThe sum of first %d odd natural numbers is %d: ",n,sum);
    
    return 0;
}

Q9
#include <stdio.h>

int main() {
    int i,j;
    

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
     {
        printf("*");
     }
     printf("\n");
    } 
    
    return 0;
}

Q10
#include <stdio.h>

int main() {
    int i,j;
    

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
     {
        if(j==1)
        {
            printf("1");
        }
        else if(j==2)
        {
            printf("2");
        }
        else if(j==3)
        {
            printf("3");
        }
        else
        {
            printf("4");
        }
     }
     printf("\n");
    } 
    
    return 0;
}

Q11
#include <stdio.h>

int main() {
    int i,j;
    

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
     {
        if(i==1)
        {
            printf("1");
        }
        else if(i==2)
        {
            printf("2");
        }
        else if(i==3)
        {
            printf("3");
        }
        else
        {
            printf("4");
        }
     }
     printf("\n");
    } 
    
    return 0;
}

Q12
#include <stdio.h>

int main() {
    int i,j,k=1;
    

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
     {
        printf("%d",k++); //k++ means post increment
     }
     printf("\n");
    } 
    
    return 0;
}

Q13

#include <stdio.h>

int main() {
    int i,j,k,l=0;
    

    for(i=1;i<=4;i++)
    {
      for(j=4;j>=i;j--)
      {
          printf(" ");
      }
      
      for(k=1;k<=i;k++)
      {
          printf("%d ",++l); // pre increment
      }
     printf("\n");
    } 
    
    return 0;
}

Q14
#include <stdio.h>

int main() {
    int i,j,k,l=0;
    

    for(i=1;i<=4;i++)
    {
      for(j=4;j>=i;j--)
      {
          printf(" ");
      }
      
      for(k=1;k<=i;k++) 
      {
          printf("* "); 
      }
     printf("\n");
    } 
    
    return 0;
}

Q15
#include <stdio.h>

int main() {
    int i,n,fact=1;
    
    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is: %d",n,fact);
    return 0;
}

Q16
#include <stdio.h>

int main() {
    int i,j, n, sum=0;
    
    printf("Number of first even natural numbers to be added: ");
    scanf("%d",&n);
    printf("The odd numbers are: ");
    for(i=1;i<=n;i++)
    {
        j=2*i;
        sum=sum+j;
        printf("%d ",j);
       
    } 
    
    printf("\nThe sum of first %d even natural numbers is %d: ",n,sum);
    
    return 0;
}

Q17
#include <stdio.h>

int main() {
    int i,j,k;
    

    for(i=1;i<=4;i++)
    {
      for(j=4;j>=i;j--)
      {
          printf(" ");
      }
      
      for(k=1;k<=i;k++)
      {
           if(i==1)
        {
            printf("1 ");
        }
        else if(i==2)
        {
            printf("2 ");
        }
        else if(i==3)
        {
            printf("3 ");
        }
        else
        {
            printf("4 ");
        } 
      }
     printf("\n");
    } 
    
    return 0;
}

Q18


Q19
#include <stdio.h>

int main() {
    int i, n;
    float  sum=0;
    
    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("1/%d + ",i);
        sum=sum+(float)1/i;
     
    } 
    printf("\n%f", sum);
    return 0;
}

Q20
#include <stdio.h>

int main() {
    int i,j,k;
    
    
    for(i=1;i<=3;i++)
    {
        for(j=3;j>i;j--)
        {
            printf(" ");
        }
       for(k=1;k<=2*i-1;k++)
       {
           printf("*");
       }
        printf("\n");   
    } 
    
    
    return 0;
}

Q21

Q22
#include <stdio.h>

int main() {
    int i,j,k;
    
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            k=i+j;
            if(k%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
      
        printf("\n");
    } 
    
    
    
    return 0;
}
