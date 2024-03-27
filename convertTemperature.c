#include <stdio.h>
#include <stdlib.h>

// function to convert temperature
float convertTemperature(float inputTemperature, char sourceSystem, char targetSystem) {

    if(sourceSystem == targetSystem){
        return inputTemperature;
    } else {
        switch(sourceSystem){
            case 'C':
                switch(targetSystem){
                    case 'K':
                        return inputTemperature + 273.15;
                    case 'F':
                        return inputTemperature * 1.8 + 32;
                }
                break;
            case 'K':
                switch(targetSystem){
                    case 'C':
                        return inputTemperature - 273.15;
                    case 'F':
                        return inputTemperature * 1.8 - 459.67;
                }
                break;
            case 'F':
                switch(targetSystem){
                    case 'C':
                        return (inputTemperature - 32) * 5 / 9;
                    case 'K':
                        return (inputTemperature + 459.67) * 5 / 9;
                }
                break;
        }
    }
    // return 0 if conversion fails
    return 0;
}

