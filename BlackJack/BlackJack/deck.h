#ifndef DECK_H
#define DECK_H
#include <vector>
#include "card.h"
#include <iostream>
#include <algorithm>
#include <random>
using namespace std;
class Deck
{
    private:
        vector<Card> _deck;

    public:
        Deck(int n);
        void add(Card& c);
        vector<Card> get_deck();
        Card pull();
        void print_deck();
        void shuffle();
        void fillDeck();
        void prepareDeck();



};

#endif // DECK_H
