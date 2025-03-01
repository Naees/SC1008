/*computeExp
A structure is defined to represent an arithmetic expression:
typedef struct {
float operand1, operand2;
char op; /* operator ‘+’,‘‐’,‘*’ or ‘/’ */

/*(a) Write a C function that computes the value of an expression and returns the result. For
example, the function will return the value of 4/2 if in the structure passed to it, operand1
is 4, operator is ‘/’ and operand2 is 2. The function prototype is given as follows:

float compute1(bexpression expr);

(b) Write another C function that performs the same computation with the following function
prototype:*/
#include <stdio.h>

typedef struct {
    float operand1, operand2;
    char op;  /* operator: '+', '-', '*' or '/' */
} bexpression;

float compute1(bexpression expr);
float compute2(bexpression *expr);

int main() {
    bexpression e;
    int choice;
    printf("Select one of the following options: \n");
    printf("1: compute1()\n");
    printf("2: compute2()\n");
    printf("3: exit()\n");
    
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter expression (op1 op2 op): \n");
                /* Note: Including a space before %c to consume any trailing whitespace */
                scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
                printf("compute1(): %.2f\n", compute1(e));
                break;
            case 2:
                printf("Enter expression (op1 op2 op): \n");
                scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
                printf("compute2(): %.2f\n", compute2(&e));
                break;
        }
    } while (choice < 3);
    
    return 0;
}
float compute1(bexpression expr)
{
    float result;
    switch (expr.op)
    {
        case '+':
        result = expr.operand1 + expr.operand2;
        break;

        case '-':
        result = expr.operand1 - expr.operand2;
        break;

        case '*':
        result = expr.operand1 * expr.operand2;
        break;

        case '/':
        if (expr.operand2 != 0)
            result = expr.operand1 / expr.operand2;
        else
            printf("Error: Trying to divide by zero.\n");
        break;
        default:
            printf("Error: Invalid operation.\n");
            result = 0;
    }
    return result;
}

float compute2(bexpression *expr)
{
    float result;
    switch (expr -> op)
    {
        case '+':
        result = expr -> operand1 + expr -> operand2;
        break;

        case '-':
        result = expr -> operand1 - expr -> operand2;
        break;

        case '*':
        result = expr -> operand1 * expr -> operand2;
        break;

        case '/':
        if (expr -> operand2 != 0)
            result = expr -> operand1 / expr -> operand2;
        else
            printf("Error: Trying to divide by zero.\n");
        break;
        default:
            printf("Error: Invalid operation.\n");
            result = 0;
    }
    return result;
}

