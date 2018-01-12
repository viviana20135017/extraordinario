#include<iostream>
using namespace std;
int recibir(char cad1[],char cad2[]);
int main()
{
	char cad1[10],cad2[10];
	cout<<"Dame un cadena:";
	cin.getline(cad1,10,'\n');
	cout<<"Dame un cadena:";
	cin.getline(cad2,10,'\n');	
	recibir(cad1,cad2);
}
int recibir(char cad1[],char cad2[])
{
	char cad3[30];
	int i;
	for(i=0;cad1[i];i++)
	{
		cad3[i]=cad1[i];
	}
	cad3[i]=32;
	i+=1;
	for(int j=0;cad2[j];j++)
	{
		cad3[i+j]=cad2[j];
	}
	cout<<cad3;
	
	
}
