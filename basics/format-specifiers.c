#include <stdio.h>

int main() {
    /* Format specifier = Special tokens that begin with a % symbol, 
                          followed by a character that specifies the data type
                          and optional modifiers (like width, precision, flags).
                          They control how data is disåpayed or interpeted. 
    */

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Templos";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);


    // HOW TO SET THE WIDTH OF PRINTS

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = 1000;

    printf("%2d\n", num1); //num1 will be shifted 2 SPACES to the right when printed
    printf("%6d\n", num2); //num1 will be shifted 6 SPACES to the right when printed
    printf("%-6d\n", num3); //num1 will be shifted 6 SPACES to the left when printed but will appear like a normal print because it calculates it based off of it being 6 spaces to the right before it moves it to the left.
    printf("%+d\n", num4); // if the number is positive it will display with a '+' sign and if negative with a '-' sign due to the plus signe before the 'd'

    // precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.2f\n", price1); //before the corresponding letter for the datatybe adding a dot '.' then the amount of digits to display after the decimals. 
    printf("%7.2f\n", price1); // adding the number after the '%' sets the minimum width to display. 
    printf("%+7.2f\n", price1); 
    
    return 0;
}