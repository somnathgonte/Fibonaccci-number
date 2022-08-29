// Fibonaccci Series without recursion
// Input : 8
// Output : 0 1 1 2 3 5 8 13

#include <stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 1, iNo3, n;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", iNo1);
        iNo3 = iNo1 + iNo2;
        iNo1 = iNo2;
        iNo2 = iNo3;
    }

    return 0;
}