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
// package org.allbinary.input.automation.module.generic.configuration.profile.actions

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/DataOutputStream.h"
// #include "java/io/File.h"
// #include "java/io/FileInputStream.h"
// #include "java/io/FileOutputStream.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h"
#include "org/allbinary/input/automation/module/DefaultListModelHelper.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/CommonDataFileStrings.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct GenericProfileActions GenericProfileActions;
struct GenericProfileActions {
    DomNodeInterface DomNodeInterface_interface;
    DomDocumentMappingInterface DomDocumentMappingInterface_interface;
    LogUtil* logUtil;
    CommonDataFileStrings* commonFileStrings;
    const char* name;
    GenericProfileActionsJPanel* genericProfileActionsJPanel;
    DefaultListModelHelper* actionsDefaultListModelHelper;
    HashMap* hashMap;
};

const char* GenericProfileActions_DEFAULT_PROFILE_ACTIONS_PATH;

GenericProfileActions* GenericProfileActions_new(GenericProfileActionsJPanel* genericProfileActionsJPanel, const char* name);

void GenericProfileActions_init(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel, const char* name);

GenericProfileActions* GenericProfileActions_new3(GenericProfileActionsJPanel* genericProfileActionsJPanel, AbPath* abPath, const char* name);
void GenericProfileActions_init3(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel, AbPath* abPath, const char* name);

GenericProfileActions* GenericProfileActions_new3(GenericProfileActionsJPanel* genericProfileActionsJPanel, FileInputStream* fileInputStream, const char* name);
void GenericProfileActions_init3(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel, FileInputStream* fileInputStream, const char* name);
static void GenericProfileActions_init(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel);
void GenericProfileActions_save(GenericProfileActions* this);
File* GenericProfileActions_getFile(GenericProfileActions* this, const char* name);
static void GenericProfileActions_load(GenericProfileActions* this);
static void GenericProfileActions_fileInit(GenericProfileActions* this, FileInputStream* fileInputStream);
static void GenericProfileActions_initActions(GenericProfileActions* this, NodeList* nodeList);
DefaultListModelHelper* GenericProfileActions_getDefaultListModelHelper(GenericProfileActions* this);
GenericProfileAction* GenericProfileActions_getAction(GenericProfileActions* this, const char* string);
void GenericProfileActions_add(GenericProfileActions* this, const char* name);
void GenericProfileActions_remove(GenericProfileActions* this, const char* name);
HashMap* GenericProfileActions_toHashMap(GenericProfileActions* this);
Node* GenericProfileActions_toXmlNode(GenericProfileActions* this, Document* document);
Document* GenericProfileActions_toXmlDoc(GenericProfileActions* this);
GenericProfileActionsJPanel* GenericProfileActions_getGenericProfileActionsJPanel(GenericProfileActions* this);
void GenericProfileActions_setGenericProfileActionsJPanel(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel);
HashMap* GenericProfileActions_getHashMap(GenericProfileActions* this);
void GenericProfileActions_setHashMap(GenericProfileActions* this, HashMap* hashMap);
const char* GenericProfileActions_getName(GenericProfileActions* this);
void GenericProfileActions_setName(GenericProfileActions* this, const char* name);

// Static fields with runtime initializers: call this once at startup
void GenericProfileActions_staticInit(void) {
    GenericProfileActions_DEFAULT_PROFILE_ACTIONS_PATH = java_concat(java_string_of(GenericProfiles_DEFAULT_PROFILES_PATH), "actions/");
}

static void GenericProfileActions_initFields(GenericProfileActions* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonFileStrings = CommonDataFileStrings_getInstance();
    this->name = nullptr;
    this->genericProfileActionsJPanel = nullptr;
    this->actionsDefaultListModelHelper = nullptr;
    this->hashMap = nullptr;
}


void GenericProfileActions_init(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel, const char* name) {
    GenericProfileActions_initFields(this);
        GenericProfileActions_setName(this, name);
        GenericProfileActions_init(this, genericProfileActionsJPanel);
        GenericProfileActions_load(this);
}

GenericProfileActions* GenericProfileActions_new(GenericProfileActionsJPanel* genericProfileActionsJPanel, const char* name) {
    GenericProfileActions* this = calloc(1, sizeof(GenericProfileActions));
    GenericProfileActions_init(this, genericProfileActionsJPanel, name);
    return this;
}


