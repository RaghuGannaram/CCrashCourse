#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[100];
    int num1, num2;
    char op;
    int result;
    while(1)
    {
        printf("Enter an expression (ex. 1 + 2): ");
        fgets(input, 100, stdin);
        if(input[0] == 'q' || input[0] == 'Q')
        {
            printf("Bye Bye\n");
            break;
        }
        sscanf(input, "%d %c %d", &num1, &op, &num2);
        switch(op)
        {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            default:
                printf("Invalid operator\n");
                continue;
        }
        printf("%d %c %d = %d\n", num1, op, num2, result);
    }
    return 0;
}