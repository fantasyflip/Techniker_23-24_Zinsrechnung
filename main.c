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

    for(int i = 0; i<11;i++){
        if(i > 9){
            printf("|  %d  |  %.2lf |\n",i, capital);
        }
        else {
            printf("|   %d  |  %.2lf |\n",i, capital);
        }

        capital = capital + capital * interest;
    }

    printf("---------------------\n");





    printf("\n\n\n");
    return 0;
}
