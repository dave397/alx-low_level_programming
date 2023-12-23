#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: pointer to hash table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valcpy, *keycpy;
	hash_node_t *holder, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	valcpy = strdup(value);
	if (!valcpy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	holder = ht->array[index];

	while (holder)
	{
		if (!strcmp(key, holder->key))
		{
			free(holder->value);
			holder->value = valcpy;
			return (1);
		}
		holder = holder->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valcpy);
		return (0);
	}
	keycpy = strdup(key);
	if (!keycpy)
		return (0);
	new_node->key = keycpy;
	new_node->value = valcpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
