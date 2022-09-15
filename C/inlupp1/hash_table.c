#include "hash_table.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

typedef struct entry entry_t;

struct entry
{
  int key;       // holds the key
  char *value;   // holds the value
  entry_t *next; // points to the next entry (possibly NULL)
};

struct hash_table
{
  entry_t *buckets[17];
};

ioopm_hash_table_t *ioopm_hash_table_create(void) {
    return NULL;
}

void ioopm_hash_table_destroy(ioopm_hash_table_t *ht) {
    return;
}
