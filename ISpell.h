#ifndef ISPELL_H
#define ISPELL_H

#include <QObject>
#include <QString>
#include "SpellCost.h"

class ISpell {

public:
    
    Q_OBJECT

    enum TypeSpell : quint
    {
        Passiv,
        Spell, // Активная способность с ощутимым эффектом, можно назвать Incantation, чтобы не перемешивалось слово spell
        Ability // Способность
    }

    virtual QString getSpellName(QString type) = 0 ;
    virtual QString setSpellName(QString type) = 0 ;

    virtual quint8 getSpellLevel() = 0 ;
    virtual quint8 setSpellLevel() = 0 ;

    virtual QString getSpellDescription() = 0; // а может char бахнуть?
    virtual QString setSpellDescription() = 0;

    virtual quint8 getSpellRangeCast() = 0;
    virtual quint8 setSpellRangeCast() = 0;

    virtual quint8 getSpellDuration() = 0;
    virtual quint8 setSpellDuration() = 0;

    /**
     * @brief getSpellCost - SpellCost
     * @return
     */
    virtual SpellCost getSpellCost();

    virtual quint8 getSpellAttributes() = 0;

private:
    TypeSpell typeSpell;
    QString spellType;
};

#endif // ISPELL_H
