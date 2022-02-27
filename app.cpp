#include <iostream>
#include "tests.cpp"
using namespace std;

void print_menu()
{
	cout<<"1.	Fiind dat un numar natural n, sa se determine numerele naturale prime p1 si p2 astfel incat n = p1 + p2."<<endl;
	cout<<"2.	Fiind dat un numar natural n, sa se determine cel mai mic numar natural m format din aceleasi cifre cu n. De ex. pentru n=3658, m=3568."<<endl;
	cout<<"3.	Fiind dat un numar natural n, sa se determinecel mai mare numar natural m format din aceleasi cifre cu n. De ex. pentru n=3658, m=8653."<<endl;
	cout<<"4.	Fiind dat un numar natural n, sa se determine cel mai mare numar prim mai mic decat n. Daca nu exista un astfel de numar, se va afisa un mesaj."<<endl;
	cout<<"5.	Fiind dat un numar natural n, sa se determine primele doua numere prime gemene mai mari decat n. Doua numere prime p si q sunt gemene daca q - p = 2."<<endl;
	cout<<"6.	Fiind dat un numar natural n, sa se determine cel mai mic numar m din sirul Fibonacci (definiti prin f[0]=f[1]=1, f[n]=f[n1]+f[n-2], pentru n>2) mai mare decat n."<<endl;
	cout<<"7.	Fiind dat un numar natural n, sa se determine produsul factorilor proprii ai lui n."<<endl;
	cout<<"p.	Problema bonus1: Inmultirea a la russe a doua numere naturale."<<endl;
}

int main()
{
	run_all_tests();
	
	char optiune;
	print_menu();
	cout<<"Alege optiunea:";
	cin>>optiune;
	switch (optiune)
	{
	case '1':
		cout<<"Introduceti n:";
		int n,copie,p1,p2;
		cin>>n;
	    copie = n;
		while(prim(n-primul_numar_prim(copie))==false && copie >= 2)    		
		{
        copie--;
    	}
		p1 = copie;
		p2 = n-primul_numar_prim(copie);
		cout<<p1<<" "<<p2;
		break;

	case '2':
		cout<<"Introduceti n:";
		int m,rezultat;
		cin>>m;
		rezultat = numar_min_cifre(m);
		cout<<rezultat;
		break;

	case '3':
		cout<<"Introduceti n:";
		int p,rezultat1;
		cin>>p;
		rezultat1 = numar_max_cifre(p);
		cout<<rezultat1;
		break;

	case '4':
		cout<<"Introduceti n:";
		int rezultat2,a;
		cin>>a;
		rezultat2 = cel_mai_mare_numar_prim_mai_mic_ca_n(a);
		if(rezultat2==-1) cout<<"Nu exista numar prim mai mic decat n-ul selectat("<<a<<")";
		else cout<<rezultat2;
		break;

	case '5':
		int b,nr1,nr2;
		cout<<"Introduceti n:";
		cin>>b;
		nr1 = numere_prime_gemene(b);
		nr2 = numere_prime_gemene(nr1);
		while(abs(nr2-nr1)!=2)
		{
		nr1 = numere_prime_gemene(nr2);
		if(abs(nr2-nr1)!=2){
			nr2 = numere_prime_gemene(nr1);
			}
		}
		cout<<nr1<<" "<<nr2;
		break;

	case '6':
		int c,fibo_mic_c;
		cout<<"Introduceti n:";
		cin>>c;
		fibo_mic_c = cel_mai_mic_nr_fibo(c);
		cout<<fibo_mic_c;
		break;

	case '7':
		int d,produs_fact_prop;
		cout<<"Introduceti n:";
		cin>>d;
		produs_fact_prop = produsul_facotorilor_prop(d);
		if(produs_fact_prop == -1) cout<<"Numarul introdus nu are factori proprii(factorii proprii sunt acei divizoiri ai numarului diferiti de 1 si de el insusi),deci numarul e prim.";
		else cout<< produs_fact_prop; 
		break;

	case 'p':
		int e1,e2,produs;
		cout<<"Introduceti primul element:";
		cin>>e1;
		cout<<"Introduceti al doilea element:";
		cin>>e2;
		produs = produs_a_la_russe(e1,e2);
		cout<<produs;
		break;

		
	default:
		break;
	}
	
}