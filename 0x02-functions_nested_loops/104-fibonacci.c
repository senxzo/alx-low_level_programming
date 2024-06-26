#include <stdio.h>

void print_fibonacci()
{
    unsigned long f1 = 1, f2 = 2;
    unsigned long f1_high, f1_low, f2_high, f2_low;
    unsigned long high, low;
    int i;

    printf("%lu, %lu", f1, f2);

    for (i = 3; i <= 98; i++)
    {
        if (f1 > 10000000000 || f2 > 10000000000)
        {
            f1_high = f1 / 10000000000;
            f1_low = f1 % 10000000000;
            f2_high = f2 / 10000000000;
            f2_low = f2 % 10000000000;

            high = f1_high + f2_high;
            low = f1_low + f2_low;
            if (low > 10000000000)
            {
                high += 1;
                low %= 10000000000;
            }

            f1 = f2;
            f2 = high * 10000000000 + low;
            printf(", %lu%010lu", high, low);
        }
        else
        {
            f2 = f1 + f2;
            f1 = f2 - f1;
            printf(", %lu", f2);
        }
    }
    printf("\n");
}

int main(void)
{
    print_fibonacci();
    return (0);
}
