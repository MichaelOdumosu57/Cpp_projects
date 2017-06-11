#include <iostream>
#include <cstring>
using namespace std;
int main() {
        char ch = 65;
	while(ch != 91) {
		std::cout << char(ch) << '\n';
                ch += 1;
	}
}
