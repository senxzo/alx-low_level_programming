void _putchar(char c);

void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != 98)
            {
                _putchar(i / 10 + '0'); 
                _putchar(i % 10 + '0'); 
                _putchar(','); 
                _putchar(' '); 
            }
            else
            {
                _putchar('9'); 
                _putchar('8');
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            _putchar(i / 10 + '0'); 
            _putchar(i % 10 + '0'); 

            if (i != 98)
            {
                _putchar(','); 
                _putchar(' ');
            }
        }
    }

    _putchar('\n'); 
}
