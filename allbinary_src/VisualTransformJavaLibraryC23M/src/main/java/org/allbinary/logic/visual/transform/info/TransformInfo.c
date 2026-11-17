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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/Encoder.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/OutputTypeData.h"
#include "org/allbinary/logic/io/path/AbFilePath.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/info/data/TransformInfoDataData.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h"
#include "org/allbinary/logic/visual/transform/info/viewObject/TransformInfoObjectData.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

typedef struct TransformInfo TransformInfo;
struct TransformInfo {
    TransformInfoInterface TransformInfoInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbeClientInformationInterface* abeClientInformation;
    bool isChild;
    const char* name;
    const char* storeName;
    const char* objectFileName;
    Any* anyType;
    const char* objectConfigFileName;
    TransformInfoObjectConfigInterface* objectConfigInterface;
    const char* template;
    const char* templateFileName;
    const char* dataFileName;
    const char* data;
};


TransformInfo* TransformInfo_new(void);

void TransformInfo_init(TransformInfo* this);

TransformInfo* TransformInfo_new1(const char* name);
void TransformInfo_init1(TransformInfo* this, const char* name);

TransformInfo* TransformInfo_new5(const char* name, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName, const char* dataFileName);
void TransformInfo_init5(TransformInfo* this, const char* name, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName, const char* dataFileName);
void TransformInfo_override(TransformInfo* this, HashMap* hashMap);
const char* TransformInfo_log(TransformInfo* this);
void TransformInfo_setName(TransformInfo* this, const char* value);
void TransformInfo_setStoreName(TransformInfo* this, const char* value);
const char* TransformInfo_getStoreName(TransformInfo* this);
void TransformInfo_setObject(TransformInfo* this, Any* anyType);
void TransformInfo_setObjectFile(TransformInfo* this, const char* value);
void TransformInfo_setTemplate(TransformInfo* this, const char* value);
void TransformInfo_setTemplateFile(TransformInfo* this, const char* value);
void TransformInfo_setObjectConfigFileName(TransformInfo* this, const char* value);
void TransformInfo_setObjectConfigFile(TransformInfo* this, const char* value);
void TransformInfo_setObjectConfig(TransformInfo* this, const char* value);
void TransformInfo_setDataFile(TransformInfo* this, const char* value);
void TransformInfo_setData(TransformInfo* this, const char* value);
const char* TransformInfo_getName(TransformInfo* this);
Any* TransformInfo_getObject(TransformInfo* this);
const char* TransformInfo_getObjectFile(TransformInfo* this);
const char* TransformInfo_getTemplate(TransformInfo* this);
const char* TransformInfo_getTemplateFile(TransformInfo* this);
AbPath* TransformInfo_getTemplateFilePath(TransformInfo* this);
AbPath* TransformInfo_getObjectConfigFilePath(TransformInfo* this);
AbPath* TransformInfo_getDataFilePath(TransformInfo* this);
const char* TransformInfo_getObjectConfigFile(TransformInfo* this);
static const char* TransformInfo_getData(TransformInfo* this);
Document* TransformInfo_getDataDocument(TransformInfo* this);
const char* TransformInfo_getDataFile(TransformInfo* this);
HashMap* TransformInfo_toHashMap(TransformInfo* this);
BasicArrayList* TransformInfo_toVector(TransformInfo* this);
Any* TransformInfo_getKey(TransformInfo* this);
void TransformInfo_setChild(TransformInfo* this);
bool TransformInfo_isChild(TransformInfo* this);
TransformInfoObjectConfigInterface* TransformInfo_getObjectConfigInterface(TransformInfo* this);
void TransformInfo_setObjectConfigInterface(TransformInfo* this, TransformInfoObjectConfigInterface* objectConfigInterface);

static void TransformInfo_initFields(TransformInfo* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    this->isChild = false;
    this->name = nullptr;
    this->storeName = nullptr;
    this->objectFileName = nullptr;
    this->anyType = nullptr;
    this->objectConfigFileName = nullptr;
    this->objectConfigInterface = nullptr;
    this->template = nullptr;
    this->templateFileName = nullptr;
    this->dataFileName = nullptr;
    this->data = StringUtil_getInstance()->EMPTY_STRING;
}


