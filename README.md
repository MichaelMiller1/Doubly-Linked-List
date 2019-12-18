# Doubly-Linked-List
1) Build a doubly linked list given the keyboard inputs or the user provided data file;    
  
2) Perform a insertion-sort (in the ascending order of the value) for the above linked list, and print the list out to the screen. For comparison purpose, please also print the unsorted linked list.    
  
• Your doubly linked list node data structure is defined as in the following:   
  
  struct mynode {   
	    int const value;    
	    struct mynode *next;    
	    struct mynode *prev;    
      };    
  
A pre-prepared data file example is listed at below:    
  
30  
20  
50  
70    
10    
0  
Given the file above, your program should build a linked list with 5 nodes. Note that 0 indicates the end of the data file and 0 should not be included in the linked list. Given the above 5 data, your unsorted linked list should look like: 
  
30<==>20<==>50<==>70<==>10    
  
Your program's implementation must include the following features:  
  
• Your program must be compiled from 3 source files   
    
  ◦ main.c(Handles input and output, as well as top-level program logic.) 
  
  ◦ node.h(Declares the data structure and function insert sort, which sorts a given doubly linked list with the ascending order), 
and printlist, which prints a linked list to the screen.  
  
  ◦ node.c(Defines the function insert sort and printlist, as declared innode.h.) 
  
• Your node.h file must contain the proper preprocessor directives to prevent multiple inclusion.   

• The main function must uses scanf function call to read the input data from keybord (note that the input redirection can be used to directly read the data from a data file). The number of data (in the data file) is not pre-determined.   
  
  
    
• The function insert sor tmust be declared exactly as follows: 
  
  ◦ return value:struct mynode *.   
  
  ◦ argument (only one):struct mynode *, which is the head of the given linked list.  
  
  ◦ Note that you must implement the insertsort() function by yourselves and cannot use any existing implementation from other library. You have to use insertsort algorithm instead of other sorting algorithm.  
  
    
      
• The function print list must be declared exactly as follows: 
  
  ◦  return value: void. 
  
  ◦  argument (only one):struct mynode *, which is the head of the given linked list.   
  
  ◦  These files must compile on a department LINUX machine with the following command:
make. 
