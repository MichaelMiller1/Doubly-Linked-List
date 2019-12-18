//declares the data structure and the functions of said data structure
#ifndef NODE_H_
#define NODE_H_


struct mynode {
int const value;
struct mynode *next;
struct mynode *prev;
};


struct mynode * insertsort(struct mynode *head);
void printlist (struct mynode *node);
struct mynode* pushNode(struct mynode *node, int const newValue);
#endif
