#ifndef ISPELL_H
#define ISPELL_H

#include <QObject>
#include <QString>
#include "SpellCost.h"

class ISpell {

public:
    
    Q_OBJECT

    enum TypeSpell : quint8
    {
        Spell, // Активная способность с ощутимым эффектом, можно назвать Incantation, чтобы не перемешивалось слово spell
        Ability, // Способность
        Passiv
    };

    virtual QString getSpellName() = 0 ;
    virtual QString setSpellName(QString type) = 0 ;

    virtual quint8 getSpellLevel() = 0 ;
    virtual quint8 setSpellLevel() = 0 ;

    virtual QString getSpellDescription() = 0;
    virtual QString setSpellDescription(QString description) = 0;

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

protected:
    TypeSpell typeSpell;
    QString spellType;
    QString spellName;
    QString spellDescription;
    quint8 spellLvl;
    quint8 rangeCast;  // Дистанция в метрах или строкой?
    quint8 durationSpell;

};

#endif // ISPELL_H
