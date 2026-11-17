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
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/DataInputStream.h"
// #include "java/io/EOFException.h"
// #include "java/io/IOException.h"
// #include "javax/microedition/rms/RecordComparator.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

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

static void ScoreComparator_initFields(ScoreComparator* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void ScoreComparator_init(ScoreComparator* this, bool isHighestBest) {
    ScoreComparator_initFields(this);
        this->isHighestBest = isHighestBest;
}

ScoreComparator* ScoreComparator_new(bool isHighestBest) {
    ScoreComparator* this = calloc(1, sizeof(ScoreComparator));
    ScoreComparator_init(this, isHighestBest);
    return this;
}


int64_t ScoreComparator_getBestScore(ScoreComparator* this) {
        return (this->isHighestBest ? Long_MAX_VALUE : 0);
}


int32_t ScoreComparator_compare(ScoreComparator* this, int8_t* recordOne, int8_t* recordTwo) {
        ByteArrayInputStream* byteArrayInputStreamOne = ByteArrayInputStream_new(recordOne);
        DataInputStream* inputStreamOne = DataInputStream_new(byteArrayInputStreamOne);
        ByteArrayInputStream* byteArrayInputStreamTwo = ByteArrayInputStream_new(recordTwo);
        DataInputStream* inputStreamTwo = DataInputStream_new(byteArrayInputStreamTwo);
        int64_t scoreOne = 0LL;
        int64_t scoreTwo = 0LL;
        JAVA_TRY {
            DataInputStream_readUTF(inputStreamOne);
            DataInputStream_readUTF(inputStreamTwo);
            scoreOne = DataInputStream_readLong(inputStreamOne);
            scoreTwo = DataInputStream_readLong(inputStreamTwo);
        } JAVA_CATCH(EOFException, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "compare", e);
        } JAVA_CATCH(IOException, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "compare", e);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "compare", e);
        } JAVA_END_TRY;
        if (this->isHighestBest) {
            return ScoreComparator_getHighTooLow(this, scoreOne, scoreTwo);
        } else {
            return ScoreComparator_getLowTooHigh(this, scoreOne, scoreTwo);
        }
}


int32_t ScoreComparator_getHighTooLow(ScoreComparator* this, int64_t scoreOne, int64_t scoreTwo) {
        if (scoreOne > scoreTwo) {
            return RecordComparator_PRECEDES;
        } else if (scoreOne < scoreTwo) {
            return RecordComparator_FOLLOWS;
        } else {
            return RecordComparator_EQUIVALENT;
        }
}


int32_t ScoreComparator_getLowTooHigh(ScoreComparator* this, int64_t scoreOne, int64_t scoreTwo) {
        if (scoreOne < scoreTwo) {
            return RecordComparator_PRECEDES;
        } else if (scoreOne > scoreTwo) {
            return RecordComparator_FOLLOWS;
        } else {
            return RecordComparator_EQUIVALENT;
        }
}

