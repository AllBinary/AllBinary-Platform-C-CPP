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
// package org.allbinary.business.backup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h"
#include "org/allbinary/globals/PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/file/zip/ZipFileUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct BlisketBackupFactory BlisketBackupFactory;
struct BlisketBackupFactory {
    LogUtil* logUtil;
    StringUtil* stringUtil;
    CommonStrings* commonStrings;
    Directory* directory;
};

static BlisketBackupFactory* BlisketBackupFactory_instance;

BlisketBackupFactory* BlisketBackupFactory_new(void);
BlisketBackupFactory* BlisketBackupFactory_getInstance(void);
static BasicArrayList* BlisketBackupFactory_getFileBasicArrayList(BlisketBackupFactory* this, const char* pathString);
void BlisketBackupFactory_backup(BlisketBackupFactory* this);
void BlisketBackupFactory_backupViews(BlisketBackupFactory* this);
void BlisketBackupFactory_backupResources(BlisketBackupFactory* this);
void BlisketBackupFactory_backupJsps(BlisketBackupFactory* this);
void BlisketBackupFactory_backup(BlisketBackupFactory* this, BasicArrayList* fileBasicArrayList, const char* zipFile);

// Static fields with runtime initializers: call this once at startup
void BlisketBackupFactory_staticInit(void) {
    BlisketBackupFactory_instance = BlisketBackupFactory_new();
}

static void BlisketBackupFactory_initFields(BlisketBackupFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->directory = Directory_getInstance();
}

void BlisketBackupFactory_init(BlisketBackupFactory* this) {
    BlisketBackupFactory_initFields(this);
}

BlisketBackupFactory* BlisketBackupFactory_new(void) {
    BlisketBackupFactory* this = calloc(1, sizeof(BlisketBackupFactory));
    BlisketBackupFactory_init(this);
    return this;
}


BlisketBackupFactory* BlisketBackupFactory_getInstance(void) {
        return BlisketBackupFactory_instance;
}


// throws Exception
static BasicArrayList* BlisketBackupFactory_getFileBasicArrayList(BlisketBackupFactory* this, const char* pathString) {
        AbPath* path = AbPath_new(pathString, this->stringUtil->EMPTY_STRING);
        AbFile* file = AbFile_createAbFileFromAbPath(path);
        return Directory_search(this->directory, file, true);
}


void BlisketBackupFactory_backup(BlisketBackupFactory* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "backup()");
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
            StringMaker_append(stringBuffer, JAVA_CALL(_PATH_GLOBALS, getInstance)->BACKUP_PATH);
            const char* backupPath = StringMaker_toString(stringBuffer);
            AbPath* path = AbPath_new(backupPath, this->stringUtil->EMPTY_STRING);
            BasicArrayList* fileBasicArrayList = BlisketBackupFactory_getFileBasicArrayList(this, backupPath);
            BlisketBackupFactory_backup(this, fileBasicArrayList, java_concat(java_string_of(AbPath_toFileSystemString(path)), "backup.zip"));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backup()", e);
        } JAVA_END_TRY;
}


void BlisketBackupFactory_backupViews(BlisketBackupFactory* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "backupViews()");
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
            StringMaker_append(stringBuffer, JAVA_CALL(_PATH_GLOBALS, getInstance)->BACKUP_PATH);
            const char* backupPath = StringMaker_toString(stringBuffer);
            AbPath* path = AbPath_new(backupPath, this->stringUtil->EMPTY_STRING);
            BasicArrayList* fileBasicArrayList = BasicArrayListD_new();
            StoreFrontsEntity* storeFrontsEntity = StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance());
            BasicArrayList* storeFrontNamesBasicArrayList = StoreFrontsEntity_getStoreFrontNames(storeFrontsEntity);
            int32_t size = BasicArrayList_size(storeFrontNamesBasicArrayList);
            const char* nextStore = nullptr;
            const char* viewsPath = nullptr;
            for (int32_t index = 0; index < size; index++) {
                nextStore = ((const char*) BasicArrayList_get(storeFrontNamesBasicArrayList, index));
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
                StringMaker_append(stringBuffer, JAVA_CALL(_PATH_GLOBALS, getInstance)->VIEWS_PATH);
                StringMaker_append(stringBuffer, nextStore);
                viewsPath = StringMaker_toString(stringBuffer);
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, "Backup Store Views: ");
                StringMaker_append(stringBuffer, nextStore);
                StringMaker_append(stringBuffer, " from: ");
                StringMaker_append(stringBuffer, viewsPath);
                PreLogUtil_put(StringMaker_toString(stringBuffer), this, "backupViews()");
                BasicArrayList_addAllList(fileBasicArrayList, BlisketBackupFactory_getFileBasicArrayList(this, viewsPath));
            }
            BlisketBackupFactory_backup(this, fileBasicArrayList, java_concat(java_string_of(AbPath_toFileSystemString(path)), "backupViews.zip"));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backupViews()", e);
        } JAVA_END_TRY;
}


