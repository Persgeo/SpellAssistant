#ifndef SPELLMANAGER_H
#define SPELLMANAGER_H

#include <QObject>
#include "ISpell.h"
#include "SpellCost.h"

class SpellManager
{
public:
    SpellManager();


    void addSpell();

    ~SpellManager(){};
};

#endif // SPELLMANAGER_H
