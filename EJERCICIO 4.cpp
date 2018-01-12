#include<iostream>
using namespace std;
int buscaPalabrasXTam(int num,char palabra[]);
int main (){
	char palabra[50];
	int num;
	cout<<"Dame una oracion:";
	cin.getline(palabra,50,'\n');
	cout<<"dame un numero:";
	cin>>num;
	 cout<<buscaPalabrasXTam(num,palabra);
}
int buscaPalabrasXTam(int num,char palabra[])
{
	int cont=0,x=0;
	for(int i=0;palabra[i];i++)
	{
		x+=1;
		if(palabra[i]==32)
		{
			x-=1;
			if(x==num)
			{
				cont++;
			}
			x=0;
			
		}
		
	}
	
	if(x==num)
			{
				cont++;
			}
	
	return cont;
}
