#include <iostream>
using namespace std;

int main() {
	int i,N,jumlah=0,r;
	i=1;
	
	cout<<"masukan banyak nilai : ";
	cin>> N ;
	
	/*kk*/
	cout<<"jumlah : ";
	
	while(i< N){
	
	cout<<i*7<<"+";
	jumlah=jumlah+(i*7);
	i++;
	
}
	jumlah=jumlah+(i*7);
	cout<<i*7<<" ";
	cout<<"="<<jumlah<<endl;
	r=jumlah/N;
	cout<<"rerata : "<<jumlah<<"/"<<N<<" = "<<r;
}
