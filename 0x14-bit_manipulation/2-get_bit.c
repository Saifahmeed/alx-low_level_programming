#include "main.h"
int get_bit(unsigned long int num, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit = (num >> index) & 1;

	return (bit);
}
