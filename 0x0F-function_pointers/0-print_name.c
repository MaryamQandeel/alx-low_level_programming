#include <stdio.h>
#include <stdlib.h>



void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

int main()
{
	void (*print_name)(char*);
	print_name = &print_name_as_is;

}
