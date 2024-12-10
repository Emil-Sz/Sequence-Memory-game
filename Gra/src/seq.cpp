#include "seq.h"

using namespace std;

Sequence::Sequence(){}

Sequence::~Sequence(){}

// dodanie do sekwencji nowej liczby losowej
void Sequence::addElement(){
        int losowaLiczba = std::rand() % (rozmiar_kwadratu*rozmiar_kwadratu);
        seq.push_back(losowaLiczba);
}

// sprawdzenie poprawno�ci dw�ch sekwencji
int Sequence::checkSequence(const vector<int>& userSeq){
    // Sprawd�, czy liczba element�w jest taka sama w obu setach
    if (seq.size() != userSeq.size()) {
        return 0;
    }

    // Sprawd�, czy sety s� identyczne
    if (seq != userSeq) {
        return 1;
    }

    // Je�li wszystko jest w porz�dku
    return 2;
}

int Sequence::get_rozmiar_kwadratu(){
    return rozmiar_kwadratu;
}

void Sequence::set_rozmiar_kwadratu(int rozmiar){
    rozmiar_kwadratu = rozmiar;
}

int Sequence::get_liczba_zyc(){
    return liczba_zyc;
}

void Sequence::set_liczba_zyc(int liczba){
    liczba_zyc = liczba;
}
