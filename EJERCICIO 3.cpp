# include <iostream>
using namespace  std;
int buscar(int v[],int matriz[][2],int ren,int tam);
int main(){
	int v[]={1,2,3,4,5},ren,tam;
	cout<<"Dame los renglones:";
	cin>>tam;
	int matriz[tam][2];
	for(int i=0;i<tam;i++){
		cout<<"Dame el numero:";
		cin>>matriz[i][0];
	}
	buscar(v,matriz,tam,5);
	for(int i=0;i<tam;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}
int buscar(int v[],int matriz[][2],int ren,int tam)
{
	int esta;
	for (int i=0;i<ren;i++){
		esta=0;
		for(int j=0;j<tam;j++){
			if(v[j]==matriz[i][0])
				{
				matriz[i][1]=j;
				esta=1;
			}
		}
		if(esta!=1)
			matriz[i][1]=-1;	
	}
	
}

