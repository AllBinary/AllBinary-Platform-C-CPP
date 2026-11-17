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
// package org.allbinary.input.automation.robot

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/GraphicsDevice.h"
// #include "java/awt/GraphicsEnvironment.h"
// #include "java/util/Collection.h"
// #include "java/util/Iterator.h"
// #include "java/util/Set.h"
// #include "javax/help/HelpSet.h"
// #include "javax/help/event/HelpSetEvent.h"
// #include "javax/help/event/HelpSetListener.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/help/JavaHelpSetNotifier.h"
#include "org/allbinary/logic/java/anyType/InterfaceUtil.h"
#include "org/allbinary/logic/system/loader/SecuredNativeLibraryInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct InputRobotFactory InputRobotFactory;
struct InputRobotFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ABHashtable* hashtable;
    HelpSetListener* helpSetListenerInterface;
};

static InputRobotFactory* InputRobotFactory_inputRobotFactory;

InputRobotFactory* InputRobotFactory_new(void);
InputRobotFactory* InputRobotFactory_getInstance(void);

void InputRobotFactory_init(InputRobotFactory* this);
void InputRobotFactory_addListener(InputRobotFactory* this, HelpSetListener* helpSetListenerInterface);
void InputRobotFactory_add(InputRobotFactory* this, InputRobotInterface* inputRobotInterface);
void InputRobotFactory_loadLibraries(InputRobotFactory* this);
void InputRobotFactory_loadLibraries(Collection* collection);
void InputRobotFactory_loadLibrary(InputRobotInterface* inputRobotInterface);
void InputRobotFactory_unloadLibraries(InputRobotFactory* this);
ABHashtable* InputRobotFactory_get(InputRobotFactory* this);
InputRobotInterface* InputRobotFactory_get(InputRobotFactory* this, const char* name);

// Static fields with runtime initializers: call this once at startup
void InputRobotFactory_staticInit(void) {
    InputRobotFactory_inputRobotFactory = InputRobotFactory_new();
}

static void InputRobotFactory_initFields(InputRobotFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->helpSetListenerInterface = nullptr;
}


// throws Exception
InputRobotFactory* InputRobotFactory_getInstance(void) {
        return InputRobotFactory_inputRobotFactory;
}


void InputRobotFactory_init(InputRobotFactory* this) {
    InputRobotFactory_initFields(this);
        JAVA_TRY {
            GraphicsEnvironment* graphenv = GraphicsEnvironment_getLocalGraphicsEnvironment();
            GraphicsDevice** screens = GraphicsEnvironment_getScreenDevices(graphenv);
            InputRobotInterface* inputRobotInterface = nullptr;
            for (int32_t i = 0; i < java_array_length(screens); i++) {
                inputRobotInterface = ((InputRobotInterface*) InputRobot_new(screens[i]));
                LogUtil_putF(this->logUtil, java_concat("Adding Robot: ", InputRobotInterface_getName(inputRobotInterface)), this, "getRobots");
                JAVA_CALL(InputRobotFactory_get(this), put, InputRobotInterface_getName(inputRobotInterface), inputRobotInterface);
            }
            LogUtil_putF(this->logUtil, java_concat("Number Of Robots: ", java_string_of(ABHashtable_size(this->hashtable))), this, "getRobots");
        } JAVA_CATCH(Exception, e) {
            LogUtil_putF(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR);
        } JAVA_END_TRY;
}

InputRobotFactory* InputRobotFactory_new(void) {
    InputRobotFactory* this = calloc(1, sizeof(InputRobotFactory));
    InputRobotFactory_init(this);
    return this;
}


void InputRobotFactory_addListener(InputRobotFactory* this, HelpSetListener* helpSetListenerInterface) {
        this->helpSetListenerInterface = helpSetListenerInterface;
}


