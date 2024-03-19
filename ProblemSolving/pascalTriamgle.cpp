#include <iostream>

using namespace std;

int fictorial(int n){
	
	int fictorial = 1;
	for(int i=n; i>0; i--){
		fictorial = fictorial*i;
	}
	
	return fictorial;
}

int main() {
	int rows;
	cin>>rows;
	
	for(int i = 0; i<rows; i++){
		for(int j = 0; j<=i ; j++){
			cout<< (fictorial(i)/(fictorial(j)*fictorial(i-j)));
		}
		cout<<endl;
	}
	
  return 0;
}
