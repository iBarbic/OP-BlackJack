#include "deck.h"
#include <algorithm>
#include <time.h>
#include <chrono>

Deck::Deck(int n){
    _deck.reserve(n);
}
void Deck::add(Card& c){
    _deck.push_back(c);
}
vector<Card> Deck::get_deck(){
    return _deck;
}

Card Deck::pull(){
    Card card = _deck.back();
	_deck.pop_back();
    //cout<<c<<endl;
    return card;
}

void Deck::print_deck(){
    vector<Card> :: iterator it;
    for(it=_deck.begin();it!=_deck.end();++it){
        cout<<*it<<endl;
    }
}
void Deck::shuffle()
{
	for (int i = _deck.size() - 1; i > 0; --i) {
		int j = rand() % (i + 1);
		Card temp = _deck[i];
		_deck[i] = _deck[j];
		_deck[j] = temp;
	}

}
void Deck::fillDeck()
{
    string arr[4]={"pik","tref","srce","karo"};
    for(int i=0;i<4;i++){
        for(int j=1;j<14;j++){
            Card c(j,arr[i]);
            add(c);
        }

   }
}
void Deck::prepareDeck()
{
	fillDeck();
	shuffle();
}











