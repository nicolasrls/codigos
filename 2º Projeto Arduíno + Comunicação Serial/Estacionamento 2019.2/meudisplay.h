#ifndef MEUDISPLAY_H
#define MEUDISPLAY_H
#include "LiquidCrystal.h"

class Meudisplay : public LiquidCrystal
{

public:

    Meudisplay(int rs, int enable, int D4, int D5, int D6, int D7) : LiquidCrystal (rs, enable, D4, D5, D6, D7){};
    void animation(String a, int interv);
};

#endif // MEUDISPLAY_H
