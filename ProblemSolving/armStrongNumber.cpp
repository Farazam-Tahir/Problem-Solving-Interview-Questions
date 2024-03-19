#include <iostream>

using namespace std;

int main() {
	int number, sum = 0;
	cin>>number;
	
	int num = number;
	while(num > 0){
		int lastDigit = num%10;
		sum += (lastDigit*lastDigit*lastDigit);
		num /= 10;
	}
	
	cout<<"Number : "<<number<<endl;
	cout<<"Armstrong : "<<sum<<endl;
  return 0;
}
//ArmStrong means sum of cube of each digit of a number is equal to that number.
