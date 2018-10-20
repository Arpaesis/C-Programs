#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Create a variable to store the number.
    int input;

    printf("Please enter a number: ");

    //Takes the next input and stores it at the address of var input.
    //This initializes var input for us.
    scanf("%d", &input);

    printf("the number you gave is: %d\n", input);

    return 0;
}
