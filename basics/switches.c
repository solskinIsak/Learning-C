#include <stdio.h>

int main()
{

    // basic switches
    //  a switch is an alternative to using many if-else statements.
    //  swithces are also supposed to be more efficient with fixed integer values.

    char choice = '\0';

    printf("Do you prefer Day of The Week in decimals (D) or chars (C)?: ");
    scanf("%c", &choice);

    if (choice == 'D')
    {
        int dayOfTheWeek = 0;
        printf("Weekday selector choose a number 1 through 7.\n");
        printf("I request to see what day is assigned number: ");
        scanf("%d", &dayOfTheWeek);

        switch (dayOfTheWeek)
        {
        case 1:
            printf("You chose the number %d. Which is a Monday", dayOfTheWeek);
            break;
        case 2:
            printf("You chose the number %d. Which is a Tuesday", dayOfTheWeek);
            break;
        case 3:
            printf("You chose the number %d. Which is a Wednesday", dayOfTheWeek);
            break;
        case 4:
            printf("You chose the number %d. Which is a Thursday", dayOfTheWeek);
            break;
        case 5:
            printf("You chose the number %d. Which is a Friday", dayOfTheWeek);
            break;
        case 6:
            printf("You chose the number %d. Which is a Saturday", dayOfTheWeek);
            break;
        case 7:
            printf("You chose the number %d. Which is a Sunday", dayOfTheWeek);
            break;
        default:
            printf("INVALID INPUT - Only numbers 1 - 7 is valid input.");
            break;
        }
    }
    else if (choice == 'C')
    {
        char charDayofTheWeek = '\0';
        printf("Weekday selector input a character of either (M, T, W, R, F, S, U): \n");
        printf("I Want to see what day is assigned the letter: ");
        getchar(); // was needed to consume the leftover \n (newlines) from the previous input.
        scanf("%c", &charDayofTheWeek);

        switch (charDayofTheWeek)
        {
        case 'M':
            printf("You chose the letter %c. Which is a Monday", charDayofTheWeek);
            break;
        case 'T':
            printf("You chose the letter %c. Which is a Tuesday", charDayofTheWeek);
            break;
        case 'W':
            printf("You chose the letter %c. Which is a Wednesday", charDayofTheWeek);
            break;
        case 'R':
            printf("You chose the letter %c. Which is a Thursday", charDayofTheWeek);
            break;
        case 'F':
            printf("You chose the letter %c. Which is a Friday", charDayofTheWeek);
            break;
        case 'S':
            printf("You chose the letter %c. Which is a Saturday", charDayofTheWeek);
            break;
        case 'U':
            printf("You chose the letter %c. Which is a Sunday", charDayofTheWeek);
            break;
        default:
            printf("INVALID INPUT - Only characteres of: M, T, W, R, F, S, U is valid input.");
            break;
            
        }
    }else{printf("INVAID INPUT CHOOSE EITHER C OR D");}
}