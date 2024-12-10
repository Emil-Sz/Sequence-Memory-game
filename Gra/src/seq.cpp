#include "seq.h"

using namespace std;

Sequence::Sequence(){}

Sequence::~Sequence(){}

// dodanie do sekwencji nowej liczby losowej
void Sequence::addElement(){
        int losowaLiczba = std::rand() % (rozmiar_kwadratu*rozmiar_kwadratu);
        seq.push_back(losowaLiczba);
}

// sprawdzenie poprawnoœci dwóch sekwencji
int Sequence::checkSequence(const vector<int>& userSeq){
    // SprawdŸ, czy liczba elementów jest taka sama w obu setach
    if (seq.size() != userSeq.size()) {
        return 0;
    }

    // SprawdŸ, czy sety s¹ identyczne
    if (seq != userSeq) {
        return 1;
    }

    // Jeœli wszystko jest w porz¹dku
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
