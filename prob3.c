/*
 
This program creates an array containing 15 values
(1 through 15). It then calls a duplicate function to
return a clone of the array. Finally, it prints the
cloned array.

Hints: See hints in prob1.c.  gdb is your friend.

What error(s) did you find in the code?
Answer:

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 15
int * duplicate(int *);

int main()
{
   int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
   int * duplist = duplicate(list);
   int i;
   for (i = 0; i < SIZE; i++) printf("%d\n", duplist[i]);
   return 0;
}

//Creates a clone of the int array passed in and returns
//a pointer to the clone.
int * duplicate(int * list)
{
   int size = sizeof(list);
   int * duplist = malloc(size * sizeof(int));
   memcpy(duplist, list, size * sizeof(int));
   return duplist;
}

