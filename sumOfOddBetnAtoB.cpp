#include<iostream>
using namespace std;
int sumupto(int a,int b){
	if(a>b) return 0;
	if(a%2==0) a++;

	return a+sumupto(a+2,b);
}
int main(){
    cout<<sumupto(1,10);
}