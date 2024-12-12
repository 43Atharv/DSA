#include<iostream>
using namespace std;

int main (){
	
	//decalre array
	int number[15];
	
	//accessing an array
	cout<<"value at 1 index is   "<<number[1]<<endl;
	
	cout<<endl<<"everything is good and Fine"<<endl;
	
	int second[3] = {5,7,11};
	cout<<"value on 2nd index is  "<<second[2]<<endl;
	
	int third[10]  = {1};
	int n = 10;
	for(int i=0;i<n;i++){
		cout<<third[i]<<endl;
	}
	
	
	int fourth[15] = {0};
	int m = 15;
	for(int i=0;i<m;i++){
		cout<<fourth[1]<<endl;
	}
	
	char fifth[10] = {'a','b','c','d','e'};
	cout<<fifth[3]<<endl;
	return 0;
}
