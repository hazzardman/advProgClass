#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	char *s;
	s = (char*)malloc(1024 * sizeof(char));
	scanf("%[^\n]", s);
	s = (char*)realloc(s, strlen(s) + 1);
	char* p;
	p = strtok(s, " ");
	while(p!=NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, " ");
	}
	//Write your logic to print the tokens of the sentence here.
	return 0;
}

