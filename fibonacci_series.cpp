#include <iostream>
using namespace std;

//recursive prototype using call by value

int fibo_function(int * len);

int main() {
int fib_seq_len;
cout << "Please enter the amonut of numbers you want to see in the fibonacci sequence\n";
cin >> fib_seq_len;
cout << "So this is the length that you want?   "  << fib_seq_len << endl;
return 0;

}

//recursive function using call by value
int fibo_function(int * len) {
	int first = 0;
	int second = 1;
	cout << first << second;
	int next;
	if (len == 0) {
		return 0;
	}
	else {
		next = first + second;
		cout << next;
		first = second;
		second = next;	
		len --;
	}
	
}
