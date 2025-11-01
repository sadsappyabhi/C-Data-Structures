#ifndef ARRAYLIST_H
#define ARRAYLIST_H

const int initial_size = 10;

typedef struct arraylist {
  void *data[initial_size];
  int size;

} Arraylist;

int is_empty(Arraylist *list);

#endif // !ARRAYLIST_H
