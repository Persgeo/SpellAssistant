#ifndef ISPELL_H
#define ISPELL_H

#include <QObject>
#include <QString>
#include "SpellCost.h"

class ISpell {

    Q_OBJECT

    virtual QString getSpellName() = 0 ;

    virtual quint8 getSpellLevel() = 0 ;

    virtual QString getSpellDescription() = 0;

    virtual quint8 getSpellRangeCast() = 0;

    virtual quint8 getSpellDuration() = 0;

    /**
     * @brief getSpellCost - SpellCost
     * @return
     */
    virtual SpellCost getSpellCost();


    virtual quint8 getSpellAttributes() = 0;
};

#endif // ISPELL_H
