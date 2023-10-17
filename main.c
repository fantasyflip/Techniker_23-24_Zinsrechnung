#include <stdio.h>
#include <math.h>

int main()
{
    double capital = 100000.00;
    double interest = 0.025;
    int years = 10;

    printf("Startkapital: %.2lf Euro\n",capital);
    printf("Effektiver Jahreszins: %.2lf %%\n\n", interest*100);

    printf("---------------------\n");
    printf("| Jahr |   Kapital  |\n");
    printf("---------------------\n");

    for(int i = 0; i<years +1;i++){
        int digits = floor(log10(abs(i))) + 1;

        if(digits == 1){
            printf("|   %d  |  %.2lf |\n",i, capital);
        } else if(digits == 2){
            printf("|  %d  |  %.2lf |\n",i, capital);
        } else if (digits == 3){
            printf("| %d  |  %.2lf |\n",i, capital);
        }


        capital = capital + capital * interest;
    }

    printf("---------------------\n");





    printf("\n\n\n");
    return 0;
}
