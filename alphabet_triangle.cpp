#include <iostream>
#include <cstring>
using namespace std;
int main() {
        char ch = 65; //represents A from ascii, used so we wont use extra space making an array
	char helper = 65; // help the pyramid
	int count = 0; // for spaces to build the pyramid
	int desired = 26; // amount of spaces needed

	while(ch != 91) { //92 = Z = end of alphabet
        	while(count != desired) {
                	cout << " ";          //making spaces
                	count++;
        	}
		count = 0;
		desired -- ;
		while(helper != ch) {
			std::cout << char(helper); //code that converts int to a string
			helper++;
		}
                while(helper >= 65) {
                        std::cout << char(helper); //code that converts int to a string
                        helper--;
                }
		cout << endl;
		helper = 65; // so it wont overreach to @ which = 64
                ch += 1;
	}
}
