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
// package views.admin.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayInputStream.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/file/upload/media/UploadMediaSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/media/MediaData.h"
#include "org/allbinary/logic/visual/media/MediaTypeData.h"
#include "org/allbinary/logic/visual/media/MediaUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InventoryUploadMediaUtil InventoryUploadMediaUtil;
struct InventoryUploadMediaUtil {
    LogUtil* logUtil;
    MediaUtil* mediaUtil;
    int32_t LARGEWIDTH;
    int32_t LARGEHEIGHT;
    int32_t MEDIUMWIDTH;
    int32_t MEDIUMHEIGHT;
    int32_t SMALLWIDTH;
    int32_t SMALLHEIGHT;
    const char* SMALL;
    const char* MEDIUM;
    const char* LARGE;
    StoreFrontInterface* storeFrontInterface;
    ItemInterface* itemInterface;
};


InventoryUploadMediaUtil* InventoryUploadMediaUtil_new(StoreFrontInterface* storeFrontInterface, ItemInterface* itemInterface);

void InventoryUploadMediaUtil_init(InventoryUploadMediaUtil* this, StoreFrontInterface* storeFrontInterface, ItemInterface* itemInterface);
ItemInterface* InventoryUploadMediaUtil_saveFiles(InventoryUploadMediaUtil* this, int8_t* byteArray, const char* fileName, MediaData* mediaData);
static void InventoryUploadMediaUtil_setFileNames(InventoryUploadMediaUtil* this, const char* fileName);

static void InventoryUploadMediaUtil_initFields(InventoryUploadMediaUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->mediaUtil = MediaUtil_getInstance();
    this->LARGEWIDTH = 1024;
    this->LARGEHEIGHT = 1024;
    this->MEDIUMWIDTH = 256;
    this->MEDIUMHEIGHT = 256;
    this->SMALLWIDTH = 128;
    this->SMALLHEIGHT = 128;
    this->SMALL = "Small";
    this->MEDIUM = "Medium";
    this->LARGE = "Large";
    
    
}


void InventoryUploadMediaUtil_init(InventoryUploadMediaUtil* this, StoreFrontInterface* storeFrontInterface, ItemInterface* itemInterface) {
    InventoryUploadMediaUtil_initFields(this);
        this->storeFrontInterface = storeFrontInterface;
        this->itemInterface = itemInterface;
}

InventoryUploadMediaUtil* InventoryUploadMediaUtil_new(StoreFrontInterface* storeFrontInterface, ItemInterface* itemInterface) {
    InventoryUploadMediaUtil* this = calloc(1, sizeof(InventoryUploadMediaUtil));
    InventoryUploadMediaUtil_init(this, storeFrontInterface, itemInterface);
    return this;
}


