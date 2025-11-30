#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = false;  // 20% discount

    // but if student AND senior discount = 30%.
    // st = 9
    // sn = 8
    // st + sn = 7
    if (isStudent){
        if (isSenior)
        {
            printf("Student dicount UNLOCKED -- current discount is 10%\n");
            printf("Senior dicount UNLOCKED -- current discount is 20%\n");
            price = price * 0.7;
            // price *= 0.9;
        }else {
            printf("Student dicount UNLOCKED -- current discount is 10%\n");
            price *= 0.9;
        }
    }else{
        if (isSenior)
        {
            printf("Senior dicount UNLOCKED -- current discount is 20%\n");
            price *= 0.8;
        }
        
    }

    printf("The price of a ticket is: %.2f,- kr\n", price);

    return 0;
}