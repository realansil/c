#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

char charStack[100];
int topChar = -1;

void pushChar(char x) {
    charStack[++topChar] = x;
}

char popChar() {
    if (topChar == -1)
        return -1;
    else
        return charStack[topChar--];
}

int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int intStack[100];
int topInt = -1;

void pushInt(int x) {
    intStack[++topInt] = x;
}

int popInt() {
    return intStack[topInt--];
}

int main() {
    char infix[100], postfix[100], *e, x;
    int k = 0;

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    e = infix;

    while (*e != '\0') {
        if (isdigit(*e)) {
            postfix[k++] = *e;
        }
        else if (*e == '(') {
            pushChar(*e);
        }
        else if (*e == ')') {
            while ((x = popChar()) != '(')
                postfix[k++] = x;
        }
        else {
            while (priority(charStack[topChar]) >= priority(*e))
                postfix[k++] = popChar();
            pushChar(*e);
        }
        e++;
    }

    while (topChar != -1) {
        postfix[k++] = popChar();
    }

    postfix[k] = '\0';

    printf("\nPostfix Expression: %s\n", postfix);
    e = postfix;
    int n1, n2, n3, num;

    while (*e != '\0') {
        if (isdigit(*e)) {
            num = *e - '0';
            pushInt(num);
        } else {
            n1 = popInt();
            n2 = popInt();

            switch (*e) {
                case '+':
                    n3 = n2 + n1;
                    break;

                case '-':
                    n3 = n2 - n1;
                    break;

                case '*':
                    n3 = n2 * n1;
                    break;

                case '/':
                    n3 = n2 / n1;
                    break;

                case '^':
                    n3 = pow(n2, n1);
                    break;
            }

            pushInt(n3);
        }

        e++;
    }

    printf("\nResult of the expression = %d\n", popInt());

    return 0;
}
