/*
Question:
Declare variables within different code blocks (enclosed by curly braces)
and test their accessibility within and outside those blocks.
*/

#include <stdio.h>
int main( ) {
if (1) {
int blockVar = 50;
printf("Inside block: blockVar = %d\n", blockVar);
}
// printf("Outside block: blockVar = %d\n", blockVar); // 
return 0;
}


