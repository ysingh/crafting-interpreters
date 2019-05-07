#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include "dll.h"

list* init(void) {
	list* l = malloc(sizeof(list));
	if (l == NULL) return NULL;
	l->HEAD = NULL;
	l->TAIL = NULL;
	l->length = 0;
	return l;
}

void append(list* l, char* str) {
	node* n = malloc(sizeof(node));
	if (n == NULL) {
		return;
	}
	printf("Appending %s\n", str);
	n->str = malloc(strlen(str) + 1);
	strcpy(n->str, str);
	n->next = NULL;
	if (!l->length) {
		n->prev = NULL;
		l->HEAD = n;
		l->TAIL = n;
	} else {
		n->prev = l->TAIL;
		l->TAIL->next = n;
		l->TAIL = n;
	}
	l->length += 1;
}

size_t list_length(list* l) {
	return l->length;
}

