/*
 * 
 * To change this license header, choose License Headers in Project Properties. 
 * To change this template file, choose Tools | Templates 
 * and open the template in the editor.  
 */
// Generated Code Do Not Modify
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
// #include "java/io/File.h"
// #include "java/io/IOException.h"
// #include "java/util/Iterator.h"
// #include "javax/imageio/IIOImage.h"
// #include "javax/imageio/ImageIO.h"
// #include "javax/imageio/ImageWriteParam.h"
// #include "javax/imageio/ImageWriter.h"
// #include "javax/imageio/stream/ImageOutputStream.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/apache/batik/ext/awt/image/codec/png/PNGImageWriter.h"

typedef struct ImagePersistanceUtil ImagePersistanceUtil;
struct ImagePersistanceUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static ImagePersistanceUtil* ImagePersistanceUtil_instance;

ImagePersistanceUtil* ImagePersistanceUtil_new(void);
ImagePersistanceUtil* ImagePersistanceUtil_getInstance(void);
void ImagePersistanceUtil_saveWithBatik(ImagePersistanceUtil* this, AbFile* file, BufferedImage* bufferedImage);
void ImagePersistanceUtil_saveWithImageIO(ImagePersistanceUtil* this, const char* filePath, BufferedImage* bufferedImage);
void ImagePersistanceUtil_saveWithImageIO(ImagePersistanceUtil* this, File* file, BufferedImage* bufferedImage);

// Static fields with runtime initializers: call this once at startup
void ImagePersistanceUtil_staticInit(void) {
    ImagePersistanceUtil_instance = ImagePersistanceUtil_new();
}

static void ImagePersistanceUtil_initFields(ImagePersistanceUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void ImagePersistanceUtil_init(ImagePersistanceUtil* this) {
    ImagePersistanceUtil_initFields(this);
}

ImagePersistanceUtil* ImagePersistanceUtil_new(void) {
    ImagePersistanceUtil* this = calloc(1, sizeof(ImagePersistanceUtil));
    ImagePersistanceUtil_init(this);
    return this;
}


ImagePersistanceUtil* ImagePersistanceUtil_getInstance(void) {
        return ImagePersistanceUtil_instance;
}


// throws Exception
void ImagePersistanceUtil_saveWithBatik(ImagePersistanceUtil* this, AbFile* file, BufferedImage* bufferedImage) {
        PNGImageWriter* batikPNGImageWriter = PNGImageWriter_new();
        AbFileOutputStream* fileOutputStream = AbFileOutputStream_createFromAbFile(file);
        JAVA_TRY {
            PNGImageWriter_writeImage(batikPNGImageWriter, bufferedImage, fileOutputStream);
        } JAVA_FINALLY {
            AbFileOutputStream_flush(fileOutputStream);
            StreamUtil_close(StreamUtil_getInstance(), fileOutputStream);
        } JAVA_END_TRY;
        LogUtil_putF(this->logUtil, java_concat("Wrote Image: ", java_string_of(AbFile_getAbsolutePath(file))), this, this->commonStrings->SAVE);
}


void ImagePersistanceUtil_saveWithImageIO(ImagePersistanceUtil* this, const char* filePath, BufferedImage* bufferedImage) {
        ImagePersistanceUtil_saveWithImageIO(this, File_new(filePath), bufferedImage);
}


// Java overloaded method: C needs a different name
void ImagePersistanceUtil_saveWithImageIO(ImagePersistanceUtil* this, File* file, BufferedImage* bufferedImage) {
        ImageWriter* writer = nullptr;
        ImageOutputStream* ios = nullptr;
        JAVA_TRY {
            Iterator* iter = ImageIO_getImageWritersByFormatName("jpeg");
            if (!Iterator_hasNext(iter)) {
                LogUtil_putF(this->logUtil, "Unable to save image to jpeg file type.", this, this->commonStrings->SAVE);
                return;
            }
            writer = ((ImageWriter*) Iterator_next(iter));
            ios = ImageIO_createImageOutputStream(file);
            ImageWriter_setOutput(writer, ios);
            ImageWriteParam* iwp = ImageWriter_getDefaultWriteParam(writer);
            ImageWriteParam_setCompressionMode(iwp, ImageWriteParam_MODE_EXPLICIT);
            ImageWriteParam_setCompressionQuality(iwp, 0.95f);
            ImageWriter_write(writer, nullptr, IIOImage_new(bufferedImage, nullptr, nullptr), iwp);
            LogUtil_putF(this->logUtil, java_concat("Wrote Image: ", java_string_of(AbFile_getAbsolutePath(file))), this, this->commonStrings->SAVE);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, e);
        } JAVA_FINALLY {
            JAVA_TRY {
                if (ios != nullptr) {
                    ImageOutputStream_flush(ios);
                    JAVA_TRY {
                        if (ios != nullptr) {
                            LogUtil_putF(this->logUtil, ImageOutputStream_toString(ios), ios, this->commonStrings->CLOSE);
                            ImageOutputStream_close(ios);
                        }
                    } JAVA_CATCH(Exception, e) {
                        LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, ios, this->commonStrings->CLOSE, e);
                    } JAVA_END_TRY;
                }
                if (writer != nullptr) {
                    ImageWriter_dispose(writer);
                }
            } JAVA_CATCH(IOException, e2) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, e2);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}