void BlisketBackupFactory_backupResources(BlisketBackupFactory* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "backupResources()");
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
            StringMaker_append(stringBuffer, JAVA_CALL(_PATH_GLOBALS, getInstance)->BACKUP_PATH);
            const char* backupPath = StringMaker_toString(stringBuffer);
            AbPath* path = AbPath_new(backupPath, this->stringUtil->EMPTY_STRING);
            BasicArrayList* fileBasicArrayList = BasicArrayListD_new();
            StoreFrontsEntity* storeFrontsEntity = StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance());
            BasicArrayList* storeFrontNamesBasicArrayList = StoreFrontsEntity_getStoreFrontNames(storeFrontsEntity);
            int32_t size = BasicArrayList_size(storeFrontNamesBasicArrayList);
            const char* nextStore = nullptr;
            StoreFrontInterface* storeFrontInterface = nullptr;
            const char* resourcesPath = nullptr;
            for (int32_t index = 0; index < size; index++) {
                nextStore = ((const char*) BasicArrayList_get(storeFrontNamesBasicArrayList, index));
                storeFrontInterface = StoreFrontsEntity_getStoreFrontInterface(storeFrontsEntity, nextStore);
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
                StringMaker_append(stringBuffer, StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface));
                StringMaker_append(stringBuffer, StoreFrontInterface_getCategoryPath(storeFrontInterface));
                resourcesPath = StringMaker_toString(stringBuffer);
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, "Backup Store Resrouces: ");
                StringMaker_append(stringBuffer, nextStore);
                StringMaker_append(stringBuffer, " from: ");
                StringMaker_append(stringBuffer, resourcesPath);
                PreLogUtil_put(StringMaker_toString(stringBuffer), this, "backupResources()");
                BasicArrayList_addAllList(fileBasicArrayList, BlisketBackupFactory_getFileBasicArrayList(this, resourcesPath));
            }
            BlisketBackupFactory_backup(this, fileBasicArrayList, java_concat(java_string_of(AbPath_toFileSystemString(path)), "backupResources.zip"));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backupResources()", e);
        } JAVA_END_TRY;
}


void BlisketBackupFactory_backupJsps(BlisketBackupFactory* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "backupJsps()");
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
            StringMaker_append(stringBuffer, JAVA_CALL(_PATH_GLOBALS, getInstance)->BACKUP_PATH);
            const char* backupPath = StringMaker_toString(stringBuffer);
            AbPath* path = AbPath_new(backupPath, this->stringUtil->EMPTY_STRING);
            BasicArrayList* fileBasicArrayList = BasicArrayListD_new();
            StoreFrontsEntity* storeFrontsEntity = StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance());
            BasicArrayList* storeFrontNamesBasicArrayList = StoreFrontsEntity_getStoreFrontNames(storeFrontsEntity);
            int32_t size = BasicArrayList_size(storeFrontNamesBasicArrayList);
            const char* nextStore = nullptr;
            for (int32_t index = 0; index < size; index++) {
                nextStore = ((const char*) BasicArrayList_get(storeFrontNamesBasicArrayList, index));
                PreLogUtil_put(java_concat("Backup Store Jsps: ", nextStore), this, "backupJsps()");
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
                StringMaker_append(stringBuffer, nextStore);
                BasicArrayList_addAllList(fileBasicArrayList, BlisketBackupFactory_getFileBasicArrayList(this, StringMaker_toString(stringBuffer)));
            }
            BlisketBackupFactory_backup(this, fileBasicArrayList, java_concat(java_string_of(AbPath_toFileSystemString(path)), "backupJsps.zip"));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backupJsps()", e);
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
void BlisketBackupFactory_backup(BlisketBackupFactory* this, BasicArrayList* fileBasicArrayList, const char* zipFile) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "ZipFile: ");
            StringMaker_append(stringBuffer, zipFile);
            StringMaker_append(stringBuffer, " BasicArrayList: ");
            StringMaker_appendint(stringBuffer, BasicArrayList_size(fileBasicArrayList));
            PreLogUtil_put(java_concat("Creating Backup Zip File: ", StringMaker_toString(stringBuffer)), this, "backup()");
            ZipFileUtil_create(ZipFileUtil_getInstance(), zipFile, fileBasicArrayList);
            LogUtil_putF(this->logUtil, "Created Backup Zip File", this, "backup()");
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backup()", e);
        } JAVA_END_TRY;
}

