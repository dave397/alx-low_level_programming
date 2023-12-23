#include "hash_tables.h"

/**
 * hash_table_print - print hash table (ht)
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *holder;
	int not_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		holder = ht->array[i];
		while (holder)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", holder->key, holder->value);
			not_fin = 1;
			holder = holder->next;
		}
	}
	printf("}\n");
}