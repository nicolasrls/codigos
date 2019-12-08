#include "meudisplay.h"


void Meudisplay::animation(String a, int interv)
{
    clear();
    setCursor(0,0);
    print(a);
    for(int i = 0; i < 16 - a.lenght(); i++){
        scrollDisplayLeft();
        delay(interv);
    }
    for(int j = 0; j < 16 - a.lenght(); i++){
        scrollDisplayRight();
        delay(interv);
    }
}
