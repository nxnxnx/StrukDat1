#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;
typedef stack<int> SI;
SI towerA, towerB, towerC;
SI *alamatA, *alamatB, *alamatC;
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
}

int main(){
	int n;
    while(true){
        cout << "Masukan Input" << endl;
        cin >> n;
        if(cin.fail() || n < 1){
            cout << "Input Salah, Ulangi" << endl << endl;
            cin.clear();
            cin.ignore(99999999, '\n');
        } else { break;}
    }

	for (int a=n;0<a;--a){
		towerA.push(a);
	}
	alamatA = &towerA;
	alamatB = &towerB;
	alamatC = &towerC;

	rekarsif(n,towerA,towerB,towerC);

}//end
