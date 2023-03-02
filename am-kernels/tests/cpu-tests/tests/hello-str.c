#include "../include/trap.h"
//#include <stdio.h>
char buf[128];

int main() {
	//printf("a");
	
	sprintf(buf, "%s", "Hello world!\n");
	check(strcmp(buf, "Hello world!\n") == 0);
	
	sprintf(buf, "%d + %d = %d\n", 1, 1, 2);
	check(strcmp(buf, "1 + 1 = 2\n") == 0);

	sprintf(buf, "%d + %d = %d\n", 2, 1000, 1002);
	check(strcmp(buf, "2 + 1000 = 1002\n") == 0);
	
	return 0;
}
