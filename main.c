#include <stdio.h>
#include <stdlib.h>
#include "selectSystem.h"
#include "convertTemperature.h"


int main(){

    printf("Welcome to the Temperature System Converting Machine!\n"
       "Please first enter the letter for the source temperature system.\n"
       "Enter 'C' for Celsius, 'K' for Kelvin, 'F' for Fahrenheit.\n"
       "Next, enter the letter for the target system you want to convert to.\n"
       "Here again, enter 'C' for Celsius, 'K' for Kelvin, 'F' for Fahrenheit.\n");

    char sourceSystem;
    char targetSystem;
    float temperatureInput;
    float temperatureOutput;
    char continueResponse;

    do{

        // source system selection
        sourceSystem = selectSystem("source");


        printf("\nEnter the number you want to convert: ");
        fflush(stdin);
        scanf(" %f", &temperatureInput);
        printf("You entered: %.2f\n", temperatureInput);


        // target system selection
        targetSystem = selectSystem("target");

        // temperature conversion
        temperatureOutput = convertTemperature(temperatureInput, sourceSystem, targetSystem);

        // Result:
        printf("\nYou converted %.2f", temperatureInput);
        switch(sourceSystem){
            case 'C':
                printf(" Celsius degrees,");
                break;
            case 'K':
                printf(" Kelvin degrees,");
                break;
            case 'F':
                printf(" Fahrenheit degrees,");
                break;
        }
        printf(" into %.2f", temperatureOutput);
        switch(targetSystem){
            case 'C':
                printf(" Celsius degrees.\n");
                break;
            case 'K':
                printf(" Kelvin degrees.\n");
                break;
            case 'F':
                printf(" Fahrenheit degrees.\n");
                break;
        }

        printf("\nDo you wish to continue with the next conversion?\n"
               "Type Y for yes, or any other button to stop: ");

        scanf(" %c", &continueResponse);
    } while(continueResponse == 'Y');

    return 0;
}

