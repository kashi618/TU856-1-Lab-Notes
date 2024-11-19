#include <stdio.h>

int main () {
	int *ptr1;
	int var1;
	
	char *ptr2;
	int var2;
	
	var1 = 10;
	var2 = 'A';
	
	ptr1 = &var1;
    ptr2 = &var2;
	
	printf("var1 contains %d, with the memory address of %p\n",var1,ptr1);
	printf("var1 contains %d, with the memory address of %p\n",var2,ptr2);	
}
