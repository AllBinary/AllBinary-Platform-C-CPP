#ifndef ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H
#define ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H
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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct RecordComparator RecordComparator;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#include "java/io/ByteArrayInputStream.h"
#include "java/io/DataInputStream.h"
#include "java/io/EOFException.h"
#include "java/io/IOException.h"
#include "javax/microedition/rms/RecordComparator.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Long.h"

typedef struct ScoreComparator ScoreComparator;
struct ScoreComparator {
    RecordComparator RecordComparator_interface;
    LogUtil* logUtil;
    bool isHighestBest;
};


ScoreComparator* ScoreComparator_new(bool isHighestBest);

void ScoreComparator_init(ScoreComparator* this, bool isHighestBest);

int64_t ScoreComparator_getBestScore(ScoreComparator* this);

int32_t ScoreComparator_compare(ScoreComparator* this, int8_t* recordOne, int8_t* recordTwo);

int32_t ScoreComparator_getHighTooLow(ScoreComparator* this, int64_t scoreOne, int64_t scoreTwo);

int32_t ScoreComparator_getLowTooHigh(ScoreComparator* this, int64_t scoreOne, int64_t scoreTwo);
#define ScoreComparator_new1 ScoreComparator_new
#define ScoreComparator_init1 ScoreComparator_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScoreComparator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScoreComparator_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_H
