#include <stdio.h>

float average(int a, int b, int c);
float gravitionalfroces(int mass);
int fibonachi(int n);
int sumN(int n);
void pattern(int a);
int main()
{
    int choice;
    printf("what you want to do what this.:------\n\t1.Calculate the average of three number(click 1 and enter)\n\t2.Calculate the gravitation force(click 2 and enter)\n\t3.Calculate nth of fibonachi series(click 3 and enter)\n\t4.Sum of first n natural number(click 4 and enter)\n\t5.For * pattern print to Nth line(click 5 and enter)\n::-->");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int a, b, c;
        printf("enter the first value\n::-->");
        scanf("%d", &a);
        printf("enter the second value\n::-->");
        scanf("%d", &b);
        printf("enter the third value\n::-->");
        scanf("%d", &c);
        average(a, b, c);
    }
    else if (choice == 2)
    {
        int mass, gforce;
        printf("Enter your mass \n::-->");
        scanf("%d", &mass);
        gforce = gravitionalfroces(mass);
    }
    else if (choice == 3)
    {
        int n, result;
        printf("Please enter the value of N\n::-->");
        scanf("%d", &n);
        printf("series will be ::-->\n");
        for (int i = 0; i < n + 1; i++)
        {
            result = fibonachi(i);
            printf("%d\t", result);
        }
    }
    else if (choice == 4)
    {
        int n,sum;
        printf("Please enter the value of N\n::-->");
        scanf("%d", &n);
        
        sum = sumN(n);
        printf("Sum will be %d", sum);
    }
    else if (choice == 5)
    {
        int n;
        printf("Please enter the value of N\n::-->");
        scanf("%d", &n);
        pattern(n);
        }
    return 0;
}

float average(int a, int b, int c)
{
    float average;

    average = (float)(a + b + c) / 3;
    printf("The average will be %f", average);
    return average;
}
float gravitionalfroces(int mass)
{
    float gforce;
    gforce = mass * 9.8;
    printf("Gravitional force will be %f N", gforce);
    return gforce;
}

int fibonachi(int n)
{
    int result;
    if (n == 0)
    {
        result = 0;
        return 0;
    }
    else if (n == 1)
    {
        result = 1;
        return 1;
    }
    else if (n == 2)
    {
        result = 1;
        return 1;
    }
    else
    {
        result = fibonachi(n - 1) + fibonachi(n - 2);
        return result;
    }
}

int sumN(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    sum = n + sumN(n - 1);
    return sum;
}

void pattern(int a){

   if(a==1){
        printf("*\n");
        return;
    }

    pattern(a-1);
    
    for (int i = 0; i < (2*a-1); i++)
    {
        printf("*");
    }
    printf("\n");
}