void TransformInfo_init(TransformInfo* this) {
    TransformInfo_initFields(this);
}

TransformInfo* TransformInfo_new(void) {
    TransformInfo* this = calloc(1, sizeof(TransformInfo));
    TransformInfo_init(this);
    return this;
}


void TransformInfo_init1(TransformInfo* this, const char* name) {
    TransformInfo_initFields(this);
        TransformInfo_setName(this, name);
}

TransformInfo* TransformInfo_new1(const char* name) {
    TransformInfo* this = calloc(1, sizeof(TransformInfo));
    TransformInfo_init1(this, name);
    return this;
}


void TransformInfo_init5(TransformInfo* this, const char* name, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName, const char* dataFileName) {
    TransformInfo_initFields(this);
        TransformInfo_setName(this, name);
        TransformInfo_setObjectFile(this, objectFileName);
        TransformInfo_setObjectConfigFile(this, objectConfigFileName);
        TransformInfo_setTemplateFile(this, templateFileName);
        TransformInfo_setDataFile(this, dataFileName);
}

TransformInfo* TransformInfo_new5(const char* name, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName, const char* dataFileName) {
    TransformInfo* this = calloc(1, sizeof(TransformInfo));
    TransformInfo_init5(this, name, objectFileName, objectConfigFileName, templateFileName, dataFileName);
    return this;
}


