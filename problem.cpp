#include <math.h>
#include "problem.h"
bool prim(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    int d=3;
    while(d*d<=n)
    {
        if(n%d==0) return false;
        d+=2;
    }
    return true;
}

int primul_numar_prim(int &n)
{
    while(prim(n) == false)
    {
        n--;
    }
    return n;
}

int numar_min_cifre(int n)
{
    int zero=0;
    int copie = n;
    while(copie)
    {
        if(copie%10==0) zero++;
        copie/=10;
    }
    
    int numar_ap_cifra;
    int rezultat = 0;

    for(int i=1;i<10;i++)
    {
        copie = n;
        numar_ap_cifra = 0;
        while(copie)
        {
            if(copie%10==i) numar_ap_cifra ++;
            copie/=10;
        }
        while(numar_ap_cifra)
        {
            rezultat=rezultat*10+i;
            while(zero)
            {
                rezultat*=10;
                zero--;
            }
            numar_ap_cifra--;
        }
    }
    return rezultat;
}

int numar_max_cifre(int n)
{
    
    int numar_ap_cifra,copie;
    int rezultat = 0;

    for(int i=9;i>=0;i--)
    {
        copie = n;
        numar_ap_cifra = 0;
        while(copie)
        {
            if(copie%10==i) numar_ap_cifra ++;
            copie/=10;
        }
        while(numar_ap_cifra)
        {
            rezultat=rezultat*10+i;
            numar_ap_cifra--;
        }
    }
    return rezultat;
}

int cel_mai_mare_numar_prim_mai_mic_ca_n(int n)
{
    n--;
    while(prim(n)==false&&n>=2)
    {
        n--;
    }
    if(n<2) return -1;
    else return n;
}

int numere_prime_gemene(int n)
{
    n++;
    while(prim(n)==false)
    {
        n++;
    }
    return n;
}

int cel_mai_mic_nr_fibo(int n)
{
    int m=1;
    int p=1;
    int r = m+p;
    while(r<n)
    {
        m=p;
        p=r;
        r= m+p;
    }
    return p;
}

int produsul_facotorilor_prop(int n)
{
    int produs = 1;
    for(int d=2;d<n;d++)
    {
        if(n%d==0) produs*=d;
    }
    if(produs == 1) return -1;
    return produs;
}

int produs_a_la_russe(int a,int b)
{
    int r=0;
    while(a)
    {
        if(a%2==1)
        {
            r = r + b;
        }
        a/=2;
        b*=2;
    }
    return r;
}