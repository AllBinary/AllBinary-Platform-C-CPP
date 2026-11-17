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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct NumberOnOwnGroupSequenceAIFactory NumberOnOwnGroupSequenceAIFactory;
struct NumberOnOwnGroupSequenceAIFactory {
    LogUtil* logUtil;
};


NumberOnOwnGroupSequenceAIFactory* NumberOnOwnGroupSequenceAIFactory_new(void);
ArtificialIntelligenceInterface* NumberOnOwnGroupSequenceAIFactory_getInstance(NumberOnOwnGroupSequenceAIFactory* this, ABHashtable* hashtable, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

static void NumberOnOwnGroupSequenceAIFactory_initFields(NumberOnOwnGroupSequenceAIFactory* this) {
    this->logUtil = LogUtil_getInstance();
}

void NumberOnOwnGroupSequenceAIFactory_init(NumberOnOwnGroupSequenceAIFactory* this) {
    NumberOnOwnGroupSequenceAIFactory_initFields(this);
}

NumberOnOwnGroupSequenceAIFactory* NumberOnOwnGroupSequenceAIFactory_new(void) {
    NumberOnOwnGroupSequenceAIFactory* this = calloc(1, sizeof(NumberOnOwnGroupSequenceAIFactory));
    NumberOnOwnGroupSequenceAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* NumberOnOwnGroupSequenceAIFactory_getInstance(NumberOnOwnGroupSequenceAIFactory* this, ABHashtable* hashtable, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        int32_t* integerArray = NumberInSameGroupSequence_getInstance()->NUMBER_ON_SAME_TEAM_SEQUENCE;
        BasicArrayList* list = BasicArrayListD_new();
        for (int32_t index = 0; index < java_array_length(integerArray); index++) {
            Any* integerCanBeNull = ABHashtable_get(hashtable, ((Any*) integerArray[index]));
            if (integerCanBeNull == nullptr) {
                break;
            }
            BasicArrayList_add(list, integerCanBeNull);
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Total AI Properties: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(list));
        StringMaker_append(stringBuffer, " == Total AI: ");
        StringMaker_appendint(stringBuffer, java_array_length(artificialIntelligenceInterface));
        StringMaker_append(stringBuffer, " + 1");
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->GET_INSTANCE);
        if (java_array_length(artificialIntelligenceInterface) - 1 > BasicArrayList_size(list)) {
            java_throw(java_exception_new("Exception", "Not enough AI properties."));
        }
        if (java_array_length(artificialIntelligenceInterface) - 1 < BasicArrayList_size(list)) {
            java_throw(java_exception_new("Exception", "Too Many AI properties."));
        }
        int32_t* numberOnSameTeam = ((int32_t*) java_array_new(sizeof(int32_t), BasicArrayList_size(list)));
        for (int32_t index = 0; index < java_array_length(numberOnSameTeam); index++) {
            numberOnSameTeam[index] = ((int32_t) list->objectArray[index]);
        }
        return NumberOnOwnGroupSequenceAI_new(numberOnSameTeam, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
}