// throws Exception
void TransformInfo_override(TransformInfo* this, HashMap* hashMap) {
        TransformInfoData* transformInfoData = TransformInfoData_getInstance();
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        const char* aName = ((const char*) HashMap_get(hashMap, transformInfoData->NAME));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aName)) {
            this->name = aName;
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "TransformInfo properties overridden for: ");
            StringMaker_append(stringBuffer, TransformInfo_getName(this));
            StringMaker_append(stringBuffer, "\n properties: ");
            StringMaker_append(stringBuffer, HashMap_toString(hashMap));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "override(HashMap hashMap)");
        }
        const char* aStoreName = ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->NAME));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aStoreName)) {
            this->storeName = aStoreName;
        }
        const char* aObjectFileName = ((const char*) HashMap_get(hashMap, transformInfoData->OBJECTFILENAME));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aObjectFileName)) {
            this->objectFileName = aObjectFileName;
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
        StringMaker_append(stringBuffer, this->storeName);
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        AbPath* fileAbPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
        const char* aObject = ((const char*) HashMap_get(hashMap, transformInfoData->OBJECT));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aObject)) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("TransformInfo override view Object for: ", TransformInfo_getName(this)), this, "override(HashMap hashMap)");
            }
            const char* fileDataString = CryptFileReader_get(CryptFileReader_new(TransformInfoObjectData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectData_getInstance()->ENCRYPTED_EXTENSION), AbPath_new(AbPath_toString(fileAbPath), aObject));
            if (fileDataString != nullptr) {
                this->anyType = fileDataString;
            }
        }
        if (!StringValidationUtil_isEmpty(stringValidationUtil, ((const char*) HashMap_get(hashMap, transformInfoData->OBJECTCONFIG)))) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("TransformInfo override ObjectConfig for: ", TransformInfo_getName(this)), this, "override(HashMap hashMap)");
            }
            TransformInfo_setObjectConfig(this, ((const char*) HashMap_get(hashMap, transformInfoData->OBJECTCONFIG)));
        }
        const char* objectConfigFileName = ((const char*) HashMap_get(hashMap, transformInfoData->OBJECTCONFIGFILENAME));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, objectConfigFileName)) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("TransformInfo override ObjectConfig File for: ", TransformInfo_getName(this)), this, "override(HashMap hashMap)");
            }
            TransformInfo_setObjectConfigFile(this, objectConfigFileName);
        }
        const char* type = ((const char*) HashMap_get(hashMap, OutputTypeData_getInstance()->NAME));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, type)) {
            if (TransformInfo_getObjectConfigInterface(this) == nullptr) {
                TransformInfo_setObjectConfigInterface(this, TransformInfoObjectConfig_new(this));
            }
            JAVA_CALL(TransformInfo_getObjectConfigInterface(this), setOutputTypeName, type);
        }
        const char* aTemplateFileName = ((const char*) HashMap_get(hashMap, transformInfoData->TEMPLATEFILENAME));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aTemplateFileName)) {
            this->templateFileName = aTemplateFileName;
        }
        const char* aTemplate = ((const char*) HashMap_get(hashMap, transformInfoData->TEMPLATE));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aTemplate)) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("TransformInfo override Template for: ", TransformInfo_getName(this)), this, "override(HashMap hashMap)");
            }
            const char* fileDataString = CryptFileReader_get(CryptFileReader_new(TransformInfoTemplateData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoTemplateData_getInstance()->ENCRYPTED_EXTENSION), AbPath_new(AbPath_toString(fileAbPath), aTemplate));
            if (!StringValidationUtil_isEmpty(stringValidationUtil, fileDataString)) {
                this->template = fileDataString;
            }
        }
        const char* aDataFileName = ((const char*) HashMap_get(hashMap, transformInfoData->DATAFILENAME));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aDataFileName)) {
            this->dataFileName = aDataFileName;
        }
        const char* aData = ((const char*) HashMap_get(hashMap, transformInfoData->DATA));
        if (!StringValidationUtil_isEmpty(stringValidationUtil, aData)) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("TransformInfo override Data for: ", TransformInfo_getName(this)), this, "override(HashMap hashMap)");
            }
            const char* fileDataString = CryptFileReader_get(CryptFileReader_new(TransformInfoDataData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoDataData_getInstance()->ENCRYPTED_EXTENSION), AbPath_new(AbPath_toString(fileAbPath), aData));
            if (!StringValidationUtil_isEmpty(stringValidationUtil, fileDataString)) {
                this->data = fileDataString;
            }
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Name: ");
            StringMaker_append(stringBuffer, aName);
            StringMaker_append(stringBuffer, "\nTemp Object File: ");
            StringMaker_append(stringBuffer, aObject);
            StringMaker_append(stringBuffer, "\nTemp Object Config File: ");
            StringMaker_append(stringBuffer, JAVA_CALL(TransformInfo_getObjectConfigFilePath(this), toString));
            StringMaker_append(stringBuffer, "\nTemp Template File: ");
            StringMaker_append(stringBuffer, aTemplate);
            StringMaker_append(stringBuffer, "\nTemp Data File: ");
            StringMaker_append(stringBuffer, aData);
            StringMaker_append(stringBuffer, "\nStore Name: ");
            StringMaker_append(stringBuffer, aStoreName);
            StringMaker_append(stringBuffer, "\nObjectFile: ");
            StringMaker_append(stringBuffer, TransformInfo_getObjectFile(this));
            StringMaker_append(stringBuffer, "->TransformInfo");
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "TransformInfoInterface(HashMap)");
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
            LogUtil_putF(this->logUtil, TransformInfo_log(this), this, "override");
        }
}


const char* TransformInfo_log(TransformInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Name: ");
        StringMaker_append(stringBuffer, this->name);
        StringMaker_append(stringBuffer, "\nObject File: ");
        StringMaker_append(stringBuffer, this->objectFileName);
        StringMaker_append(stringBuffer, "\nObject Config File Path: ");
        StringMaker_append(stringBuffer, TransformInfo_getObjectConfigFile(this));
        StringMaker_append(stringBuffer, "\nTemplate File: ");
        StringMaker_append(stringBuffer, this->templateFileName);
        StringMaker_append(stringBuffer, "\nData File: ");
        StringMaker_append(stringBuffer, this->dataFileName);
        StringMaker_append(stringBuffer, "\nStore Name: ");
        StringMaker_append(stringBuffer, this->storeName);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, TransformInfo_getObjectFile(this));
        StringMaker_append(stringBuffer, "->TransformInfo");
        StringMaker_append(stringBuffer, "TransformInfoInterface(HashMap)");
        return StringMaker_toString(stringBuffer);
}


