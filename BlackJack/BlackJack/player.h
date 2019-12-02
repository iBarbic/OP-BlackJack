#ifndef PLAYER_H
#define PLAYER_H
#include "card.h"
#include <vector>
using namespace std;

class Player
{
   private:
        vector<Card> hand;
        int number_of_cards=0;
        int score;
        float money=5000;
        int score_first;
   public:
        void hit(Card& c);
        int get_score();
        int get_number_of_cards();
        void print_hand();
        void check();
        void reset();
        void place_bet();
        void print_first();
        int get_score_first();
        float bet();
        float get_money();
        void win_bet(float x);


};

#endif // PLAYER_H