void GenericProfileActions_init3(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel, AbPath* abPath, const char* name) {
    GenericProfileActions_initFields(this);
        GenericProfileActions_setName(this, name);
        GenericProfileActions_init(this, genericProfileActionsJPanel);
        GenericProfileActions_load(this);
}

GenericProfileActions* GenericProfileActions_new3(GenericProfileActionsJPanel* genericProfileActionsJPanel, AbPath* abPath, const char* name) {
    GenericProfileActions* this = calloc(1, sizeof(GenericProfileActions));
    GenericProfileActions_init3(this, genericProfileActionsJPanel, abPath, name);
    return this;
}


void GenericProfileActions_init3(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel, FileInputStream* fileInputStream, const char* name) {
    GenericProfileActions_initFields(this);
        GenericProfileActions_setName(this, name);
        GenericProfileActions_init(this, genericProfileActionsJPanel);
        GenericProfileActions_fileInit(this, fileInputStream);
}

GenericProfileActions* GenericProfileActions_new3(GenericProfileActionsJPanel* genericProfileActionsJPanel, FileInputStream* fileInputStream, const char* name) {
    GenericProfileActions* this = calloc(1, sizeof(GenericProfileActions));
    GenericProfileActions_init3(this, genericProfileActionsJPanel, fileInputStream, name);
    return this;
}


// throws Exception
static void GenericProfileActions_init(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel) {
        GenericProfileActions_setGenericProfileActionsJPanel(this, genericProfileActionsJPanel);
        this->actionsDefaultListModelHelper = DefaultListModelHelper_new();
        GenericProfileActions_setHashMap(this, HashMap_new());
}


// throws Exception
void GenericProfileActions_save(GenericProfileActions* this) {
        FileOutputStream* idFile = FileOutputStream_new(java_concat(java_concat(java_string_of(GenericProfileActions_DEFAULT_PROFILE_ACTIONS_PATH), GenericProfileActions_getName(this)), java_string_of(this->commonFileStrings->_XML)));
        DataOutputStream* idOutData = DataOutputStream_new(idFile);
        DataOutputStream_writeBytes(idOutData, XmlDocumentHelper_toString(GenericProfileActions_toXmlDoc(this)));
}


File* GenericProfileActions_getFile(GenericProfileActions* this, const char* name) {
        const char* fileName = java_concat(java_concat(GenericProfileActions_DEFAULT_PROFILE_ACTIONS_PATH, name), java_string_of(this->commonFileStrings->_XML));
        return File_new(fileName);
}


// throws Exception
static void GenericProfileActions_load(GenericProfileActions* this) {
        File* file = GenericProfileActions_getFile(this, GenericProfileActions_getName(this));
        if (File_isFile(file)) {
            FileInputStream* idFile = FileInputStream_new(file);
            GenericProfileActions_fileInit(this, idFile);
        } else {
            LogUtil_putF(this->logUtil, java_concat("No Profile: ", java_string_of(File_getAbsolutePath(file))), this, "Contructor");
        }
}


// throws Exception
static void GenericProfileActions_fileInit(GenericProfileActions* this, FileInputStream* fileInputStream) {
        int8_t* bytes = ((int8_t*) java_array_new(sizeof(int8_t), 100000));
        int32_t length = FileInputStream_read(fileInputStream, bytes);
        const char* data = java_string_new(bytes);
        int32_t endIndex = java_string_lastIndexOf(data, u'>');
        Document* document = DomDocumentHelper_create(java_substring(data, 0, endIndex + 1));
        NodeList* nameNodeList = Document_getElementsByTagName(document, GenericProfileActionsData_NAME);
        LogUtil_putF(this->logUtil, java_concat("Number Of Profiles Specified: ", java_string_of(NodeList_getLength(nameNodeList))), this, "Contructor");
        for (int32_t index = 0; index < NodeList_getLength(nameNodeList); index++) {
            Node* node = NodeList_item(nameNodeList, index);
            NodeList* nodeList = Node_getChildNodes(node);
            if (nodeList != nullptr) {
                GenericProfileActions_initActions(this, nodeList);
            } else {
                java_throw(java_exception_new("Exception", java_concat(java_string_of(GenericProfileActionData_NAME), " Name Node Node Children")));
            }
        }
        LogUtil_putF(this->logUtil, java_concat(java_concat("Loaded: ", java_string_of(JAVA_CALL(GenericProfileActions_getHashMap(this), size))), " Configuration Profile Action(s)"), this, "Contructor");
        JAVA_CALL(GenericProfileActions_getDefaultListModelHelper(this), initDefaultModelList);
}


