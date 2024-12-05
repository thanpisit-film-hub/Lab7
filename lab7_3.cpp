#include<iostream>
using namespace std;

char before(char x){
	char sum;
	if(x == 'A'){
		sum = '[' - 1;
	}
	if(x != 'A' and x <= 'Z'){
		sum = x - 1;
	}
	if(x  > 'Z' or x < 'A'){
		sum = '0';
	}
	
	return sum;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