void TransformInfo_setName(TransformInfo* this, const char* value) {
        this->name = value;
}


void TransformInfo_setStoreName(TransformInfo* this, const char* value) {
        this->storeName = value;
}


const char* TransformInfo_getStoreName(TransformInfo* this) {
        return this->storeName;
}


void TransformInfo_setObject(TransformInfo* this, Any* anyType) {
        this->anyType = anyType;
}


void TransformInfo_setObjectFile(TransformInfo* this, const char* value) {
        this->objectFileName = value;
}


void TransformInfo_setTemplate(TransformInfo* this, const char* value) {
        this->template = value;
}


void TransformInfo_setTemplateFile(TransformInfo* this, const char* value) {
        this->templateFileName = value;
}


// throws Exception
void TransformInfo_setObjectConfigFileName(TransformInfo* this, const char* value) {
        this->objectConfigFileName = value;
}


// throws Exception
void TransformInfo_setObjectConfigFile(TransformInfo* this, const char* value) {
        this->objectConfigFileName = value;
        TransformInfo_setObjectConfigInterface(this, TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory_getInstance(), this->abeClientInformation, this, TransformInfo_getObjectConfigFilePath(this)));
}


// throws Exception
void TransformInfo_setObjectConfig(TransformInfo* this, const char* value) {
        Document* document = DomDocumentHelper_create(value);
        TransformInfo_setObjectConfigInterface(this, TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory_getInstance(), this->abeClientInformation, this, document));
}


void TransformInfo_setDataFile(TransformInfo* this, const char* value) {
        this->dataFileName = value;
}


void TransformInfo_setData(TransformInfo* this, const char* value) {
        this->data = value;
}


const char* TransformInfo_getName(TransformInfo* this) {
        return this->name;
}


Any* TransformInfo_getObject(TransformInfo* this) {
        return this->anyType;
}


const char* TransformInfo_getObjectFile(TransformInfo* this) {
        return this->objectFileName;
}


const char* TransformInfo_getTemplate(TransformInfo* this) {
        return this->template;
}


const char* TransformInfo_getTemplateFile(TransformInfo* this) {
        return this->templateFileName;
}


// throws Exception
AbPath* TransformInfo_getTemplateFilePath(TransformInfo* this) {
        return AbFilePath_new(TransformInfo_getTemplateFile(this));
}


// throws Exception
AbPath* TransformInfo_getObjectConfigFilePath(TransformInfo* this) {
        return AbFilePath_new(TransformInfo_getObjectConfigFile(this));
}


// throws Exception
AbPath* TransformInfo_getDataFilePath(TransformInfo* this) {
        return AbFilePath_new(TransformInfo_getDataFile(this));
}


const char* TransformInfo_getObjectConfigFile(TransformInfo* this) {
        return this->objectConfigFileName;
}


static const char* TransformInfo_getData(TransformInfo* this) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        const char* dataFileString = TransformInfo_getDataFile(this);
        if (!StringValidationUtil_isEmpty(stringValidationUtil, dataFileString)) {
            JAVA_TRY {
                const char* fileData = CryptFileReader_get(CryptFileReader_new(TransformInfoDataData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoDataData_getInstance()->ENCRYPTED_EXTENSION), TransformInfo_getDataFilePath(this));
                if (!StringValidationUtil_isEmpty(stringValidationUtil, this->data)) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                        LogUtil_putF(this->logUtil, java_concat("Data File overriding existing data: ", java_string_of(TransformInfo_getDataFilePath(this))), this, "getData()");
                    }
                }
                this->data = fileData;
            } JAVA_CATCH(Exception, e) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                    LogUtil_put(this->logUtil, java_concat("Could Not Load Data from: ", java_string_of(TransformInfo_getDataFile(this))), this, "getData()", e);
                }
            } JAVA_END_TRY;
        }
        JAVA_TRY {
            if (!StringValidationUtil_isEmpty(stringValidationUtil, this->data)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                    LogUtil_putF(this->logUtil, java_concat("Data: ", XmlDocumentHelper_toString(DomDocumentHelper_create(this->data))), this, "getData()");
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "Name: ");
                    StringMaker_append(stringBuffer, this->name);
                    StringMaker_append(stringBuffer, "\nEmpty Data For: ");
                    StringMaker_append(stringBuffer, dataFileString);
                    StringMaker_append(stringBuffer, "\nPath: ");
                    StringMaker_append(stringBuffer, JAVA_CALL(TransformInfo_getDataFilePath(this), toFileSystemString));
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "getData()");
                    }
                }
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, java_concat("Could Not Preview Data: ", this->data), this, "getData()", e);
            }
        } JAVA_END_TRY;
        return this->data;
}


