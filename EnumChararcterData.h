#ifndef ENUMCHARARCTERDATA_H
#define ENUMCHARARCTERDATA_H

#include <QString>

class EnumCharactarData {

    public:

    enum Value : quint8 {

        AgressiveKindness,
        Intelligence,

        //Уверенность
        Confidence,

        //Бесстрашие
        Fearlessness,
        SenseOfHumour,
        Emotionality,
        CommunicationSkills,

        //Ответственность
        Responsibility,

        //Устрашение
        Terrorisation,

        //Внимательность
        Attentiveness,
        Learnability,
        Luckiness,
        HealthPoint,
        ManaPoint,
        Initiative,
        Atack,
        EnergyPoint,
        Counterattack,
        Steps,
        Defense,
        PermanentArmor,
        TempArmor,
        ActionPoints,
        Dodge

    };

    EnumCharactarData() = default;


    EnumCharactarData(const EnumCharactarData &copy) : value(copy.value) {
        //No-OP
    }

    constexpr EnumCharactarData(Value type) : value(type) {
        //No-OP
    }

    constexpr EnumCharactarData(quint8 type) : value((Value)type) {
        //No-OP
    }

    constexpr operator Value() const {
        return value;
    }


    private:

    Value value;

};

#endif // ENUMCHARARCTERDATA_H
