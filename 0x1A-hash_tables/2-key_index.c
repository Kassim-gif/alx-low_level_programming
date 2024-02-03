#include "hash_tables.h"

/**
 * key_index - Get tha index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: Tha key to get tha index of.
 * @size: Tha size of tha array of tha hash table.
 *
 * Return: Tha index of tha key.
 * Description: Uses tha djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
