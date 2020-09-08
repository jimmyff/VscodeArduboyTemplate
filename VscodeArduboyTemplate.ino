#include <Arduboy2.h>

Arduboy2 arduboy;

void setup()
{

    arduboy.begin();
    arduboy.setFrameRate(60);
}

void loop()
{
    if (!(arduboy.nextFrame()))
        return;

    arduboy.clear();
    arduboy.setCursor(4, 9);
    arduboy.print(F("Template working :)"));
    arduboy.display();
}