#include <unistd.h>



int main()
{
	int a;
	int b;

	a = 23;

	b = (a % 10) + 48;

	write(1, &b, 1);
	{
	
	}

}

