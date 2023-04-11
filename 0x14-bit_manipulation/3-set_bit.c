#include "main.h"
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask <<= index;
	*num = *num | mask;
	return (1);
}
