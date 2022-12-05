#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[6] = {0};
	char name[6] = {'r'};



	// first, print them out raw
	printf("numbers: %d %d %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3],
			numbers[4], numbers[5]);

	printf("name each: %c %c %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3],
			name[4], name[5]);

	printf("name: %s\n", name);

	// setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;
	numbers[5] = 6;

	// setup the name
	name[0] = 'R';
	name[1] = 'o';
	name[2] = 'b';
	name[3] = 'e';
	name[4] = 'r';
	name[5] = '\0';

	// then print them out initialized
	printf("numbers: %d %d %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3],
			numbers[4], numbers[5]);
	printf("name each: %c %c %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3],
			name[4], name[5]);

	// print  the name like a string
	printf("name: %s\n", name);

	// another way to use name
	char *another = "Robert";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c %c %c\n",
		       	another[0], another[1],
			another[2], another[3],
			another[4], another[5]);

	return 0;

}




