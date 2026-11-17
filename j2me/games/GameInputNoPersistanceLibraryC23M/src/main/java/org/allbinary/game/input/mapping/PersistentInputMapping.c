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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Enumeration.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputPersistance.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#include "org/allbinary/game/input/mapping/event/NullInputMappingEventListener.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/util/ABHashtable.h"

//GameInputNoPersistanceLibrary
typedef struct PersistentInputMapping PersistentInputMapping;
struct PersistentInputMapping {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    EnumerationUtil* enumerationUtil;
    InputToGameKeyMapping* inputMapping;
    InputMappingEventListenerInterface* inputMappingEventListenerInterface;
    InputPersistance* inputPersistance;
    InputMappingEvent* inputMappingEvent;
};

Any* PersistentInputMapping_instance;

PersistentInputMapping* PersistentInputMapping_new(const char* name);
PersistentInputMapping* PersistentInputMapping_getNullInstance(void);

void PersistentInputMapping_init(PersistentInputMapping* this, const char* name);
int32_t PersistentInputMapping_getTotalMapped(PersistentInputMapping* this);
bool PersistentInputMapping_isDefaultNew(PersistentInputMapping* this);
InputToGameKeyMapping* PersistentInputMapping_getDefault(PersistentInputMapping* this);
void PersistentInputMapping_setDefault(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation);
void PersistentInputMapping_update(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation);
void PersistentInputMapping_save(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation);
void PersistentInputMapping_init(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation);
void PersistentInputMapping_setInputMappingEventListenerInterface(PersistentInputMapping* this, InputMappingEventListenerInterface* inputMappingEventListenerInterface);
static InputMappingEventListenerInterface* PersistentInputMapping_getInputMappingEventListenerInterface(PersistentInputMapping* this);
InputToGameKeyMapping* PersistentInputMapping_getInputMapping(PersistentInputMapping* this);
bool PersistentInputMapping_isDelete(PersistentInputMapping* this, Input* input);
bool PersistentInputMapping_isSystemInput(PersistentInputMapping* this, Input* input);

// Static fields with runtime initializers: call this once at startup
void PersistentInputMapping_staticInit(void) {
    PersistentInputMapping_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void PersistentInputMapping_initFields(PersistentInputMapping* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->enumerationUtil = EnumerationUtil_getInstance();
    this->inputMapping = InputToGameKeyMapping_new();
    this->inputMappingEventListenerInterface = NullInputMappingEventListener_NULL_INPUT_MAPPING_EVENT_LISTENER;
    
    this->inputMappingEvent = InputMappingEvent_new(this);
}


PersistentInputMapping* PersistentInputMapping_getNullInstance(void) {
        if (PersistentInputMapping_instance == NullUtil_getInstance()->NULL_OBJECT) {
            PersistentInputMapping_instance = PersistentInputMapping_new(GamePersistanceStrings_getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID);
        }
        return ((PersistentInputMapping*) PersistentInputMapping_instance);
}


void PersistentInputMapping_init(PersistentInputMapping* this, const char* name) {
    PersistentInputMapping_initFields(this);
        this->inputPersistance = InputPersistance_new(name);
}

PersistentInputMapping* PersistentInputMapping_new(const char* name) {
    PersistentInputMapping* this = calloc(1, sizeof(PersistentInputMapping));
    PersistentInputMapping_init(this, name);
    return this;
}


int32_t PersistentInputMapping_getTotalMapped(PersistentInputMapping* this) {
        return JAVA_CALL(JAVA_CALL(PersistentInputMapping_getInputMapping(this), getHashtable), size);
}


bool PersistentInputMapping_isDefaultNew(PersistentInputMapping* this) {
        return false;
}


InputToGameKeyMapping* PersistentInputMapping_getDefault(PersistentInputMapping* this) {
        return InputToGameKeyMapping_getNullInstance();
}


// throws Exception
void PersistentInputMapping_setDefault(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        JAVA_CALL(PersistentInputMapping_getInputMapping(this), removeAll);
        JAVA_CALL(PersistentInputMapping_getInputMapping(this), addMapping, PersistentInputMapping_getDefault(this));
        PersistentInputMapping_save(this, abeClientInformation);
}


// throws Exception
void PersistentInputMapping_update(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        InputPersistance_deleteAll(this->inputPersistance, abeClientInformation);
        PersistentInputMapping_save(this, abeClientInformation);
}


// throws Exception
void PersistentInputMapping_save(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        InputPersistance_save(this->inputPersistance, abeClientInformation, JAVA_CALL(PersistentInputMapping_getInputMapping(this), getHashtable));
        InputMappingEvent_setInputToGameKeyMapping(this->inputMappingEvent, PersistentInputMapping_getInputMapping(this));
        if (PersistentInputMapping_getInputMappingEventListenerInterface(this) != nullptr) {
            JAVA_CALL(PersistentInputMapping_getInputMappingEventListenerInterface(this), onInputMappingEvent, this->inputMappingEvent);
        }
}


// throws Exception
void PersistentInputMapping_init(PersistentInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->INIT);
        JAVA_TRY {
            InputPersistance_loadAll(this->inputPersistance, abeClientInformation);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
            InputPersistance_deleteRecoreStore(this->inputPersistance, abeClientInformation);
            PersistentInputMapping_setDefault(this, abeClientInformation);
            InputPersistance_loadAll(this->inputPersistance, abeClientInformation);
        } JAVA_END_TRY;
        BasicArrayList* list = InputPersistance_getList(this->inputPersistance);
        int32_t totalMappedTo = 0;
        int32_t size = BasicArrayList_size(list);
        ABHashtable* hashtable = nullptr;
        Enumeration* enumeration = nullptr;
        Input* mappedToInput = nullptr;
        Input* gameActionInput = nullptr;
        for (int32_t index = 0; index < size; index++) {
            hashtable = ((ABHashtable*) list->objectArray[index]);
            enumeration = ABHashtable_keys(hashtable);
            while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
                mappedToInput = ((Input*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration));
                gameActionInput = ((Input*) ABHashtable_get(hashtable, mappedToInput));
                totalMappedTo++;
                JAVA_CALL(PersistentInputMapping_getInputMapping(this), add, gameActionInput, mappedToInput);
            }
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "End - Total Loaded Keys Mapped: ");
        StringMaker_appendint(stringBuffer, PersistentInputMapping_getTotalMapped(this));
        StringMaker_append(stringBuffer, " to: ");
        StringMaker_appendint(stringBuffer, totalMappedTo);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->INIT);
}


void PersistentInputMapping_setInputMappingEventListenerInterface(PersistentInputMapping* this, InputMappingEventListenerInterface* inputMappingEventListenerInterface) {
        this->inputMappingEventListenerInterface = inputMappingEventListenerInterface;
}


static InputMappingEventListenerInterface* PersistentInputMapping_getInputMappingEventListenerInterface(PersistentInputMapping* this) {
        return this->inputMappingEventListenerInterface;
}


InputToGameKeyMapping* PersistentInputMapping_getInputMapping(PersistentInputMapping* this) {
        return this->inputMapping;
}


// throws Exception
bool PersistentInputMapping_isDelete(PersistentInputMapping* this, Input* input) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
bool PersistentInputMapping_isSystemInput(PersistentInputMapping* this, Input* input) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}

