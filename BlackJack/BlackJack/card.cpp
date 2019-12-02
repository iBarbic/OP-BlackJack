#include "card.h"

Card::Card(int number,string type){
    _number=number;
    _type=type;

    if(number>=10){
        _value=10;
    }
    else if(number==1)
        _value=11;
    else
        _value=number;
}
int Card::get_number(){
    return _number;
}
string Card::get_type(){
    return _type;
}
int Card::get_value(){
    return _value;
}
void Card::change(){
    _value=1;
}

