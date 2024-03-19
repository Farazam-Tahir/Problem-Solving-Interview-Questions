#include <iostream>

using namespace std;

void fibonacciSeries(int n){
	int num1 = 0, num2 = 1, num3;
	
	for(int i=0; i<n; i++){
		cout<<num1;
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

	}
}

int main() {
	int n;
	cin>>n;
	
	fibonacciSeries(n);
  return 0;
}
