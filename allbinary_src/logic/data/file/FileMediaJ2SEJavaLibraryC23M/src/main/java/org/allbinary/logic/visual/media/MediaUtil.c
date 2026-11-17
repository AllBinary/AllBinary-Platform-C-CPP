// Generated Code Do Not Modify
// package org.allbinary.logic.visual.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
// #include "java/awt/image/RenderedImage.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/string/CommonLabels.h"

//import com.sun.imageio.plugins.common.ImageUtil;
typedef struct MediaUtil MediaUtil;
struct MediaUtil {
    LogUtil* logUtil;
};

static MediaUtil* MediaUtil_instance;

MediaUtil* MediaUtil_new(void);
MediaUtil* MediaUtil_getInstance(void);

void MediaUtil_init(MediaUtil* this);
void MediaUtil_saveImageFile(MediaUtil* this, AbFile* originalImageFile, const char* newImageFileName, const char* category, MediaData* mediaData, int32_t newWidth, int32_t newHeight);
static HashMap* MediaUtil_getImageBufferPropertyHashMap(BufferedImage* bufferedImage);

// Static fields with runtime initializers: call this once at startup
void MediaUtil_staticInit(void) {
    MediaUtil_instance = MediaUtil_new();
}

static void MediaUtil_initFields(MediaUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


MediaUtil* MediaUtil_getInstance(void) {
        return MediaUtil_instance;
}


void MediaUtil_init(MediaUtil* this) {
    MediaUtil_initFields(this);
}

MediaUtil* MediaUtil_new(void) {
    MediaUtil* this = calloc(1, sizeof(MediaUtil));
    MediaUtil_init(this);
    return this;
}


// throws Exception
void MediaUtil_saveImageFile(MediaUtil* this, AbFile* originalImageFile, const char* newImageFileName, const char* category, MediaData* mediaData, int32_t newWidth, int32_t newHeight) {
        if (originalImageFile == nullptr || !AbFile_isFile(originalImageFile)) {
            java_throw(java_exception_new("Exception", "Original Image File Does Not Exist."));
        }
        BufferedImage* bufferedImage = ImageIOUtil_read(originalImageFile);
        if (bufferedImage == nullptr) {
            java_throw(java_exception_new("Exception", "Unable to find ImageReader for this file."));
        }
        if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->VIEW)) {
            HashMap* hashMap = MediaUtil_getImageBufferPropertyHashMap(this, bufferedImage);
            LogUtil_putF(this->logUtil, java_concat("Image Properties: ", HashMap_toString(hashMap)), this, "saveImageFile()");
        }
        AbFile* imageFile = AbFile_createAbFile(java_concat(category, newImageFileName));
        AbFile_createNewFile(imageFile);
        ImageUtil* imageUtil = ImageUtil_getInstance();
        BufferedImage* newBufferedImage = ImageUtil_createBufferedImageForSave(imageUtil, bufferedImage, newWidth, newHeight);
        bool isWritten = ImageIOUtil_write(((RenderedImage*) newBufferedImage), MediaData_getName(mediaData), imageFile);
        if (!isWritten) {
            java_throw(java_exception_new("Exception", "Unable to write."));
        }
        if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->VIEW)) {
            CommonLabels* commonLabels = CommonLabels_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Get Path: ");
            StringMaker_append(stringBuffer, AbFile_getPath(originalImageFile));
            StringMaker_append(stringBuffer, "\nNewImageFileName: ");
            StringMaker_append(stringBuffer, newImageFileName);
            StringMaker_append(stringBuffer, "\nCategory: ");
            StringMaker_append(stringBuffer, category);
            StringMaker_append(stringBuffer, "\nSave File Type: ");
            StringMaker_append(stringBuffer, MediaData_getName(mediaData));
            JAVA_CALL(StringMaker_append(stringBuffer, "\nNew"), append, commonLabels->WIDTH_LABEL);
            StringMaker_appendint(stringBuffer, newWidth);
            JAVA_CALL(StringMaker_append(stringBuffer, "\nNew"), append, commonLabels->HEIGHT_LABEL);
            StringMaker_appendint(stringBuffer, newHeight);
            StringMaker_append(stringBuffer, "\nFile Length: ");
            StringMaker_appendlong(stringBuffer, ((int64_t) AbFile_length(originalImageFile)));
            StringMaker_append(stringBuffer, "\nNew File Length: ");
            StringMaker_appendlong(stringBuffer, ((int64_t) AbFile_length(imageFile)));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "saveImageFile()");
        }
}


static HashMap* MediaUtil_getImageBufferPropertyHashMap(BufferedImage* bufferedImage) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        const char** propertyStringArray = BufferedImage_getPropertyNames(bufferedImage);
        if (propertyStringArray != nullptr) {
            for (int32_t index = 0; index < java_array_length(propertyStringArray); index++) {
                Any* propertyObject = BufferedImage_getProperty(bufferedImage, propertyStringArray[index]);
                HashMap_put(hashMap, propertyStringArray[index], Any_toString(propertyObject));
            }
        }
        return hashMap;
}