// throws Exception
ItemInterface* InventoryUploadMediaUtil_saveFiles(InventoryUploadMediaUtil* this, int8_t* byteArray, const char* fileName, MediaData* mediaData) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, java_concat("Start FileName: ", fileName), this, "saveFiles()");
        }
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), fileName)) {
            java_throw(java_exception_new("Exception", "Image File Name Was Null"));
        }
        FileUtil* fileUtil = FileUtil_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
        StringMaker_append(stringBuffer, StoreFrontInterface_getCurrentHostNamePath(this->storeFrontInterface));
        StringMaker_append(stringBuffer, ItemInterface_getCategory(this->itemInterface));
        const char* fullPath = StringMaker_toString(stringBuffer);
        AbFile* imageDirectoryFile = AbFile_createAbFile(fullPath);
        if (!AbFile_isDirectory(imageDirectoryFile)) {
            java_throw(java_exception_new("Exception", "Unable to save file to non existant directory"));
        }
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, fullPath);
        StringMaker_append(stringBuffer, fileName);
        StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
        StringMaker_append(stringBuffer, MediaData_getName(mediaData));
        AbFile* originalImageFile = AbFile_createAbFile(StringMaker_toString(stringBuffer));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, java_concat("Saving Original Image: ", java_string_of(originalImageFile)), this, "saveFiles()");
        }
        AbFile_createNewFile(originalImageFile);
        FileUtil_write(fileUtil, ByteArrayInputStream_new(byteArray), originalImageFile);
        UploadMediaSingleton* uploadMedia = UploadMediaSingleton_getInstance();
        bool isMediaSupported = UploadMediaSingleton_isWriterSupported(uploadMedia, MediaData_getName(mediaData)) || UploadMediaSingleton_isReaderSupported(uploadMedia, MediaData_getName(mediaData));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "Is Image Type: ");
            StringMaker_append(stringBuffer, MediaData_getName(mediaData));
            StringMaker_append(stringBuffer, " supported: ");
            StringMaker_appendboolean(stringBuffer, isMediaSupported);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "saveFiles()");
        }
        MediaData* defaultMediaData = MediaData_getDefault();
        InventoryUploadMediaUtil_setFileNames(this, fileName);
        if (isMediaSupported) {
            bool isMediaResizable = UploadMediaSingleton_isWriterMedia(uploadMedia, MediaData_getName(mediaData), MediaTypeData_getInstance()->RESIZABLE_MEDIA);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, "Is ");
                StringMaker_append(stringBuffer, MediaData_toString(mediaData));
                StringMaker_append(stringBuffer, " Image Resize Supported:");
                StringMaker_appendboolean(stringBuffer, UploadMediaSingleton_isSupported(uploadMedia, MediaData_getName(mediaData)));
                StringMaker_append(stringBuffer, " WriterMedia: ");
                StringMaker_appendboolean(stringBuffer, isMediaResizable);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "saveFiles()");
            }
            if (isMediaResizable) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                    LogUtil_putF(this->logUtil, java_concat("Saving Small Image: ", java_string_of(ItemInterface_getSmallImage(this->itemInterface))), this, "saveFiles()");
                }
                MediaUtil_saveImageFile(this->mediaUtil, originalImageFile, ItemInterface_getSmallImage(this->itemInterface), fullPath, mediaData, this->SMALLWIDTH, this->SMALLHEIGHT);
                MediaUtil_saveImageFile(this->mediaUtil, originalImageFile, ItemInterface_getMediumImage(this->itemInterface), fullPath, mediaData, this->MEDIUMWIDTH, this->MEDIUMHEIGHT);
                MediaUtil_saveImageFile(this->mediaUtil, originalImageFile, ItemInterface_getLargeImage(this->itemInterface), fullPath, mediaData, this->LARGEWIDTH, this->LARGEHEIGHT);
            } else {
                bool isConvertable = MediaData_isConvertableTo(mediaData, defaultMediaData);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, "Converting: ");
                    StringMaker_append(stringBuffer, MediaData_getName(defaultMediaData));
                    StringMaker_append(stringBuffer, " into ");
                    StringMaker_append(stringBuffer, MediaData_getName(mediaData));
                    StringMaker_append(stringBuffer, " if Convertable is it: ");
                    StringMaker_appendboolean(stringBuffer, isConvertable);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "saveFiles()");
                }
                if (isConvertable) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                        LogUtil_putF(this->logUtil, java_concat("Saving Small Image: ", java_string_of(ItemInterface_getSmallImage(this->itemInterface))), this, "saveFiles()");
                    }
                    MediaUtil_saveImageFile(this->mediaUtil, originalImageFile, ItemInterface_getSmallImage(this->itemInterface), fullPath, defaultMediaData, this->SMALLWIDTH, this->SMALLHEIGHT);
                    MediaUtil_saveImageFile(this->mediaUtil, originalImageFile, ItemInterface_getMediumImage(this->itemInterface), fullPath, defaultMediaData, this->MEDIUMWIDTH, this->MEDIUMHEIGHT);
                    MediaUtil_saveImageFile(this->mediaUtil, originalImageFile, ItemInterface_getLargeImage(this->itemInterface), fullPath, defaultMediaData, this->LARGEWIDTH, this->LARGEHEIGHT);
                } else {
                    AbFile* smallImageFile = AbFile_createAbFile(ItemInterface_getSmallImage(this->itemInterface));
                    AbFile_createNewFile(smallImageFile);
                    FileUtil_write(fileUtil, ByteArrayInputStream_new(byteArray), smallImageFile);
                    AbFile* mediumImageFile = AbFile_createAbFile(ItemInterface_getMediumImage(this->itemInterface));
                    AbFile_createNewFile(smallImageFile);
                    FileUtil_write(fileUtil, ByteArrayInputStream_new(byteArray), mediumImageFile);
                    AbFile* largeImageFile = AbFile_createAbFile(ItemInterface_getSmallImage(this->itemInterface));
                    AbFile_createNewFile(largeImageFile);
                    FileUtil_write(fileUtil, ByteArrayInputStream_new(byteArray), largeImageFile);
                }
            }
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->END, this, "saveFiles()");
        }
        return this->itemInterface;
}


static void InventoryUploadMediaUtil_setFileNames(InventoryUploadMediaUtil* this, const char* fileName) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, ItemInterface_getId(this->itemInterface));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
        StringMaker_append(stringBuffer, JAVA_CALL(MediaData_getDefault(), getName));
        const char* END = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, fileName);
        StringMaker_append(stringBuffer, this->SMALL);
        StringMaker_append(stringBuffer, END);
        const char* newImageFileName = StringMaker_toString(stringBuffer);
        ItemInterface_setSmallImage(this->itemInterface, newImageFileName);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, fileName);
        StringMaker_append(stringBuffer, this->MEDIUM);
        StringMaker_append(stringBuffer, END);
        newImageFileName = StringMaker_toString(stringBuffer);
        ItemInterface_setMediumImage(this->itemInterface, newImageFileName);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, fileName);
        StringMaker_append(stringBuffer, this->LARGE);
        StringMaker_append(stringBuffer, END);
        newImageFileName = StringMaker_toString(stringBuffer);
        ItemInterface_setLargeImage(this->itemInterface, newImageFileName);
}

