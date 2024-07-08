/*Write a C program to act as simple calculator, first it will ask the user to enter the
operation ID, depending on the operation, the program will ask the user either to
enter 1 operand or 2 operands and the program will execute the operation and print
the result. Each operation should be implemented in a stand a long function.
ID  Operation   Number of Operands
1     Add            2
2     Subtract       2
3     Multiply       2
4     Divide         2
5     And            2
6     Or             2
7     Not            1
8     Xor            2
9     reminder       2
10    Increment      1
11    Decrement      1   */
#include <stdio.h>

// Function prototypes for each operation
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int and(int a, int b);
int or(int a, int b);
int not(int a);
int xor(int a, int b);
int modulus(int a, int b);
int increment(int a);
int decrement(int a);

int main() {
    int op, x, y;

    printf("Enter the operation ID: ");
    scanf("%d", &op);

    if (op == 7 || op == 10 || op == 11) {
        printf("Enter the number: ");
        scanf("%d", &x);
        switch (op) {
            case 7:
                printf("NOT %d = %d\n", x, not(x));
                break;
            case 10:
                printf("Increment %d = %d\n", x, increment(x));
                break;
            case 11:
                printf("Decrement %d = %d\n", x, decrement(x));
                break;
            default:
                printf("Invalid operation ID\n");
                break;
        }
    } else {
        printf("Enter the first number: ");
        scanf("%d", &x);
        printf("Enter the second number: ");
        scanf("%d", &y);

        switch (op) {
            case 1:
                printf("%d + %d = %d\n", x, y, add(x, y));
                break;
            case 2:
                printf("%d - %d = %d\n", x, y, subtract(x, y));
                break;
            case 3:
                printf("%d * %d = %d\n", x, y, multiply(x, y));
                break;
            case 4:
                if (y != 0) {
                    printf("%d / %d = %d\n", x, y, divide(x, y));
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case 5:
                printf("%d AND %d = %d\n", x, y, and(x, y));
                break;
            case 6:
                printf("%d OR %d = %d\n", x, y, or(x, y));
                break;
            case 8:
                printf("%d XOR %d = %d\n", x, y, xor(x, y));
                break;
            case 9:
                if (y != 0) {
                    printf("%d %% %d = %d\n", x, y, modulus(x, y));
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            default:
                printf("Invalid operation ID\n");
                break;
        }
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int and(int a, int b) {
    return a & b;
}

int or(int a, int b) {
    return a | b;
}

int not(int a) {
    return ~a;
}

int xor(int a, int b) {
    return a ^ b;
}

int modulus(int a, int b) {
    return a % b;
}

int increment(int a) {
    return ++a;
}

int decrement(int a) {
    return --a;
}
