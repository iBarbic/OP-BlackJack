#include <iostream>
#include "card.h"
#include "deck.h"
#include "player.h"
#include "blackjack.h"
#include <algorithm>
#include <random>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    BlackJack b;
    b.start_game();
}
