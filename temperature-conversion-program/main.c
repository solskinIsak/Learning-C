#include <stdio.h>

int main() {
    // TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;


    printf("Temperature Conversion Program\n");
    printf("C. Celcius to Fahrenheit.\n");
    printf("F. Fahrenheit to Celsius.\n");
    printf("Is the temp in celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);
    
    if(choice == 'C'){
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // this is to convert celisus to fahrenhreit
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }else if(choice == 'F'){
        //F to C
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9; // this is to convert fahrenheit to celsius
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }else{
        printf("INVALID INPUT PLEASE CHOOSE C OR F");
    }

    return 0;
}