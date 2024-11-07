#include<stdio.h>
#include<math.h>

long double factorial(long);
void prime(long);
int main(void)
{
    long double number_1 = 0, number_2 = 0;
    long number = 0;
    long double exp = 0;

    printf("\n\n");
    printf("                                      ADVANCED CALCULATOR\n");
    for(int i = 0; i <= 97; i++)
    {
        printf("=");
    }
    printf("\n\nHow to use Calculator??\n");
    printf("1. Enter 1 to Add 2 numbers.\n");
    printf("2. Enter 2 to Subtract 2 numbers.\n");
    printf("3. Enter 3 to Divide 2 numbers.\n");
    printf("4. Enter 4 to multiply 2 numbers.\n");
    printf("5. Enter 5 to find modulus of 2 numbers\n");
    printf("6. Enter 6 to find power\n");
    printf("7. Enter 7 to check whether the number(number 1) you have entered is prime or not.\n");
    printf("8. Enter 8 to find the factorial of entered number(i.e. number 1).\n");
    printf("NOTE: For checking prime number, enter the value of number 1 as per your need and number 2 as 0.\n");
    printf("NOTE: For finding factorial, enter the value of number 1 as per your need and number 2 as 0.\n\n");

    while(1)
    {
        printf("\n\n");
        printf("Enter number as per the operator you need: ");
        scanf("%ld", &number);


        if(number != 0)
        {

            printf("Enter number 1: ");
            scanf("%Lf", &number_1);

            printf("Enter number 2: ");
            scanf("%Lf", &number_2);

            printf("\n");

            switch(number)
            {
                case 1:
                printf("Sum = %Lf + %Lf = %Lf\n", number_1,number_2, number_1 + number_2);
                break;

                case 2:
                printf("Difference = %Lf - %Lf = %Lf\n", number_1, number_2, number_1 - number_2);
                break;

                case 3:
                printf("Quotient = %Lf / %Lf = %Lf\n", number_1, number_2, number_1 / number_2);
                break;

                case 4:
                printf("Product = %Lf * %Lf = %Lf\n", number_1, number_2, number_1 * number_2);
                break;

                case 5:
                printf("Modulus = %Lf %% %Lf = %f\n", number_1, number_2, fmod(number_1, number_2));
                break;

                case 6:
                exp = 1;
                for(int i = 0; i < number_2; i++)
                {
                    exp = exp * number_1;
                }

                printf("Power = %Lf ^ %Lf = %Lf\n", number_1, number_2, exp);
                break;

                case 7:
                prime(number_1);
                break;

                case 8:
                factorial(number_1);
                break;

                default:
                printf("Please enter number from 1 to 6 not other than those.\n");

            }
            continue;
        }

        else
        {
            printf("\n\nYOU HAVE EXITED ADVANCED CALCULATOR.\n");
            break;
        }
    }

    return 0;
}

void prime(long a)
{
    int flag = 0;

    for(int i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            flag = 1;
        }

    }

        if(flag == 1)
        {
            printf("The number entered is not prime.\n");
        }
        else
        {
            printf("The number entered is prime.\n");
        }

}

long double factorial(long a)
{
    long double factorial = 1;

    while(a >= 1)
    {
        factorial = factorial * a;
        a--;
    }
    printf("Factorial = %Lf\n", factorial);

    return factorial;
}
