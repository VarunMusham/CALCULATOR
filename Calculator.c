#include <stdio.h>
#include <math.h>

int main() { 
    double a, b;
    char op;

    scanf("%lf %c %lf", &a, &op, &b);

    while (op != '=') {
        switch (op) {
            case '+': a += b; break;
            case '-': a -= b; break;
            case '*': a *= b; break;
            case '/': a /= b; break;
            case '%': a = fmod(a, b); break;
            case '^': a = pow(a, b); break;
            default: 
                printf("Invalid operation\n");
                return 1;
        }
        printf("%.2lf\n", a);
        scanf(" %c %lf", &op, &b);
    }

    printf("DONE\n");
    return 0;
}
