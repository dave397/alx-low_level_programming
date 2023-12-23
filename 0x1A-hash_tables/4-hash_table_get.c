#include "hash_tables.h"
/**
 * hash_table_get - retrieve value associeted with a particular key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value, otherwise NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *holder;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	holder = ht->array[idx];

	while (holder)
	{
		if (!strcmp(key, holder->key))
			return (holder->value);
		holder = holder->next;
	}
	return (NULL);
}
