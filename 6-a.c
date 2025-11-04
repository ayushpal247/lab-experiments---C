/*Develop a recursive and non-recursive function FACT (num) to find the factorial of a number, n!, defined by FACT No = 1, if n = 0. Otherwise, FACTNo = n * FACT(n-1).
 Using this function, write a C program to compute the binomial coefficient.
 Tabulate the results for different values of n and r with suitable messages.*/



 #include <stdio.h>
    int recursive_fact(int n) {
        if (n == 0)
            return 1;
        else
            return n * recursive_fact(n - 1);
    }

    int non_recursive_fact(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    int binomial_coefficient(int n, int r, int use_recursive) {
        if (use_recursive) {
            return recursive_fact(n) / (recursive_fact(r) * recursive_fact(n - r));
        } else {
            return non_recursive_fact(n) / (non_recursive_fact(r) * non_recursive_fact(n - r));
        }
    }
    int main() {
        int n, r;
        printf("Enter values for n and r (n >= r >= 0): ");
        scanf("%d %d", &n, &r);

        if (n < r || r < 0) {
            printf("Invalid input. Ensure that n >= r >= 0.\n");
            return 1;
        }

        printf("Using Recursive Factorial:\n");
        printf("C(%d, %d) = %d\n", n, r, binomial_coefficient(n, r, 1));

        printf("Using Non-Recursive Factorial:\n");
        printf("C(%d, %d) = %d\n", n, r, binomial_coefficient(n, r, 0));

        return 0;
    }
    