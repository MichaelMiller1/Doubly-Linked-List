#include <stdio.h>
#include <stdlib.h>
#include "node.h" 

int main()
{
struct mynode *head=NULL;
int value;

printf("Give first value: \n");
scanf("%d",&value);

printf("Give next values, and input 0 to end list: \n");
do{
  if(value>0){
	head = pushNode(head, value);
	scanf("%d",&value);
  }
}while (value>0);

   printf("Before insertion sort: ");
   printlist(head);

   head=insertsort(head);
   printf("After insertion sort: ");
   printlist(head);
return 0;
}
