#ifndef ORG_ALLBINARY_GAME_PART_WEAPON_SALVOINTERFACE_H
#define ORG_ALLBINARY_GAME_PART_WEAPON_SALVOINTERFACE_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.part.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct WeaponProperties WeaponProperties;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;

typedef struct SalvoInterface SalvoInterface;
struct SalvoInterface {
    void (*process)(void* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle);
    void (*processScore)(void* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SalvoInterface_staticInit(void);

static inline void SalvoInterface_process(void* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle) {
    ((__typeof__(((SalvoInterface*) nullptr)->process)) java_method_of(this, "process"))(this, allbinaryLayerManager, angle, otherAngle);
}

static inline void SalvoInterface_processScore(void* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) {
    ((__typeof__(((SalvoInterface*) nullptr)->processScore)) java_method_of(this, "processScore"))(this, allbinaryLayerManager, angle, otherAngle, weaponProperties, scoreableInterface);
}


#endif // ORG_ALLBINARY_GAME_PART_WEAPON_SALVOINTERFACE_H
