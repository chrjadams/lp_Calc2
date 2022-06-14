/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>






int main()
{
    
    float w = -1.00;
    float l = 1.00;
    float wr2 = 100.00;
    int p2 = 0;
    int d4 = 176;
    
    while (w < 0){
        printf("Enter your LP per win: \n");
        scanf("%f", &w);
        if(w < 0){
            printf("Please enter a positive number.\n");
        }
    }
    

    while (l > 0){
        printf("Enter your LP per loss: \n");
        scanf("%f", &l);
        if(l > 0){
            printf("Please enter a negative number.\n");
        }
    } 
    
    while(wr2 > 1 || wr2 < .5){
        printf("Enter your winrate as a decimal \n");
        scanf("%f", &wr2);
        if(wr2 > 1){
            printf("Please enter your winrate as a decimal, or a winrate above 50 percent \n");
        }
    }
    
    float avg = (w + l) / 2; 
    float avg2 = (w + l) / 2; 
    float winRatio2 = wr2 * 2;
    avg2 = (w * winRatio2 + l * (1 - (winRatio2 - 1)));
    float winRatio = 1.000;
    
    
    
    
    
    
    while (avg < 0){
       // printf("l = %f \n",l * (1 - (winRatio - 1)));
        avg = (w * winRatio + l * (1 - (winRatio - 1)));
        winRatio = winRatio + .0000001;
        //printf ("winRatio = %f\n", winRatio);
    }

    printf("AVG: %f per game @ %f percent wr.\n", avg, (winRatio/2)*100);
    printf("AVG: %f per game @ %f percent wr.\n", avg2, wr2*100);
    printf("To get to d4 at your current wr you need to play %f games.\n", (d4 / avg2) + 3);

    return 0;
}


