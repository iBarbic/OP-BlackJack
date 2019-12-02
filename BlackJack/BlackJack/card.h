#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>
using namespace std;

class Card
{
   private:
       int _number;
       string _type;
       int _value;
    public:
        Card(int number,string type);
        int get_number();
        string get_type();
        int get_value();
        void change();
        friend std::ostream & operator<<(std::ostream &os,Card& c){
            os<<c.get_number()<<" "<<c.get_type()<<endl;
            return os;
        }



};

#endif // CARD_H
