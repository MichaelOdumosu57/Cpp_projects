#include <iostream>
#include <cstring>
using namespace std;
int main() {
        char ch = 65;
	int count = 0;
	while(count != 26) {
		cout << " ";
		count++;
	}
	while(ch != 91) {
		std::cout << char(ch) << '\n';
                ch += 1;
	}
}
