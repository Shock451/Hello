#include <stdlib.h>
#include <stdio.h>

void sayHello(char *name){
	printf("Hello, %s\n", name);
}

int main(){
	char* input = malloc(sizeof(char*));
	scanf("%s", input);
	sayHello(input);
	free(input);
}
