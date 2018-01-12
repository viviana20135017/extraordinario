#include<iostream>
using namespace std;
int main(){
	int v[4];
	cout<<"Dame un numero de 5 digitos:";
	cin>>v[0]>>v[1]>>v[2]>>v[3]>>v[4];
	for(int i=0;i<=4;i++)
	{
		if(v[i]==0)
			cout<<"CERO,";
		else if(v[i]==1)
			cout<<"UNO,";
		else if(v[i]==2)
			cout<<"DOS,";
		else if(v[i]==3)
			cout<<"TRES,";
		else if(v[i]==4)
			cout<<"CUATRO,";
		else if(v[i]==5)
			cout<<"CINCO,";
		else if(v[i]==6)
			cout<<"SEIS,";
		else if(v[i]==7)
			cout<<"SIETE,";
		else if(v[i]==8)
			cout<<"OCHO,";
		else if(v[i]==9)
			cout<<"NUEVE,";
	}
	
	
	

}

