Doubly linked list is a list that can be traversed backwards and forward
It contains the previous address and the next address as well as the data it contains
it can be difened this way:

stuct node {
	struct node* prev;
	int data;
	struct node* next;
};
