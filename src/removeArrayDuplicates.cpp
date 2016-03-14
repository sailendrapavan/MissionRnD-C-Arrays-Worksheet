/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	
	if (len < 0 || Arr == NULL)
	{
		return -1;
	}
	if (len == 1)
	{
		return 1;
	}

	int i = 0, j = 1;
	for (i = 0; i < len; i++)
	{
		for (int p = i + 1; p < len; p++)
		{
			if (*(Arr + i) > *(Arr + p))
			{
				int t = *(Arr + i);
				*(Arr + i) = *(Arr + p);
				*(Arr + p) = t;
			}
		}
	}
	i = 0;
	while (len >= 0)
	{
		if (*(Arr + i) == *(Arr + j))
		{
			j = j + 1;
		}
		else
		{
			i = i + 1;
			*(Arr + i) = *(Arr + j);
		}
		len = len - 1;

	}
	return i + 1;
}