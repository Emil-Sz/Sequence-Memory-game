#ifndef SEQ_H
#define SEQ_H


#include <iostream>
#include <vector>

using namespace std;

class Sequence
{
public:
    // sekwencja generowana autoamtycznie
    vector<int> seq;
    int rozmiar_kwadratu=3;
    int liczba_zyc=1;
public:
    Sequence();
    ~Sequence();
    // dodaj element do sekwencji
    void addElement();
    int get_rozmiar_kwadratu();
    int get_liczba_zyc();
    void set_rozmiar_kwadratu(int rozmiar);
    void set_liczba_zyc(int liczba);
    // sprawdz poprawnoœæ sekwencji podanej przez usera
    int checkSequence(const vector<int>& userSeq);
};

#endif // SEQ_H
