#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "Polish");
	
	int opcja_mas, A_mas, B_mas, C_mas;
	double wynik_mas=1.00, p_mas=1.00, S_mas=1.00, r_mas=1.00, R_mas=1.00;
	cout<<"Umiem obliczyc pole tr�jk�ta oraz promie� ko�a wpisanego lub opisanego na tr�jk�cie"<<endl;
	cout<<"po podaniu d�ugo�ci bok�w tr�jk�ta"<<endl;
	cout<<"musisz wybra� opcje"<<endl;
	cout<<"*****************************************"<<endl;
	cout<<"1-pole tr�jk�ta"<<endl;
	cout<<"2-promie� ko�a opisanego na tr�jk�cie"<<endl;
	cout<<"3-promie� ko�a wpisanego w tr�jk�cie"<<endl;
	cout<<"*****************************************"<<endl;
	cout<<"podaj opcje"<<endl;
	cin>>opcja_mas;
	if(opcja_mas==1){
		
	   cout<<"Podaj dlugo�� boku A w centymetrach"<<endl;
	   cin>>A_mas;
	   cout<<"Podaj dlugo�� boku B w centymetrach"<<endl;
	   cin>>B_mas;
	   cout<<"Podaj dlugo�� boku C w centymetrach"<<endl;
	   cin>>C_mas;
	 if((A_mas>B_mas+C_mas)||(B_mas>A_mas+C_mas)||(C_mas>A_mas+B_mas){
	   	cout<<"boki nie tworz� tr�jk�ta"<<endl; 
	   }
     if((A_mas<B_mas+C_mas)||(B_mas<A_mas+C_mas)||(C_mas<A_mas+B_mas)){
	     cout<<"boki tworz� tr�jk�ta"<<endl;
	     cout<<"wczytane dane"<<endl;
	     cout<<"A="<<A_mas<<endl;
	     cout<<"B="<<B_mas<<endl;
	     cout<<"C="<<C_mas<<endl;
	     p_mas=(A_mas+B_mas+C_mas)/2;
	    cout<<"Wynik"<<endl;
	    cout<<"S="<<setprecision(2)<<fixed<<sqrt(p_mas*(p_mas-A_mas)*(p_mas-B_mas)*(p_mas-C_mas))<<"cm^2"<<endl;
	     
	   }
	}
	if(opcja_mas==2){
		 cout<<"Podaj dlugo�� boku A w centymetrach"<<endl;
	   cin>>A_mas;
	   cout<<"Podaj dlugo�� boku B w centymetrach"<<endl;
	   cin>>B_mas;
	   cout<<"Podaj dlugo�� boku C w centymetrach"<<endl;
	   cin>>C_mas;
	 if((A_mas>B_mas+C_mas)||(B_mas>A_mas+C_mas)||(C_mas>A_mas+B_mas)){
	   	cout<<"boki nie tworz� tr�jk�ta"<<endl; 
	   }
     if((A_mas<B_mas+C_mas)||(B_mas<A_mas+C_mas)||(C_mas<A_mas+B_mas)){
	     cout<<"boki tworz� tr�jk�ta"<<endl;
	     cout<<"wczytane dane"<<endl;
	     cout<<"A="<<A_mas<<endl;
	     cout<<"B="<<B_mas<<endl;
	     cout<<"C="<<C_mas<<endl;
	}
	return 0;
}
