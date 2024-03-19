#include <iostream>

using namespace std;

void isPrime(int n){
	if(n <= 1){
		return;
	}else{
		for(int i = 2; i<n/2; i++){
			if(n%i == 0){
				cout<<"not prime";
				return;
			}
		}
	}
	
	cout<<"Number is prime";
}

int main() {
  int num;
  cin>>num;
  
  cout<<isPrime(num)<<endl;
  return 0;
}