// throws Exception
Document* TransformInfo_getDataDocument(TransformInfo* this) {
        const char* localData = TransformInfo_getData(this);
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, localData)) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_putF(this->logUtil, "No Data So Creating New Document", this, "getDataDocument()");
            }
            return DomDocumentHelper_create();
        } else {
            Document* document = DomDocumentHelper_create(localData);
            return document;
        }
}


const char* TransformInfo_getDataFile(TransformInfo* this) {
        return this->dataFileName;
}


HashMap* TransformInfo_toHashMap(TransformInfo* this) {
        TransformInfoData* transformInfoData = TransformInfoData_getInstance();
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, transformInfoData->NAME, this->name);
        HashMap_put(hashMap, StoreFrontData_getInstance()->NAME, this->storeName);
        HashMap_put(hashMap, transformInfoData->OBJECTFILENAME, this->objectFileName);
        HashMap_put(hashMap, transformInfoData->OBJECT, this->anyType);
        HashMap_put(hashMap, transformInfoData->OBJECTCONFIGFILENAME, TransformInfo_getObjectConfigFile(this));
        HashMap_put(hashMap, transformInfoData->OBJECTCONFIG, Encoder_encode(java_string_getBytes(JAVA_CALL(TransformInfo_getObjectConfigInterface(this), toString))));
        HashMap_put(hashMap, transformInfoData->TEMPLATEFILENAME, this->templateFileName);
        HashMap_put(hashMap, transformInfoData->TEMPLATE, this->template);
        HashMap_put(hashMap, transformInfoData->DATAFILENAME, this->dataFileName);
        HashMap_put(hashMap, transformInfoData->DATA, Encoder_encode(java_string_getBytes(this->data)));
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        HashMap_put(hashMap, EntryData_getInstance()->LASTMODIFIED, time);
        return hashMap;
}


BasicArrayList* TransformInfo_toVector(TransformInfo* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, this->name);
        BasicArrayList_add(vector, this->storeName);
        BasicArrayList_add(vector, this->objectFileName);
        BasicArrayList_add(vector, this->anyType);
        BasicArrayList_add(vector, TransformInfo_getObjectConfigFile(this));
        BasicArrayList_add(vector, Encoder_encode(java_string_getBytes(JAVA_CALL(TransformInfo_getObjectConfigInterface(this), toString))));
        BasicArrayList_add(vector, this->templateFileName);
        BasicArrayList_add(vector, this->template);
        BasicArrayList_add(vector, this->dataFileName);
        BasicArrayList_add(vector, Encoder_encode(java_string_getBytes(this->data)));
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        BasicArrayList_add(vector, time);
        BasicArrayList_add(vector, time);
        return vector;
}


Any* TransformInfo_getKey(TransformInfo* this) {
        return ((Any*) TransformInfo_getName(this));
}


void TransformInfo_setChild(TransformInfo* this) {
        this->isChild = true;
}


bool TransformInfo_isChild(TransformInfo* this) {
        return this->isChild;
}


TransformInfoObjectConfigInterface* TransformInfo_getObjectConfigInterface(TransformInfo* this) {
        return this->objectConfigInterface;
}


void TransformInfo_setObjectConfigInterface(TransformInfo* this, TransformInfoObjectConfigInterface* objectConfigInterface) {
        this->objectConfigInterface = objectConfigInterface;
}

