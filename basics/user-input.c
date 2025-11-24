#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age); //awaits user input for typing in age

    printf("Enter your gpa ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // the space before the %c skips the newline character kind of like a shortcut so grade is displayed on a new line without the \n 

    getchar(); //help put the full name on a newline.
    printf("Enter your full name name: ");
    //scanf("%s", &name); //scanf cant read any whitespaces so any added spaces is ignored not included.
    fgets(name, sizeof(name), stdin);// when typing in name the fgets function counts in the enter key being pressed for submitting the text. meaning it will add an extra empty space after input is displayed.
    name[strlen(name) - 1] = '\0'; //strlen returns the length of the "name"/string - 1 and then sets the last character equal to a null terminator '\0' to not add that extra empty space.

    printf("%d\n", age);

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);

    return 0;
}