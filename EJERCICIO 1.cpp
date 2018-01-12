#include<iostream>
using namespace std;
int recibir(char frase[],int v[]);
int main()
{
	char frase[50];
	int v[15]={0};
	cout<<"Dame una frase:";
	cin.getline(frase,50,'\n');
	recibir(frase,v);
	for(int i=0;i<15;i++)
	{
		cout<<v[i]<<endl;
	}
}
int recibir(char frase[],int v[])
{
	int x=0;
	for(int i=0;frase[i];i++)
	{
		x+=1;
		if(frase[i]==32)
		{
			x-=2;
			v[x]+=1;
			x=0;	
		}
		
		
	}
	x-=1;
	v[x]+=1;
	x=0;
	
	
}
