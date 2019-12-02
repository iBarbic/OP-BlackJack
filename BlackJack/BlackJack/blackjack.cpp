#include "blackjack.h"

BlackJack::BlackJack(){}
void BlackJack::start_game(){
    float x;
    Deck d(52);
    int izbornik=666;
    d.prepareDeck();
    Player me;
    Player pc;
    while(true){
        me.reset();
        pc.reset();
        cout<<"New game= 2"<<endl;
        cout<<"Exit= 55"<<endl;
        cin>>izbornik;
        if(izbornik==55){
            break;
        }
        x=me.bet();
        if(x==0){
            break;
        }
        d.shuffle();
        cout<<"*****************************"<<endl;
        izbornik=666;
        while(true){
            if(me.get_number_of_cards()<2){
                for (int i=0;i<2;i++){
                    Card c=d.pull();
                    Card k=d.pull();
                    me.hit(c);
                    pc.hit(k);
                    me.check();
                    pc.check();
            }
        }
        cout<<"Broj bodova Player: ";
        me.print_hand();
        cout<<"/////////////////////"<<endl<<endl;
        cout<<"Broj bodova Dealer: ";
        pc.print_first();
        cout<<"************************"<<endl;
        cout<<"Hit: 1"<<endl<<"Hold: 0"<<endl;
        cin>>izbornik;
        if (izbornik==1){
            Card ca=d.pull();
            me.hit(ca);
            me.check();
            cout<<"/////////////////////"<<endl<<endl;
            cout<<"Broj bodova Player: ";
            me.print_hand();
            cout<<"/////////////////////"<<endl<<endl;
            cout<<"Broj bodova Dealer: ";
            pc.print_first();
            cout<<"************************"<<endl;
        }
        if(me.get_score()>21){
            cout<<"Lose"<<endl;
            break;
        }
        while((pc.get_score()<me.get_score())&& izbornik==0){
            cout<<"!!!!"<<endl;
            Card c=d.pull();
            pc.hit(c);
            cout<<"Broj bodova Player: ";
            me.print_hand();
            cout<<"/////////////////////"<<endl<<endl;
            cout<<"Broj bodova Dealer: ";
            pc.print_hand();
            pc.check();
            cout<<"************************"<<endl;

        }
        if (pc.get_score()==me.get_score()){
            cout<<"Tie"<<endl;
            cout<<"Broj bodova Player: ";
            me.print_hand();
            cout<<"/////////////////////"<<endl<<endl;

            cout<<"Broj bodova Dealer: ";
            pc.print_hand();
            cout<<"************************"<<endl;
            me.win_bet(x/2);
            break;
        }
        if (pc.get_score()>21){
            cout<<"Win"<<endl;
            me.win_bet(x);
            break;
        }
        if((me.get_score()>pc.get_score())&& (me.get_score()<=21)&&izbornik==0){
            cout<<"Win"<<endl;
            me.win_bet(x);
            break;
        }
        if((me.get_score()<pc.get_score())&& pc.get_score()<=21 && izbornik==0){
            cout<<"Lose"<<endl;
            break;
        }
        }


    }
}
