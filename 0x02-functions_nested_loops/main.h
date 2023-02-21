	
void _putchar(void)
{
	char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};

        int i;

	for (i = 0; i < 10; i++)
		putchar(ch[i]);
}

void print_alphabet(void)
{
	        int i;
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar(10);
