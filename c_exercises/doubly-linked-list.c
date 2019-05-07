#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dll.h"

int main(void) {
	list* l = init();
	append(l, "HELLO");
	append(l, "HAI");
	append(l, "Loreum ipsum tren de dolor plurum est pvblis ave crux est spics gather here");
	append(l,"");
	printf("List len: %zu\n", list_length(l));
	node* currNode = l->HEAD;
	do {
		printf("%s\n", currNode->str);
	} while ((currNode = currNode->next));
	return EXIT_SUCCESS;
}