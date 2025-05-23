#ifndef SPELL_H
#define SPELL_H

#include <QObject>
#include "ISpell.h"

class Spell : public ISpell {

    public:

        Spell();

        virtual QString getSpellName() override;

        ~Spell(){};
    
    private:
        
        
};



#endif // SPELL_H
