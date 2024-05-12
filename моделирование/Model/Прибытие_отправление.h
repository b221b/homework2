/**
 * Project Untitled
 */


#ifndef _ПРИБЫТИЕ_ОТПРАВЛЕНИЕ_H
#define _ПРИБЫТИЕ_ОТПРАВЛЕНИЕ_H

#include "Склады.h"


class Прибытие_отправление: public Склады {
public: 
    int ID регистрации;
    int ID судна;
    datetime Дата и время прибытия;
    datetime Дата и время отправления;
    string Причал;
};

#endif //_ПРИБЫТИЕ_ОТПРАВЛЕНИЕ_H