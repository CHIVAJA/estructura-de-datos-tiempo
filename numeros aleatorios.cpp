#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<ctime>
using namespace std;
int main(){
	int num,n,temp;
	unsigned t0,t1;
	srand(time(NULL));
	cout<<"ingrese la dimension: ";
	cin>>num;
	int lista[num];
	for(int x=1;x<=num;x++){
		//n=1+rand()%(1000-1);
		n=rand();
		lista[x]=n;
		//cout<<lista[x]<<" ";
	}
	t0=clock();
	//burbuja
	for( int i=1;i<num;i++){
		for( int j=0;j<num-1;j++){
			if(lista[j]>lista[j+1]){
				temp=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temp;
			}
		}
	}
	t1=clock();
	double time=(double (t1-t0)/CLOCKS_PER_SEC);
	cout<<"tiempo: "<<time<<endl;
/*	for(int k=1;k<num;k++){
		cout<<lista[k];
	}
*/	
	return 0;
}