#include<iostream>
using namespace std;
int main() {
	
	char input;
	float input2;
	
	cout << "Do you like fish? Y/N" << endl;
	cin >> input;

	if (input == 'Y') {
		cout << "blub blub!" << endl;
	}
	else if (input == 'N')
		cout << "Nothing" << endl;
	

	cout << "How many fish do you have?" << endl;
	cin >> input2;

	if (input2 < 5)
		cout << "sorry but you don't have enough fishes" << endl;
	else if (input2 > 5)
		cout << "You're fishy" << endl;


	




	









}
