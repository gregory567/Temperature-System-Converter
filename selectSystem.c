#include <stdio.h>
#include <stdlib.h>

// function to select temperature system
char selectSystem(const char* systemType) {
    char system;
    do {
        printf("\nEnter the letter for the %s system (C, K, F): ", systemType);
        // Flush the input buffer before scanning
        fflush(stdin);
        scanf(" %c", &system);

        switch(system){
            case 'C':
                printf("You chose Celsius as the %s system.\n", systemType);
                break;
            case 'K':
                printf("You chose Kelvin as the %s system.\n", systemType);
                break;
            case 'F':
                printf("You chose Fahrenheit as the %s system.\n", systemType);
                break;
            default:
                printf("Invalid input. Please enter either C, K, or F.\n");
        }
    } while(system != 'C' && system != 'K' && system != 'F');
    return system;
}
