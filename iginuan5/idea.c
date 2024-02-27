#include <stdio.h>
#include <string.h>
/**
 * main - learning
 * return 0
 */
int main(void)
{
	char* name = "my name is emmanuel";
	if(strcmp(name, "my name is Emmanuel") == 0)
	{ 
		printf("i am saying my name is emmanuel\n");
	}
	else
	{	
		printf("he does not know his name\n");
	}
	return (0);
}
