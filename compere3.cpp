#include <iostream>
using namespace std;

/* 
 * nếu a > b && a > c => A
 * nếu b > c || c > b => B || C
 * else bằng nhau
 */
int compere(int a, int b, int c) {
	if(a > b && a > c) {
		cout << "A lớn nhất\n";
	} else if (b > c || c > b) {
		if(b > c) {
			cout << "B lớn nhất\n";
		} else {
			cout << "C lớn nhất\n";
		}
	} else if (a == b || a == c || b == c && !(a==b && a==c && c==b)) {
		if (a == b) {
			if (b > c) {
				cout << "A B bằng nhau và lớn hơn C\n";
			} else {
				cout << "A B bằng nhau và nhỏ hơn C\n";
			}
		} else if (a == c) {
			if (a > b) {
				cout << "A C bằng nhau và lớn hơn B\n";
			} else {
				cout << "A C bằng nhau và nhỏ hơn B\n";
			}
		} else if (b == c) {
			if (b > c) {
				cout << "B C bằng nhau và lớn hơn A\n";
			} else {
				cout << "B C bằng nhau và nhỏ hơn A\n";
			}
		}
	} else {
		cout << "A, B, C bằng nhau\n";
	}
	return 0;
}

int main() {
	int a, b, c;
	
	cout << "Nhập vào A: ";
	cin >> a;
	cout << "Nhập vào B: ";
	cin >> b;
	cout << "Nhập vào C: ";
	cin >> c;
	
	compere(a, b, c);
	return 0;
}