#include <iostream>
using namespace std;
int fibonacci(int n){
	if (n== 0 || n==1)
		return n;
		else
		return fibonacci(n-1)+fibonacci(n-2);
	}	
int main(){
	int a;
	cout<<"masukan deret = ";
	cin>> a;
	
	cout<<"= ";
	    for(int i=0;i< n;i++){
			cout<<fibonacci(i)<< " ";
			
		}
	
	
	return 0;
	
}

