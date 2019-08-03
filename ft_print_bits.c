#include <stdlib.h>
#include <stdio.h>


void    print_bits(int octet)
{
    int z = 1;
	int oct = (int)octet;

	z <<= 16;
    while (z > 0)
    {
        if (oct & z)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        z >>= 1;
    }
}


int main()
{
	printf("Printing bits\n");


	//unsigned char foo = 128;
	print_bits(500);

	return 0;
}
