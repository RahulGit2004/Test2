//	Creation and traversal in linked list:

#include<stdio.h>
#include<stdlib.h>

struct node {
	int value;
	struct node *next;
};

void traverse (struct node *head) {
	while (head != NULL) {
		printf("Elements : %d\n", head->value);
		head = head->next;
	}
}

int main () {
	
	struct node *head, *second, *third;
	head = (struct node*) malloc (sizeof(struct node));
	second = (struct node*) malloc (sizeof(struct node));
	third = (struct node*) malloc (sizeof(struct node));
	
	head->value = 1;
	head->next = second;
	
	second->value = 12;
	second->next = third;
	
	third->value = 14;
	third->next = NULL;
	
	traverse(head);

	return 0;
}
