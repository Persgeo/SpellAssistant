#ifndef SPELL_H
#define SPELL_H

#include <QObject>
#include <QString>
#include "ISpell.h"

class Spell : public ISpell {

public:

    Spell();

    virtual QString getSpellName() override final {return m_name;};  // У меня тут warning "Нет переопределения"

    ~Spell(){};
    
private:
    QString m_name;
        
};



#endif // SPELL_H
