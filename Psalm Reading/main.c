#include <stdio.>
#define p printf
#define s scanf
int main()
{
    printf("Rizaldo V. Cabodbod BSIT 1ST YEAR - 311");
    int A, B, Prod, Sum, Diff, Div;

    Prod = 0;
    Sum = 0;
    Diff = 0;
    Div = 0;
    p("\nInput A: ");
    s("%d", &A);
    p("\nInput B: ");
    s("%d", &B);
    p("\nInput Prod:%d", Prod = A * B);
    p("\nInput Sum: %d", Sum = A + B);
    p("\nInput Diff: %d", Diff = A - B);
    p("\nInput Div: %d", Div = A / B);

    return 0;
}