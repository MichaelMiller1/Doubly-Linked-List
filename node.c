//defines all functions of myNode declared in node.h
#include <stdio.h>
#include <stdlib.h>
#include "node.h"



void printlist (struct mynode *node)
{
   while(node)
   {
if(node->next)
   printf("%d<==>", node->value);
   else
   printf("%d\n", node->value);

   node=node->next;
   }
   return;
}



struct mynode* pushNode(struct mynode *node, int const newValue)
{
   struct mynode *newNode = (struct mynode*)malloc(sizeof(struct mynode));
   //assign the head in the list which will be returned every time
   struct mynode *list = node;
   int *ptr = &newNode->value;
   *ptr = newValue;
   newNode->next = NULL;
   if(node == NULL)
   {
   newNode->prev=NULL;
   node=newNode;
   list=node;
   return list;
   }
   while(node->next != NULL)
   {
       node=node->next;
   }
   newNode->prev = node;
   node->next = newNode;
   return list;
}



struct mynode* insertsort(struct mynode *head)
{
//list variable to store the sorted list
struct mynode* sorted = NULL;
struct mynode* list = NULL;

struct mynode* current = head;
while (current != NULL) {
struct mynode* next = NULL;
next = current->next;
current->next = NULL;
current->prev = NULL;

if (sorted == NULL)
   {
   sorted = current;
       list=sorted;
   }
   else if (sorted->value >= current->value)
   {
       current->next = sorted;
       current->next->prev = current;
       sorted = current;
       list=sorted;
   }
   else
   {
list=sorted;

struct mynode* newVal = NULL;
       newVal = sorted;
       //check where to enter the new value
       while (newVal->next != NULL && newVal->next->value < current->value)
   {
           newVal = newVal->next;
       }

       current->next = newVal->next;

       if (newVal->next != NULL)
           current->next->prev = current;

       newVal->next = current;
       current->prev = newVal;
   }

current = next;
}

//return the sorted list
return list;
}


