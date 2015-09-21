#include <iostream>
#include <stack>
#include <queue>
#include <stdio.h>

using namespace std;
typedef stack<int> SI;
SI towerA, towerB, towerC;
SI *alamatA, *alamatB, *alamatC;
int param;
void pindah (SI&towerA, SI&towerC);

void rekarsif(int n, SI &towerA, SI &towerB, SI &towerC){
	if (n==1) pindah(towerA,towerC);
	else{
		rekarsif(n-1,towerA,towerC,towerB);
		pindah(towerA,towerC);
		rekarsif(n-1,towerB,towerA,towerC);
	}
}

void pindah(SI &towerA, SI &towerC){

	printf("Pindah %d ke ",towerA.top());
	if (&towerC == alamatA) cout<<"A";
	else if (&towerC == alamatB) cout<<"B";
	else if (&towerC == alamatC) cout<<"C";
	towerC.push(towerA.top());
	towerA.pop();
	cout<<endl;
	param++;

}

int main(){
	int n;
	param=0;
	scanf("%d",&n);
	for (int a=n;0<a;--a){
		towerA.push(a);
	}
	alamatA = &towerA;
	alamatB = &towerB;
	alamatC = &towerC;

	rekarsif(n,towerA,towerB,towerC);

}//end
