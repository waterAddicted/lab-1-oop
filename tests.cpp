#include <assert.h>
#include "problem.cpp"
#include "tests.h"

void test_prim()
{
    assert(prim(2)==true);
    assert(prim(3)==true);
    assert(prim(9)==false);
    assert(prim(0)==false);
    assert(prim(1)==false);
    assert(prim(10)==false);
    assert(prim(13)==true);
    assert(prim(-3)==false);
    assert(prim(23)==true);
}

void test_primul_numar_prim()
{
    int n;
    n = 12;
    assert(primul_numar_prim(n)==11);
    n = 6;
    assert(primul_numar_prim(n)==5);
    n = 4;
    assert(primul_numar_prim(n)==3);
    n = 2;
    assert(primul_numar_prim(n)==2);
    n = 15;
    assert(primul_numar_prim(n)==13);
}

void test_numar_min_cifre()
{
    assert(numar_min_cifre(233)==233);
    assert(numar_min_cifre(78300134)==10033478);
    assert(numar_min_cifre(3658)==3568);
    assert(numar_min_cifre(321)==123);
    assert(numar_min_cifre(930124)==102349);
    assert(numar_min_cifre(3)==3);
}

void test_numar_max_cifre()
{
    assert(numar_max_cifre(234)==432);
    assert(numar_max_cifre(80992)==99820);
    assert(numar_max_cifre(3658)==8653);
    assert(numar_max_cifre(72732)==77322);
    assert(numar_max_cifre(1000)==1000);
    assert(numar_max_cifre(3)==3);
}

void test_cel_mai_mare_numar_prim_mai_mic_ca_n()
{
    assert(cel_mai_mare_numar_prim_mai_mic_ca_n(13)==11);
    assert(cel_mai_mare_numar_prim_mai_mic_ca_n(7)==5);
    assert(cel_mai_mare_numar_prim_mai_mic_ca_n(5)==3);
    assert(cel_mai_mare_numar_prim_mai_mic_ca_n(3)==2);
    assert(cel_mai_mare_numar_prim_mai_mic_ca_n(2)==-1);
}

void test_numere_prime_gemene()
{
    assert(numere_prime_gemene(12)==13);
    assert(numere_prime_gemene(7)==11);
    assert(numere_prime_gemene(13)==17);
    assert(numere_prime_gemene(23)==29);
}

void test_cel_mai_mic_numar_fibo()
{
    assert(cel_mai_mic_nr_fibo(15)==13);
    assert(cel_mai_mic_nr_fibo(10)==8);
    assert(cel_mai_mic_nr_fibo(16)==13);
    assert(cel_mai_mic_nr_fibo(22)==21);
    assert(cel_mai_mic_nr_fibo(35)==34);
    assert(cel_mai_mic_nr_fibo(45)==34);
    assert(cel_mai_mic_nr_fibo(57)==55);
    assert(cel_mai_mic_nr_fibo(1000)==987);
}

void test_produsul_facotorilor_prop()
{
    assert(produsul_facotorilor_prop(6)==6);
    assert(produsul_facotorilor_prop(10)==10);
    assert(produsul_facotorilor_prop(7)==-1);
    assert(produsul_facotorilor_prop(7)==-1);
    assert(produsul_facotorilor_prop(12)==144);
    assert(produsul_facotorilor_prop(16)==64);

}

void test_produs_a_la_russe()
{
    assert(produs_a_la_russe(18,12)==216);
    assert(produs_a_la_russe(12,18)==216);
    
}

void run_all_tests()
{
    test_prim();
    test_primul_numar_prim();
    test_numar_min_cifre();
    test_numar_max_cifre();
    test_cel_mai_mare_numar_prim_mai_mic_ca_n();
    test_numere_prime_gemene();
    test_cel_mai_mic_numar_fibo();
    test_produsul_facotorilor_prop();
    test_produs_a_la_russe();
}

