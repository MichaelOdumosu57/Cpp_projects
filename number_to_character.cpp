#include <iostream>
#include <cstring>
using namespace std;
static char debug[25];
// recusive loop for every word
void converter(int * num);
int main (void) {
	cout << "debug\n";
	cin >> debug;
	//cout << debug[0] << endl;
	int word_number;
	cout << "Please enter a number to be converted to words digit by digit\n";
	cin >> word_number;
	if (strcmp(debug,"yes") == 0){
		cout << "this is your number " << word_number << endl;
	}
	cout << word_number/100 << endl;
	return 0;

}
void converter(int * num) {
	
}
