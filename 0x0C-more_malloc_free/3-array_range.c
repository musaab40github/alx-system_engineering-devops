#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: index 0
 * @max: last index '\0'
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
