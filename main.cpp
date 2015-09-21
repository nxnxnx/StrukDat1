#include <iostream>
#include <stack>
#include <queue>
#include <stdio.h>

using namespace std;
typedef stack<int> SI;
SI towerA, towerB, towerC;
SI *alamatA, *alamatB, *alamatC;

void rekarsif(int n, SI &towerA, SI &towerB, SI &towerC){
	//if (n==1 && 

}

int main(){
	int n;
	scanf("%d",&n);
	for (int a=n;0<a;--a){
		towerA.push(a);
	}

	alamatA = &towerA;
	alamatB = &towerB;
	alamatC = &towerC;
}//end
