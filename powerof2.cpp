#include<iostream>
using namespace std;
bool ispowerofto(int n){
	if(n==1) return true;
	if(n%2!=0 ||n==0 ){ return false; }
	
	return ispowerofto(n/2);
}
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
   if( ispowerofto(n)){
	cout<<"yes";
   }
   else cout<<"no";
}