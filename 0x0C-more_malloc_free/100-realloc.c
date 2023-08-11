#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc
 * and free
 * @ptr: pointer
 * @old_size: formal size
 * @new_size: new size
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size = (old_size) ? old_size : new_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