// throws Exception
static void GenericProfileActions_initActions(GenericProfileActions* this, NodeList* nodeList) {
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* actionNode = NodeList_item(nodeList, index);
            if (actionNode != nullptr) {
                GenericProfileAction* genericConfigurationProfileAction = GenericProfileAction_new(JAVA_CALL(GenericProfileActions_getGenericProfileActionsJPanel(this), getGenericProfileActionJPanel), actionNode);
                JAVA_CALL(GenericProfileActions_getHashMap(this), put, GenericProfileAction_getName(genericConfigurationProfileAction), genericConfigurationProfileAction);
                JAVA_CALL(GenericProfileActions_getDefaultListModelHelper(this), add, GenericProfileAction_getName(genericConfigurationProfileAction));
            } else {
                java_throw(java_exception_new("Exception", java_concat(java_string_of(GenericProfileActionData_NAME), " Node Null")));
            }
        }
}


DefaultListModelHelper* GenericProfileActions_getDefaultListModelHelper(GenericProfileActions* this) {
        return this->actionsDefaultListModelHelper;
}


GenericProfileAction* GenericProfileActions_getAction(GenericProfileActions* this, const char* string) {
        return ((GenericProfileAction*) JAVA_CALL(GenericProfileActions_getHashMap(this), get, string));
}


// throws Exception
void GenericProfileActions_add(GenericProfileActions* this, const char* name) {
        GenericProfileAction* genericProfileAction = GenericProfileAction_new(name);
        JAVA_CALL(GenericProfileActions_getHashMap(this), put, GenericProfileAction_getName(genericProfileAction), genericProfileAction);
        JAVA_CALL(GenericProfileActions_getDefaultListModelHelper(this), add, GenericProfileAction_getName(genericProfileAction));
        JAVA_CALL(GenericProfileActions_getDefaultListModelHelper(this), initDefaultModelList);
        GenericProfileActions_save(this);
}


// throws Exception
void GenericProfileActions_remove(GenericProfileActions* this, const char* name) {
        JAVA_CALL(GenericProfileActions_getHashMap(this), remove, name);
        JAVA_CALL(GenericProfileActions_getDefaultListModelHelper(this), remove, name);
        JAVA_CALL(GenericProfileActions_getDefaultListModelHelper(this), initDefaultModelList);
        GenericProfileActions_save(this);
}


HashMap* GenericProfileActions_toHashMap(GenericProfileActions* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* GenericProfileActions_toXmlNode(GenericProfileActions* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfileActionsData_NAME);
        Set* set = JAVA_CALL(GenericProfileActions_getHashMap(this), keySet);
        Any** actionNameArray = Set_toArray(set);
        int32_t size = java_array_length(actionNameArray);
        for (int32_t index = 0; index < size; index++) {
            const char* nextActionName = ((const char*) actionNameArray[index]);
            GenericProfileAction* nextGenericProfileAction = ((GenericProfileAction*) GenericProfileActions_getAction(this, nextActionName));
            Node_appendChild(node, GenericProfileAction_toXmlNode(nextGenericProfileAction, document));
        }
        return node;
}


// throws Exception
Document* GenericProfileActions_toXmlDoc(GenericProfileActions* this) {
        Document* document = DomDocumentHelper_create();
        Node* node = GenericProfileActions_toXmlNode(this, document);
        Document_appendChild(document, node);
        return document;
}


GenericProfileActionsJPanel* GenericProfileActions_getGenericProfileActionsJPanel(GenericProfileActions* this) {
        return this->genericProfileActionsJPanel;
}


void GenericProfileActions_setGenericProfileActionsJPanel(GenericProfileActions* this, GenericProfileActionsJPanel* genericProfileActionsJPanel) {
        this->genericProfileActionsJPanel = genericProfileActionsJPanel;
}


HashMap* GenericProfileActions_getHashMap(GenericProfileActions* this) {
        return this->hashMap;
}


void GenericProfileActions_setHashMap(GenericProfileActions* this, HashMap* hashMap) {
        this->hashMap = hashMap;
}


const char* GenericProfileActions_getName(GenericProfileActions* this) {
        return this->name;
}


void GenericProfileActions_setName(GenericProfileActions* this, const char* name) {
        this->name = name;
}

