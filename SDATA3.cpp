#include <iostream>
using namespace std;

int main()
{
	string nama;
	cout<<"mengilangkan satu huruf tiap perulangan"<<endl;
	cout<<"________________________________________"<<endl;
	cout<<"masukkan kata :";
	cin>>nama;
		int i=nama.length()-1;
	for (i;i>=0;i--){
		for(int a=0;a<=i;a++){
			cout<<nama[a];
		}
		cout<<endl;
	}
	return 0;
	

}
