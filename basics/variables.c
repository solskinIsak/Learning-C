#include <stdio.h>
#include <stdbool.h> //required for BOOLEANS

int main() {
    // variable = a reusable container for a value, behaves as if it were the value it contians.

    //                  summary of c variables.
    // int = hwole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number ( 8 bytes )
    // char = single character ( 1 byte )
    // char[] = array of characters (string array) (size here varies)
    // bool = true or false ( 1 byte, requires <stdbool.h>)

    // INTs
    int year = 2025; 
    int age = 25;

    printf("I am %d years old if i removed 2 years! \n", age);
    printf("The year is %d\n", year);

    //FLOAT

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.2;
    printf(" my 'gennemsnit' is %f\n", gpa);
    printf(" the price is %f kroner\n", price);
    printf("current temp ois %f\n", temperature);

    // DOUBLE

    double pi = 3.1415922345232;

    printf("the value of pi is not %lf\n", pi); //lf meaning LONG FLOAT i.e. double.

    // CHAR

    char respect = 'F';
    printf("press %c to pay respects\n", respect);

    //STRING ARRAY

    char name[] = "Sliced bread";
    printf("Hello i'd like some %s please.\n", name);

    // BOOLEANS

    bool isOnline = true;

    printf("%d\n", isOnline);

    if(isOnline){
        printf("You are ONLINE");
    }else{
        printf("You are OFFLINE");
    }




    return 0;

}