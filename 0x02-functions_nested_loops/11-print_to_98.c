void _putchar(char c); // Declaration for _putchar function

void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != 98)
            {
                _putchar(i / 10 + '0'); // Print tens digit
                _putchar(i % 10 + '0'); // Print ones digit
                _putchar(','); // Print comma
                _putchar(' '); // Print space
            }
            else
            {
                _putchar('9'); // Special case for 98
                _putchar('8');
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            _putchar(i / 10 + '0'); // Print tens digit
            _putchar(i % 10 + '0'); // Print ones digit

            if (i != 98)
            {
                _putchar(','); // Print comma
                _putchar(' '); // Print space
            }
        }
    }

    _putchar('\n'); // Print newline
}
