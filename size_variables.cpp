#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 15;
	int c = a + b;

	cout << c << endl;


	char d = 'x';
	cout << d << endl;

	float f = 1.23;
    long long e = 1245662626;
	bool b1 = true;

    cout << sizeof(f) << endl;

	int size = sizeof(f);
	cout << sizeof(c) << endl;
    // cout << sizeof(f) << endl;
    cout << sizeof(e) << endl;


	cout << size << endl;
}
