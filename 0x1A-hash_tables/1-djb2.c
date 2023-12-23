#include "hash_tables.h"
/**
 * hash_djb2: compute hash
 * @str: hashed string
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	for (; *str != '\0'; ++str)
	{
		hash = ((hash << 5) ^ hash) ^ (*str);
	}

	return (hash);
}
