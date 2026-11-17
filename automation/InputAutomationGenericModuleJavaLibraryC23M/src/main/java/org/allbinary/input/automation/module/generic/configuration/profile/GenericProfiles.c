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
// package org.allbinary.input.automation.module.generic.configuration.profile

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
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct GenericProfiles GenericProfiles;
struct GenericProfiles {
    DomNodeInterface DomNodeInterface_interface;
    DomDocumentMappingInterface DomDocumentMappingInterface_interface;
    LogUtil* logUtil;
    HashMap* hashMap;
    DefaultListModelHelper* profilesDefaultListModelHelper;
    const char* fileName;
};

const char* GenericProfiles_DEFAULT_PROFILES_PATH = "./modules/configs/profiles/";
const char* GenericProfiles_DEFAULT_PROFILE_ACTIONS_PATH;
const char* GenericProfiles_DEFAULT_FILE;

GenericProfiles* GenericProfiles_new(const char* fileName);

void GenericProfiles_init(GenericProfiles* this, const char* fileName);
static void GenericProfiles_initProfiles(GenericProfiles* this, Node* node);
DefaultListModelHelper* GenericProfiles_getDefaultListModelHelper(GenericProfiles* this);
GenericProfile* GenericProfiles_get(GenericProfiles* this, const char* name);
void GenericProfiles_add(GenericProfiles* this, const char* name);
void GenericProfiles_remove(GenericProfiles* this, const char* name);
Node* GenericProfiles_toXmlNode(GenericProfiles* this, Document* document);
Document* GenericProfiles_toXmlDoc(GenericProfiles* this);
void GenericProfiles_save(GenericProfiles* this);

// Static fields with runtime initializers: call this once at startup
void GenericProfiles_staticInit(void) {
    GenericProfiles_DEFAULT_PROFILE_ACTIONS_PATH = java_concat(java_string_of(GenericProfiles_DEFAULT_PROFILES_PATH), "actions/");
    GenericProfiles_DEFAULT_FILE = java_concat(java_string_of(GenericProfiles_DEFAULT_PROFILES_PATH), "profiles.xml");
}

static void GenericProfiles_initFields(GenericProfiles* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
}


void GenericProfiles_init(GenericProfiles* this, const char* fileName) {
    GenericProfiles_initFields(this);
        this->fileName = fileName;
        this->profilesDefaultListModelHelper = DefaultListModelHelper_new();
        this->hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        if (File_isFile(File_new(fileName))) {
            int8_t* bytes = ((int8_t*) java_array_new(sizeof(int8_t), 100000));
            FileInputStream* idFile = FileInputStream_new(fileName);
            int32_t length = FileInputStream_read(idFile, bytes);
            const char* data = java_string_new(bytes);
            int32_t endIndex = java_string_lastIndexOf(data, u'>');
            Document* document = DomDocumentHelper_create(java_substring(data, 0, endIndex + 1));
            NodeList* nodeList = Document_getElementsByTagName(document, GenericProfilesData_NAME);
            LogUtil_putF(this->logUtil, java_concat("Number Of Profiles Specified: ", java_string_of(NodeList_getLength(nodeList))), this, "Contructor");
            if (nodeList != nullptr) {
                GenericProfiles_initProfiles(this, NodeList_item(nodeList, 0));
            } else {
                java_throw(java_exception_new("Exception", java_concat(java_string_of(GenericProfileActionData_NAME), " Name Node Node Children")));
            }
            LogUtil_putF(this->logUtil, java_concat(java_concat("Loaded: ", java_string_of(HashMap_size(this->hashMap))), " Configuration Profile Actions"), this, "Contructor");
        } else {
            LogUtil_putF(this->logUtil, java_concat("No Generic Profile: ", fileName), this, "Contructor");
        }
        JAVA_CALL(GenericProfiles_getDefaultListModelHelper(this), initDefaultModelList);
}

GenericProfiles* GenericProfiles_new(const char* fileName) {
    GenericProfiles* this = calloc(1, sizeof(GenericProfiles));
    GenericProfiles_init(this, fileName);
    return this;
}


// throws Exception
static void GenericProfiles_initProfiles(GenericProfiles* this, Node* node) {
        NodeList* nodeList = Node_getChildNodes(node);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* profileNameNode = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(profileNameNode), compareTo, GenericProfileData_NAME) == 0) {
                GenericProfile* genericProfile = GenericProfile_new(profileNameNode);
                HashMap_put(this->hashMap, GenericProfile_getName(genericProfile), genericProfile);
                JAVA_CALL(GenericProfiles_getDefaultListModelHelper(this), add, GenericProfile_getName(genericProfile));
            }
        }
}


DefaultListModelHelper* GenericProfiles_getDefaultListModelHelper(GenericProfiles* this) {
        return this->profilesDefaultListModelHelper;
}


// throws Exception
GenericProfile* GenericProfiles_get(GenericProfiles* this, const char* name) {
        GenericProfile* genericProfile = ((GenericProfile*) HashMap_get(this->hashMap, name));
        if (genericProfile == nullptr) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("No Generic Profile Named: ", name), " availability was: "), java_string_of(this->hashMap)), this, commonStrings->GET);
        }
        return genericProfile;
}


// throws Exception
void GenericProfiles_add(GenericProfiles* this, const char* name) {
        HashMap_put(this->hashMap, name, GenericProfile_new(name));
        JAVA_CALL(GenericProfiles_getDefaultListModelHelper(this), add, name);
        JAVA_CALL(GenericProfiles_getDefaultListModelHelper(this), initDefaultModelList);
        GenericProfiles_save(this);
}


// throws Exception
void GenericProfiles_remove(GenericProfiles* this, const char* name) {
        HashMap_remove(this->hashMap, name);
        JAVA_CALL(GenericProfiles_getDefaultListModelHelper(this), remove, name);
        JAVA_CALL(GenericProfiles_getDefaultListModelHelper(this), initDefaultModelList);
        GenericProfiles_save(this);
}


// throws Exception
Node* GenericProfiles_toXmlNode(GenericProfiles* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfilesData_NAME);
        Set* set = HashMap_keySet(this->hashMap);
        Any** nameArray = Set_toArray(set);
        int32_t size = java_array_length(nameArray);
        for (int32_t index = 0; index < size; index++) {
            GenericProfile* genericProfile = ((GenericProfile*) HashMap_get(this->hashMap, ((const char*) nameArray[index])));
            Node_appendChild(node, GenericProfile_toXmlNode(genericProfile, document));
        }
        return node;
}


// throws Exception
Document* GenericProfiles_toXmlDoc(GenericProfiles* this) {
        Document* document = DomDocumentHelper_create();
        Node* node = GenericProfiles_toXmlNode(this, document);
        Document_appendChild(document, node);
        return document;
}


// throws Exception
void GenericProfiles_save(GenericProfiles* this) {
        FileOutputStream* idFile = FileOutputStream_new(this->fileName);
        DataOutputStream* idOutData = DataOutputStream_new(idFile);
        const char* documentString = XmlDocumentHelper_toString(GenericProfiles_toXmlDoc(this));
        DataOutputStream_writeBytes(idOutData, documentString);
}

