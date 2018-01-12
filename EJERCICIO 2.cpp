# include <iostream>
using namespace  std;
int  numeros(int num[], int i, int j);
int  main ()
{
	
	int num[ 100 ],tam;
	cout<<"Dame el tamaño:";
	cin>>tam;
	for(int f=0;f<tam;f++){
		cout<<"Dame el numero:";
		cin>>num[f];	
	}
	if (numeros(num,0,tam-1)==1)
		cout << " SI ES SIMETRICO " ;
	else
		cout << "NO ES SIMETRICO" ;
}
int  numeros(int num[], int i, int j)
{
	if (i<j)
	{
		if (num[i] == '  ' )
			return  numeros(num,++i,j);
		if (num[j] == '  ' )
			return numeros(num,i,-j);
		if (num[i]!=num[j])
			return 0;
		else
		{
			i++;
			j--;
			return numeros(num,i,j);
		}
	}
	else
		return  1;
}
