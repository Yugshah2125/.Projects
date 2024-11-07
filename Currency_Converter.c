#include<stdio.h>
#include<unistd.h>

float INR, USD, EUR, CAD, GBP;

void converter1();
void converter2();
void converter3();
void converter4();
void converter5();
void converter6();
void converter7();
void converter8();
void converter9();
void converter10();
void converter11();
void converter12();
void converter13();
void converter14();
void converter15();
void converter16();
void converter17();
void converter18();
void converter19();
void converter20();

int main(void)
{
    int exit_loop = 1;
    int flag = 0;
    char symbol;
    int n;

    //INR, USD, EUR, CAD, GBP

    printf("\n\t\tWelcome to Currency Converter(v1.0)!!\n");
    printf("\nIn this application we show converted values of different currencies.\nIn this version we have only 5 currencies: \n");
    printf("1. INR - Indian Rupees\n");
    printf("2. USD - U S Dollar\n");
    printf("3. EUR - Europe Euro\n");
    printf("4. CAD - Canadian Dollar\n");
    printf("5. GBP - United Kingdom Pound\n\n");


    while(exit_loop)
    {
        if(flag == 0)
        {
            printf("START(>)        HELP(?)        EXIT(<)\n");

            printf("Enter symbol as per your requirement: ");
            scanf("%c", &symbol);
            getchar();


            switch(symbol)
            {
                case '>':
                printf("\n\rYou are entering Currency Converter......");
                fflush(stdout);
                sleep(3);
                printf("\rEnter number as per the currency you want to convert(1-20): ");
                scanf("%d", &n);

                    switch(n)
                    {
                        case 1:
                            converter1();
                            break;

                        case 2:
                            converter2();
                            break;

                        case 3:
                            converter3();
                            break;

                        case 4:
                            converter4();
                            break;

                        case 5:
                            converter5();
                            break;

                        case 6:
                            converter6();
                            break;

                        case 7:
                            converter7();
                            break;

                        case 8:
                            converter8();
                            break;

                        case 9:
                            converter9();
                            break;

                        case 10:
                            converter10();
                            break;

                        case 11:
                            converter11();
                            break;

                        case 12:
                            converter12();
                            break;

                        case 13:
                            converter13();
                            break;

                        case 14:
                            converter14();
                            break;

                        case 15:
                            converter15();
                            break;

                        case 16:
                            converter16();
                            break;

                        case 17:
                            converter17();
                            break;

                        case 18:
                            converter18();
                            break;

                        case 19:
                            converter19();
                            break;

                        case 20:
                            converter20();
                            break;

                        default:
                            printf("\rInvalid number entered!!\n");
                            fflush(stdout);
                            sleep(1);
                            printf("\rPlease enter number between 1 and 20!!");
                    }
                flag = 1;
                break;

                case '?':
                printf("\n\rOpening User Manual....");
                fflush(stdout);
                sleep(3);
                printf("\rHow to use Currency Converter??\n");
                printf(" (1) Enter  1 for INR to USD.\n");
                printf(" (2) Enter  2 for INR to EUR.\n");
                printf(" (3) Enter  3 for INR to CAD.\n");
                printf(" (4) Enter  4 for INR to GBP.\n\n");

                printf(" (5) Enter  5 for USD to INR.\n");
                printf(" (6) Enter  6 for USD to EUR.\n");
                printf(" (7) Enter  7 for USD to CAD.\n");
                printf(" (8) Enter  8 for USD to GBP.\n\n");

                printf(" (9) Enter  9 for EUR to INR.\n");
                printf("(10) Enter 10 for EUR to USD.\n");
                printf("(11) Enter 11 for EUR to CAD.\n");
                printf("(12) Enter 12 for EUR to GBP.\n\n");

                printf("(13) Enter 13 for CAD to INR.\n");
                printf("(14) Enter 14 for CAD to USD.\n");
                printf("(15) Enter 15 for CAD to EUR.\n");
                printf("(16) Enter 16 for CAD to GBP.\n\n");

                printf("(17) Enter 17 for GBP to INR.\n");
                printf("(18) Enter 18 for GBP to USD.\n");
                printf("(19) Enter 19 for GBP to EUR.\n");
                printf("(20) Enter 20 for GBP to CAD.\n\n");
                break;

                case '<':
                printf("\n\rExiting Currency Converter....");
                fflush(stdout);
                sleep(3);
                printf("\rYou have exited Currency Converter!!\n");
                sleep(1);
                printf("\rPlease visit again, Thank You!!!\n");
                exit_loop = 0;
                break;

                default:
                printf("Invalid symbol, please enter valid symbol\n");
                break;
            }
        }

        else
        {
            printf("\nCONTINUE(>)        HELP(?)        EXIT(<)\n");

            getchar();
            printf("\nEnter symbol as per your requirement: ");
            scanf("%c", &symbol);


            switch(symbol)
            {
                case '>':
                printf("\n\rYou are entering Currency Converter......");
                fflush(stdout);
                sleep(3);
                printf("\rEnter number as per the currency you want to convert(1-20): ");
                scanf("%d", &n);

                    switch(n)
                    {
                        case 1:
                            converter1();
                            break;

                        case 2:
                            converter2();
                            break;

                        case 3:
                            converter3();
                            break;

                        case 4:
                            converter4();
                            break;

                        case 5:
                            converter5();
                            break;

                        case 6:
                            converter6();
                            break;

                        case 7:
                            converter7();
                            break;

                        case 8:
                            converter8();
                            break;

                        case 9:
                            converter9();
                            break;

                        case 10:
                            converter10();
                            break;

                        case 11:
                            converter11();
                            break;

                        case 12:
                            converter12();
                            break;

                        case 13:
                            converter13();
                            break;

                        case 14:
                            converter14();
                            break;

                        case 15:
                            converter15();
                            break;

                        case 16:
                            converter16();
                            break;

                        case 17:
                            converter17();
                            break;

                        case 18:
                            converter18();
                            break;

                        case 19:
                            converter19();
                            break;

                        case 20:
                            converter20();
                            break;

                        default:
                            printf("\rInvalid number entered!!\n");
                            fflush(stdout);
                            sleep(1);
                            printf("\rPlease enter number between 1 and 20!!");
                    }
                break;

                case '?':
                printf("\n\rOpening User Manual....");
                fflush(stdout);
                sleep(3);
                printf("\rHow to use Currency Converter??\n");
                printf(" (1) Enter  1 for INR to USD.\n");
                printf(" (2) Enter  2 for INR to EUR.\n");
                printf(" (3) Enter  3 for INR to CAD.\n");
                printf(" (4) Enter  4 for INR to GBP.\n\n");

                printf(" (5) Enter  5 for USD to INR.\n");
                printf(" (6) Enter  6 for USD to EUR.\n");
                printf(" (7) Enter  7 for USD to CAD.\n");
                printf(" (8) Enter  8 for USD to GBP.\n\n");

                printf(" (9) Enter  9 for EUR to INR.\n");
                printf("(10) Enter 10 for EUR to USD.\n");
                printf("(11) Enter 11 for EUR to CAD.\n");
                printf("(12) Enter 12 for EUR to GBP.\n\n");

                printf("(13) Enter 13 for CAD to INR.\n");
                printf("(14) Enter 14 for CAD to USD.\n");
                printf("(15) Enter 15 for CAD to EUR.\n");
                printf("(16) Enter 16 for CAD to GBP.\n\n");

                printf("(17) Enter 17 for GBP to INR.\n");
                printf("(18) Enter 18 for GBP to USD.\n");
                printf("(19) Enter 19 for GBP to EUR.\n");
                printf("(20) Enter 20 for GBP to CAD.\n\n");
                break;

                case '<':
                printf("\n\rExiting Currency Converter....");
                fflush(stdout);
                sleep(3);
                printf("\rYou have exited Currency Converter!!\n");
                sleep(1);
                printf("\rPlease visit again, Thank You!!!\n");
                exit_loop = 0;
                break;

                default:
                printf("Invalid symbol, please enter valid symbol\n");
                break;
            }
        }
    }
    return 0;
}

