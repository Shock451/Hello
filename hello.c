#include <stdlib.h>
#include <stdio.h>

void sayHello(){
	char* input = malloc(sizeof(char*));
	printf("What's your name? ");
	scanf("%s", input);
	printf("Hello, %s\n", input);
	free(input);
}

int main(){
	sayHello();
}
