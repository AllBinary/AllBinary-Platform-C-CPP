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
// package org.allbinary.input.automation.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
// #include "java/util/List.h"
// #include "javax/xml/bind/JAXBContext.h"
// #include "javax/xml/bind/Marshaller.h"
// #include "javax/xml/bind/annotation/XmlAccessType.h"
// #include "javax/xml/bind/annotation/XmlAccessorType.h"
// #include "javax/xml/bind/annotation/XmlElement.h"
// #include "javax/xml/bind/annotation/XmlRootElement.h"
// #include "javax/xml/bind/annotation/XmlType.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentFileHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/w3c/dom/Document.h"

//name="inputAutomationConfiguration", 
typedef struct InputAutomationConfiguration InputAutomationConfiguration;
struct InputAutomationConfiguration {
    LogUtil* logUtil;
    bool installed;
    List* inputAutomationModuleConfigurationList;
};

static const char* InputAutomationConfiguration_FILENAME = "InputAutomationConfig.xml";

InputAutomationConfiguration* InputAutomationConfiguration_new(void);

void InputAutomationConfiguration_init(InputAutomationConfiguration* this);
File* InputAutomationConfiguration_getFile(void);
bool InputAutomationConfiguration_isInstalled(InputAutomationConfiguration* this);
void InputAutomationConfiguration_setInstalled(InputAutomationConfiguration* this, bool installed);
List* InputAutomationConfiguration_getInputAutomationModuleConfigurationList(InputAutomationConfiguration* this);
void InputAutomationConfiguration_save(InputAutomationConfiguration* this);

static void InputAutomationConfiguration_initFields(InputAutomationConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->installed = false;
    this->inputAutomationModuleConfigurationList = nullptr;
}


void InputAutomationConfiguration_init(InputAutomationConfiguration* this) {
    InputAutomationConfiguration_initFields(this);
}

InputAutomationConfiguration* InputAutomationConfiguration_new(void) {
    InputAutomationConfiguration* this = calloc(1, sizeof(InputAutomationConfiguration));
    InputAutomationConfiguration_init(this);
    return this;
}


File* InputAutomationConfiguration_getFile(void) {
        return File_new(InputAutomationConfiguration_FILENAME);
}


bool InputAutomationConfiguration_isInstalled(InputAutomationConfiguration* this) {
        return this->installed;
}


void InputAutomationConfiguration_setInstalled(InputAutomationConfiguration* this, bool installed) {
        this->installed = installed;
        LogUtil_putF(this->logUtil, java_concat("Installed: ", java_string_of(installed)), this, "setIntalled");
}


List* InputAutomationConfiguration_getInputAutomationModuleConfigurationList(InputAutomationConfiguration* this) {
        return this->inputAutomationModuleConfigurationList;
}


// throws Exception
void InputAutomationConfiguration_save(InputAutomationConfiguration* this) {
        Document* document = DomDocumentHelper_create();
        File* file = File_new(InputAutomationConfiguration_FILENAME);
        FileUtil_copy(FileUtil_getInstance(), AbPath_new(File_getAbsolutePath(file), StringUtil_getInstance()->EMPTY_STRING), AbPath_new(java_concat(java_string_of(File_getAbsolutePath(file)), ".bak.xml"), StringUtil_getInstance()->EMPTY_STRING));
        JAXBContext* jaxbContext = JAXBContext_newInstance("InputAutomationConfiguration");
        Marshaller* marshaller = JAXBContext_createMarshaller(jaxbContext);
        Marshaller_setProperty(marshaller, Marshaller_JAXB_FORMATTED_OUTPUT, true);
        Marshaller_marshal(marshaller, this, document);
        DomDocumentFileHelper_save(FileWrapperUtil_wrapFile(file), document);
}

