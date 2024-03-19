#include <iostream>

using namespace std;

void fictorial(int n){
	
	int fictorial = 1;
	for(int i=n; i>0; i--){
		fictorial = fictorial*i;
	}
	
	cout<<fictorial;
}

int main() {
	int n;
	cin>>n;
	
	fictorial(n);
  return 0;
}