void converter1()
{
    //INR to USD
    printf("\n\rInitializing INR to USD Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rINR to USD Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &INR);

    printf("\nConversion rates: 1 INR = 0.0119 USD\n\n");
    printf("Amount(in INR):    %.4f Rs\n", INR);
    printf("Converted(in USD): %.4f $\n", INR * 0.0119);
}

void converter2()
{
    //INR to EUR
    printf("\n\rInitializing INR to EUR Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rINR to EUR Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &INR);

    printf("\nConversion rates: 1 INR = 0.01092 EUR\n\n");
    printf("Amount(in INR):    %f Rs\n", INR);
    printf("Converted(in EUR): %f Euros\n", INR * 0.01092);
}

void converter3()
{
    //INR to CAD
    printf("\n\rInitializing INR to CAD Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rINR to CAD Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &INR);

    printf("\nConversion rates: 1 INR = 0.01641 CAD\n\n");
    printf("Amount(in INR):    %.4f Rs\n", INR);
    printf("Converted(in CAD): %.4f C$\n", INR * 0.01641);
}


void converter4()
{
    //INR to GBP
    printf("\n\rInitializing INR to GBP Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rINR to GBP Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &INR);

    printf("\nConversion rates: 1 INR = 0.009102 GBP\n\n");
    printf("Amount(in INR):    %.4f Rs\n", INR);
    printf("Converted(in GBP): %.4f Pounds\n", INR * 0.009102);
}

void converter5()
{
    //USD to INR
    printf("\n\rInitializing USD to INR Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rUSD to INR Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &USD);

    printf("\nConversion rates: 1 USD = 84.0300 INR\n\n");
    printf("Amount(in USD):    %.4f $\n", USD);
    printf("Converted(in INR): %.4f Rs\n", USD * 84.0300);
}

void converter6()
{
    //USD to EUR
    printf("\n\rInitializing USD to EUR Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rUSD to EUR Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &USD);

    printf("\nConversion rates: 1 USD = 0.9203 EUR\n\n");
    printf("Amount(in USD):    %.4f $\n", USD);
    printf("Converted(in EUR): %.4f Euros\n", USD * 0.9203);
}

void converter7()
{
    //USD to CAD
    printf("\n\rInitializing USD to CAD Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rUSD to CAD Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &USD);

    printf("\nConversion rates: 1 USD = 1.3766 CAD\n\n");
    printf("Amount(in USD):    %.4f $\n", USD);
    printf("Converted(in CAD): %.4f C$\n", USD * 1.3766);
}

void converter8()
{
    //USD to GBP
    printf("\n\rInitializing USD to GBP Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rUSD to GBP Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &USD);

    printf("\nConversion rates: 1 USD = 0.7695 GBP\n\n");
    printf("Amount(in USD):    %.4f $\n", USD);
    printf("Converted(in GBP): %.4f Pounds\n", USD * 0.7695);
}

void converter9()
{
    //EUR to INR
    printf("\n\rInitializing EUR to INR Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rEUR to INR Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &EUR);

    printf("\nConversion rates: 1 EUR = 91.2820 INR\n\n");
    printf("Amount(in EUR):    %.4f Euros\n", EUR);
    printf("Converted(in INR): %.4f Rs\n", EUR * 91.2820);
}

void converter10()
{
    //EUR to INR
    printf("\n\rInitializing EUR to USD Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rEUR to USD Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &EUR);

    printf("\nConversion rates: 1 EUR = 1.0863 USD\n\n");
    printf("Amount(in EUR):    %.4f Euros\n", EUR);
    printf("Converted(in USD): %.4f $\n", EUR * 1.0863);
}

void converter11()
{
    //EUR to CAD
    printf("\n\rInitializing EUR to CAD Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rEUR to CAD Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &EUR);

    printf("\nConversion rates: 1 EUR = 1.4954 CAD\n\n");
    printf("Amount(in EUR):    %.4f Euros\n", EUR);
    printf("Converted(in CAD): %.4f C$\n", EUR * 1.4954);
}

void converter12()
{
    //EUR to GBP
    printf("\n\rInitializing EUR to GBP Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rEUR to GBP Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &EUR);

    printf("\nConversion rates: 1 EUR = 0.84 GBP\n\n");
    printf("Amount(in EUR):    %.4f Euros\n", EUR);
    printf("Converted(in GBP): %.4f Pounds\n", EUR * 0.8359);
}

void converter13()
{
    //CAD to INR
    printf("\n\rInitializing CAD to INR Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rCAD to INR Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &CAD);

    printf("\nConversion rates: 1 CAD = 61.0417 INR\n\n");
    printf("Amount(in CAD):    %.4f C$\n", CAD);
    printf("Converted(in INR): %.4f Rs\n", CAD * 61.0417);
}

void converter14()
{
    //CAD to USD
    printf("\n\rInitializing CAD to USD Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rCAD to USD Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &CAD);

    printf("\nConversion rates: 1 CAD = 0.7264 INR\n\n");
    printf("Amount(in CAD):    %.4f C$\n", CAD);
    printf("Converted(in USD): %.4f $\n", CAD * 0.7264);
}

void converter15()
{
    //CAD to EUR
    printf("\n\rInitializing CAD to EUR Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rCAD to EUR Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &CAD);

    printf("\nConversion rates: 1 CAD = 0.6687 EUR\n\n");
    printf("Amount(in CAD):    %.4f C$\n", CAD);
    printf("Converted(in EUR): %.4f Euros\n", CAD * 0.6687);
}

void converter16()
{
    //CAD to GBP
    printf("\n\rInitializing CAD to GBP Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rCAD to GBP Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &CAD);

    printf("\nConversion rates: 1 CAD = 0.5590 GBP\n\n");
    printf("Amount(in CAD):    %.4f C$\n", CAD);
    printf("Converted(in GBP): %.4f Pounds\n", CAD * 0.5590);
}

void converter17()
{
    //GBP to INR
    printf("\n\rInitializing GBP to INR Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rGBP to INR Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &GBP);

    printf("\nConversion rates: 1 GBP = 109.1800 INR\n\n");
    printf("Amount(in GBP):    %.4f Pounds\n", GBP);
    printf("Converted(in INR): %.4f Rs\n", GBP * 109.1800);
}

void converter18()
{
    //GBP to USD
    printf("\n\rInitializing GBP to USD Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rGBP to USD Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &GBP);

    printf("\nConversion rates: 1 GBP = 1.2992 USD\n\n");
    printf("Amount(in GBP):    %.4f Pounds\n", GBP);
    printf("Converted(in USD): %.4f $\n", GBP * 1.2992);
}

void converter19()
{
    //GBP to EUR
    printf("\n\rInitializing GBP to EUR Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rGBP to EUR Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &GBP);

    printf("\nConversion rates: 1 GBP = 1.1961 EUR\n\n");
    printf("Amount(in GBP):    %.4f Pounds\n", GBP);
    printf("Converted(in EUR): %.4f Euros\n", GBP * 1.1961);
}

void converter20()
{
    //GBP to CAD
    printf("\n\rInitializing GBP to CAD Converter.....");
    fflush(stdout);
    sleep(2);
    printf("\r                                            ");
    printf("\rGBP to CAD Converter");
    printf("\n");
    for(int i =0; i < 20; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("Enter amount you want to convert: ");
    scanf("%f", &GBP);

    printf("\nConversion rates: 1 GBP = 1.7882 CAD\n\n");
    printf("Amount(in GBP):    %.4f Pounds\n", GBP);
    printf("Converted(in CAD): %.4f C$\n", GBP * 1.7882);
}