// throws Exception
void InputRobotFactory_add(InputRobotFactory* this, InputRobotInterface* inputRobotInterface) {
        LogUtil_putF(this->logUtil, java_concat("Adding InputRobotInterface: ", InputRobotInterface_getName(inputRobotInterface)), this, "add");
        JAVA_CALL(InputRobotFactory_get(this), put, InputRobotInterface_getName(inputRobotInterface), inputRobotInterface);
        HelpSet* helpSet = InputRobotInterface_getHelpSet(inputRobotInterface);
        if (this->helpSetListenerInterface != nullptr) {
            if (helpSet != nullptr) {
                if (!JavaHelpSetNotifier_isNotified(helpSet)) {
                    HelpSetEvent* helpSetEvent = HelpSetEvent_new(this, helpSet, HelpSetEvent_HELPSET_ADDED);
                    HelpSetListener_helpSetAdded(this->helpSetListenerInterface, helpSetEvent);
                }
            } else {
                LogUtil_putF(this->logUtil, java_concat("Null HelpSet For: ", InputRobotInterface_getName(inputRobotInterface)), this, "add");
            }
        } else {
            LogUtil_putF(this->logUtil, "No HelpSet Listener", this, "add");
        }
}


// throws Exception
void InputRobotFactory_loadLibraries(InputRobotFactory* this) {
        Set* set = JAVA_CALL(InputRobotFactory_get(this), keySet);
        LogUtil_putF(this->logUtil, "Loading Libraries", this, "loadLibraries");
        Any** nameArray = Set_toArray(set);
        int32_t size = java_array_length(nameArray);
        for (int32_t index = 0; index < size; index++) {
            InputRobotInterface* inputRobotInterface = InputRobotFactory_get(InputRobotFactory_getInstance(), ((const char*) nameArray[index]));
            InputRobotFactory_loadLibrary(inputRobotInterface);
        }
}


// throws Exception
// Java overloaded method: C needs a different name
void InputRobotFactory_loadLibraries(Collection* collection) {
        LogUtil* logUtil = LogUtil_getInstance();
        LogUtil_putF(logUtil, "Loading Libraries", "InputRobotFactory", "loadLibraries");
        Iterator* iterator = Collection_iterator(collection);
        while (Iterator_hasNext(iterator)) {
            InputRobotFactory_loadLibrary(((InputRobotInterface*) Iterator_next(iterator)));
        }
}


// throws Exception
void InputRobotFactory_loadLibrary(InputRobotInterface* inputRobotInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        if (InterfaceUtil_isImplemented("SecuredNativeLibraryInterface", inputRobotInterface)) {
            LogUtil_putF(logUtil, java_concat("Loading Library: ", InputRobotInterface_getName(inputRobotInterface)), "InputRobotFactory", "loadLibraries");
            SecuredNativeLibraryInterface* securedNativeLibraryInterface = ((SecuredNativeLibraryInterface*) inputRobotInterface);
            SecuredNativeLibraryInterface_load(securedNativeLibraryInterface);
        }
}


// throws Exception
void InputRobotFactory_unloadLibraries(InputRobotFactory* this) {
        LogUtil_putF(this->logUtil, "Unloading Libraries", this, "unloadLibraries");
        Set* set = JAVA_CALL(InputRobotFactory_get(this), keySet);
        InputRobotInterface* inputRobotInterface = nullptr;
        Any** inputRobotArray = Set_toArray(set);
        int32_t size = java_array_length(inputRobotArray);
        for (int32_t index = 0; index < size; index++) {
            inputRobotInterface = InputRobotFactory_get(this, ((const char*) inputRobotArray[index]));
            if (InterfaceUtil_isImplemented("SecuredNativeLibraryInterface", inputRobotInterface)) {
                LogUtil_putF(this->logUtil, java_concat("Unloading Library: ", InputRobotInterface_getName(inputRobotInterface)), this, "unloadLibraries");
                SecuredNativeLibraryInterface* securedNativeLibraryInterface = ((SecuredNativeLibraryInterface*) inputRobotInterface);
                SecuredNativeLibraryInterface_unload(securedNativeLibraryInterface);
            }
        }
}


// throws Exception
ABHashtable* InputRobotFactory_get(InputRobotFactory* this) {
        return this->hashtable;
}


// Java overloaded method: C needs a different name
InputRobotInterface* InputRobotFactory_get(InputRobotFactory* this, const char* name) {
        LogUtil_putF(this->logUtil, java_concat("Getting Robot: ", name), this, "getRobots");
        return ((InputRobotInterface*) ABHashtable_get(this->hashtable, name));
}

