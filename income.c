income.c

#include <stdio.h>
int main()
{
    float sal;
    float rent; 
    float shop;
    float save;
    printf("Enter your total salary:");
    scanf("%f",&sal);
    if(sal>=15000)
    {
    rent = sal*50/100;
    shop = sal*30/100;
    save = sal*20/100;
    }
    printf("Your estimmated living expenses:%f\n",rent);
    printf("Your estimated shopping expenses:%f\n",shop);
    printf("Your estimated savings:%f\n",save);
}
    