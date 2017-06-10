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
	converter(&word_number);
	return 0;

}
void converter(int * num) {
	int digit = *num/100;
	switch(digit) {
            case 0:
                cout << "zero ";
                break;
            case 1:
                cout << "one ";
                break;
            case 2:
                cout << "two ";
                break;
            case 3:
                cout << "three ";
                break;
            case 4:
                cout << "four ";
                break;
            case 5:
                cout << "five ";
                break;
            case 6:
                cout << "six";
                break;
            case 7:
                cout << "seven ";
                break;
            case 8:
                cout << "eight ";
                break;
            case 9:
                cout << "nine ";
                break;

	}
}
