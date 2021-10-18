#include<stdio.h>
//NAME :Dharani Pamidimukkala
//Scholar Id:2012137
int main()
{
    while(1)
    {
        int option;
        printf("Select a choice: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
        printf("Enter a choice: ");
        scanf("%d",&option);
        if(option==1)
        {
            long long int number1,number2;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld", &number1,&number2);
            long long int sum=number1+number2;
            printf("Sum is: %lld \n",sum);
        }
        else if(option==2)
        {
            long long int number1,number2;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld",&number1,&number2);
            printf("Product is: %lld \n",number1*number2);
        }
        else
        {
            printf("Exited.");
            break;
        }
    }
    return 0;
}
