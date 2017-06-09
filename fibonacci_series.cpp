#include <iostream>
using namespace std;

//recursive prototype using call by reference

int fibo_function(int * len);
//to debug the program
static int debug;
static int fib_seq_len;
static int first = 0;
static int second =1;
static int next;
int main(void) {
	
	//query
	cout << "debug?\n";
	cin >> debug;
	cout << "Please enter the amonut of numbers you want to see in the fibonacci sequence\n";
	cin >> fib_seq_len;
	cout << "So this is the length that you want?   "  << fib_seq_len << endl;
	//function call
        cout << first << " " << second << " ";
	fibo_function(&fib_seq_len);
	cout << endl;
	return 0;

}	

//recursive function using call by reference
int fibo_function(int * len) {
	// the count would refer to the len in main and is shared that way
	if (*len == 0) {
		return 0;
	}
	else {
		next = first + second;
                if(debug == 0) {
                        cout << "the next number in the sequence" << next << endl;
                }
		else {
			cout << next << " " ; 
		}
		first = second;
		second = next;	
		*len -= 1;
		if(debug == 0) {
			cout << "the current length" << *len << endl;	
		}
		fibo_function(len);
	}
		
}	
