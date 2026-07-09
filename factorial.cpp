#include<iostream>
using namespace std;
int main(){
	int i,num;
	cin>>num;
	long long fact=1;
	for(i=1;i<=num;i++){
		fact*=i;
	}
	cout<<"FACTORIAL="<<fact;
}
