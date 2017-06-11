#include <iostream>
#include <cstring>
using namespace std;
int main() {
        char ch = 65; //represents A from ascii, used so we wont use extra space making an array
	int count = 0; // for spaces to build the pyramid
	int desired = 26; // amount of spaces needed

	while(ch != 91) { //91 = Z = end of alphabet
        	while(count != desired) {
                	cout << " ";          //making spaces
                	count++;
        	}
		count = 0;
		desired -- ;
		std::cout << char(ch) << '\n'; //code that converts int to a string
                ch += 1;
	}
}
