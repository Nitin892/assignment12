// 1. Write a recursive function to print first N natural numbers

#include <stdio.h>
void naturalnumbers(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    naturalnumbers(n);
    return 0;
}

void naturalnumbers(int n)
{
    if (n > 0)
    {

        naturalnumbers(n - 1);
        printf("%d\n", n);
    }
}

// 2. Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>
void naturalnumbers(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    naturalnumbers(n);
    return 0;
}

void naturalnumbers(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        naturalnumbers(n - 1);
    }
}

// 3. Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void naturalnumbers(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    naturalnumbers(n);
    return 0;
}

void naturalnumbers(int n)
{
    if (n > 0)
    {

        naturalnumbers(n - 1);
        printf("%d\n", 2*n-1);
    }
}

// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void naturalnumbers(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    naturalnumbers(n);
    return 0;
}

void naturalnumbers(int n)
{
    if (n > 0)
    {
        printf("%d\n", 2 * n - 1);
        naturalnumbers(n - 1);
    }
}

// 5. Write a recursive function to print first N even natural numbers
#include <stdio.h>
void naturalnumbers(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    naturalnumbers(n);
    return 0;
}

void naturalnumbers(int n)
{
    if (n > 0)
    {

        naturalnumbers(n - 1);
        printf("%d\n", 2 * n);
    }
}

// 6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void naturalnumbers(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    naturalnumbers(n);
    return 0;
}

void naturalnumbers(int n)
{
    if (n > 0)
    {

        printf("%d\n", 2 * n);
        naturalnumbers(n - 1);
    }
}

// 7. Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
void naturalnumbers(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    naturalnumbers(n);
    return 0;
}

void naturalnumbers(int n)
{
    if (n > 0)
    {

        naturalnumbers(n - 1);
        printf("%d\n", n * n);
    }
}

// 8. Write a recursive function to print binary of a given decimal number

#include <stdio.h>
void naturalnumbers(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    naturalnumbers(n);
    return 0;
}

void naturalnumbers(int n)
{
    if (n > 0)
    {
        naturalnumbers(n / 2);
        printf("%d", n % 2);
    }
}
// 9. Write a recursive function to print octal of a given decimal number

#include <stdio.h>
void octal(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    octal(n);
    return 0;
}

void octal(int n)
{
    if (n > 0)
    {

        octal(n / 8);
        printf("%d", n % 8);
    }
}

// 10. Write a recursive function to print reverse of a given number

#include <stdio.h>
void reversenumber(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    reversenumber(n);
    return 0;
}

void reversenumber(int n)
{
    int new = 0, t;
    while (n > 0)
    {
        t = n % 10;
        n = n / 10;
        new = new * 10 + t;
    }
    printf("%d", new);
}