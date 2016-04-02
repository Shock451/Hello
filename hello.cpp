#include <iostream>
#include <stdlib.h>

using namespace std;

void sayHello(){
	cout << "What's your name? ";
	string name; cin >> name;
	cout << "Hello, " << name << endl;
}

int main(){

	sayHello();

}
