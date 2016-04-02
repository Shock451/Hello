#include <stdio.h>

void sayHello(char* name){
	printf("Hello, %s\n", name);
}

int main(){
	sayHello(scanf("%s"));
}
