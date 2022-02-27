bool prim(int n);
/*
Verifica daca n este prim sau nu.
Returneaza true ~ n este prim
           false ~ n nu este prim 
*/

int primul_numar_prim(int &n);
/*
    Returneaza primul numar prim <= n.
*/

int numar_min_cifre(int n);
/*
    Formeaza din cifrele lui n cel mai mic numar posibil si il returneaza.
*/

int numar_max_cifre(int n);
/*
    Formeaza din cifrele lui n cel mai mare numar posibil si il returneaza.
*/

int cel_mai_mare_numar_prim_mai_mic_ca_n(int n);
/*
    Returneaza primul numar prim < n.
    In cazul in care nu exista o sa returneze valoarea -1.
*/

int numere_prime_gemene(int n);
/*
    Returneaza primul numar prim > n.
*/

int cel_mai_mic_nr_fibo(int n);
/*
    Calucleaza si retuneaza cel mai mic numar < n din sirul lui Fibonacci.
*/

int produsul_facotorilor_prop(int n);
/*
    Calculeaza produsul factorilor prorpii lui n(adica produsul divizorilor lui n diferiti de 1 si de el insusi).
    In cazul in care numarul nu are factori proprii(adica este numar prim si singurii lui divizori sunt 1 si el isusi) se va returna -1.
*/

int produs_a_la_russe(int a,int b);
/*
    Calculeaza produsul a la russe dintre doua numere apoi il returneaza(dintre a si b in cazul de fata).
*/