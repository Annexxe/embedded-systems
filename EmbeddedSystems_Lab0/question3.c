#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
	char string[] = "Hello, World";
	int b = 0;

	while(1){
		printf("%c", string[b]);
		b++;
		if(string[b] == '\0'){
			break;
		}
	}
}