#include <stdio.h>

int main()
{
    double capital = 100000.00;
    double interest = 0.025;

    printf("Startkapital: %.2lf Euro\n",capital);
    printf("Effektiver Jahreszins: %.2lf %%\n\n", interest*100);

    printf("---------------------\n");
    printf("| Jahr |   Kapital  |\n");
    printf("---------------------\n");
    printf("|   0  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   1  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   2  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   3  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   4  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   5  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   6  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   7  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   8  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|   9  |  %.2lf |\n", capital);
    capital = capital + capital * interest;
    printf("|  10  |  %.2lf |\n", capital);
    printf("---------------------\n");

    printf("\n\n\n");
    return 0;
}
