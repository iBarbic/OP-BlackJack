#include "player.h"

void Player::hit(Card& c){
        hand.push_back(c);
        number_of_cards++;
}
int Player::get_score(){
    score=0;
    for (int i=0;i<number_of_cards;i++){
        score=score+hand[i].get_value();
    }
    return score;
}
int Player:: get_number_of_cards(){
        return number_of_cards;
}
void Player::print_hand(){
    cout<<get_score()<<endl;
    vector<Card> :: iterator it;
    for(it=hand.begin();it!=hand.end();++it){
        cout<<*it<<endl;
    }
}
void Player::check(){

    vector<Card> :: iterator it;
    int i;
    for(i=0;i<number_of_cards;++i){
            if(hand[i].get_number()==1 && hand[i].get_value()==11 && get_score()>21){
                hand[i].change();
                break;
            }
    }
}

void Player::reset(){
    hand.clear();
    number_of_cards=0;
    score=0;
}
void Player::print_first(){
    cout<<get_score_first()<<endl;
    cout<<hand[0]<<endl;
}
int Player::get_score_first(){
    score_first=hand[0].get_value();
    return score_first;
}
float Player::get_money(){
    return money;
}
float Player::bet(){
    float x;
    cout<<"Vase trenutno stanje: "<<get_money()<<endl;
    if(money==0){
        cout<<"Nemate vise novaca"<<endl;
        return 0;
    }
    cout<<"Koliko zelite uloziti"<<endl;
    cin>>x;
    if(x>money){
        x=money;
        money=0;
        return x;
    }
    money-=x;
    return x;
}
void Player::win_bet(float x){
    money=money + 2*x;

}

