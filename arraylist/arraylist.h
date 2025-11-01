#ifndef ARRAYLIST_H
#define ARRAYLIST_H

/* Initial size arbitrarily chosen to be 10 */
#define INITIAL_SIZE 10

typedef struct arraylist {
  void *data[INITIAL_SIZE];
  int size;

} Arraylist;

int is_empty(Arraylist *list);
int add(Arraylist *list, void* data);
int add_at_index(Arraylist *list, void* data, int index);
void swap(void *a, void *b, size_t nbytes);


int testing(int a, int b);

#endif // !ARRAYLIST_H
