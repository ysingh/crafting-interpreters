#include <stddef.h>

struct node {
	char* str;
	struct node* next;
	struct node* prev;
};

struct list {
	struct node* HEAD;
	struct node* TAIL;
	size_t length;
	};

typedef struct list list;
typedef struct node node;

list* init(void);
void append(list*, char* str);
void prepend(list*, char* str);
void removeFront(list*, char* str);
void removeBack(list*, char* str);
size_t list_length(list*);

