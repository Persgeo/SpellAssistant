#ifndef CONTROLLERSPELLCASTER_H
#define CONTROLLERSPELLCASTER_H

#include <QObject>


class ControllerSpellCaster : public QObject {

    Q_OBJECT

    public:
        ControllerSpellCaster();

        /**
         * @brief calculateValue - посчитать вклад
         */
        void calculateValue();

        /**
         * @brief calculateCost - посчитать затраты
         */
        void calculateCost();

        /**
         * @brief setSpellInfo - установить информацию о спелле
         */
        void setSpellInfo();




};

#endif // CONTROLLERSPELLCASTER_H
