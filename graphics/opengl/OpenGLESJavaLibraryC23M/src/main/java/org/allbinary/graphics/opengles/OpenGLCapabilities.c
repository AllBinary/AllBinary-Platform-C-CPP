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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/khronos/opengles/GL11.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/image/opengles/OpenGLESGL10ImageFactory.h"
#include "org/allbinary/image/opengles/OpenGLESGL11VBOImageFactory.h"
#include "org/allbinary/image/opengles/OpenGLImageSpecificFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct OpenGLCapabilities OpenGLCapabilities;
struct OpenGLCapabilities {
    LogUtil* logUtil;
    bool CUSTOM_GL_SURFACE_VIEW;
    StringUtil* stringUtil;
    bool initialized;
    const char* glVersionString;
    const char* glShaderVersionString;
    int32_t shaderVersion;
    const char* glRenderer;
    const char* glVendor;
    const char* glExtensions;
    bool possiblyAccelerated;
    const char* acceleratedString;
    int32_t maxTextureSize;
    const char* VERSION_1_0;
    const char* VERSION_1_1;
    const char* VERSION_2_0;
    const char* VERSION_3_0;
    const char* VERSION_3_1;
    const char* VERSION_3_2;
    const char* VERSION_HIGHER_THAN_EXISTS;
    const char* VERSION_UNK;
    const char* GL_EXT_GPU_SHADER_100;
    const char* GL_EXT_GPU_SHADER4;
    const char* glVersion;
    const char* glInstanceVersion;
    bool glExtensionDrawTexture;
    bool glThreedDrawTexture;
    bool glExtensionGPUShader4;
    bool glExtensionGPUShader100;
    bool vertexBufferObjectSupport;
};

static OpenGLCapabilities* OpenGLCapabilities_instance;

OpenGLCapabilities* OpenGLCapabilities_new(void);
OpenGLCapabilities* OpenGLCapabilities_getInstance(void);

void OpenGLCapabilities_init(OpenGLCapabilities* this);
bool OpenGLCapabilities_isInitialized(OpenGLCapabilities* this);
static void OpenGLCapabilities_requireInitialization(OpenGLCapabilities* this);
void OpenGLCapabilities_initCapabilities(OpenGLCapabilities* this, GL10* gl);
static bool OpenGLCapabilities_isExtension(OpenGLCapabilities* this, OpenGLFeature* gameFeature);
bool OpenGLCapabilities_isGlExtensionDrawTexture(OpenGLCapabilities* this);
bool OpenGLCapabilities_isGlExtensionGPUShader100(OpenGLCapabilities* this);
bool OpenGLCapabilities_isGlExtensionGPUShader4(OpenGLCapabilities* this);
const char* OpenGLCapabilities_getGlVersion(OpenGLCapabilities* this);
const char* OpenGLCapabilities_getGlVersionString(OpenGLCapabilities* this);
const char* OpenGLCapabilities_getGlShaderVersion(OpenGLCapabilities* this);
bool OpenGLCapabilities_isGlThreedDrawTexture(OpenGLCapabilities* this);
const char* OpenGLCapabilities_getGlRenderer(OpenGLCapabilities* this);
bool OpenGLCapabilities_isVertexBufferObjectSupport(OpenGLCapabilities* this);
bool OpenGLCapabilities_isTextureSizeValid(OpenGLCapabilities* this, int32_t widthAndHeight);
const char* OpenGLCapabilities_toString(OpenGLCapabilities* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLCapabilities_staticInit(void) {
    OpenGLCapabilities_instance = OpenGLCapabilities_new();
}

static void OpenGLCapabilities_initFields(OpenGLCapabilities* this) {
    this->logUtil = LogUtil_getInstance();
    this->CUSTOM_GL_SURFACE_VIEW = true;
    this->stringUtil = StringUtil_getInstance();
    this->initialized = false;
    this->glVersionString = this->stringUtil->EMPTY_STRING;
    this->glShaderVersionString = this->stringUtil->EMPTY_STRING;
    this->shaderVersion = 0;
    this->glRenderer = this->stringUtil->EMPTY_STRING;
    this->glVendor = this->stringUtil->EMPTY_STRING;
    this->glExtensions = this->stringUtil->EMPTY_STRING;
    this->possiblyAccelerated = false;
    this->acceleratedString = this->stringUtil->EMPTY_STRING;
    this->maxTextureSize = 64;
    this->VERSION_1_0 = "1.0";
    this->VERSION_1_1 = "1.1";
    this->VERSION_2_0 = "2.0";
    this->VERSION_3_0 = "3.0";
    this->VERSION_3_1 = "3.1";
    this->VERSION_3_2 = "3.2";
    this->VERSION_HIGHER_THAN_EXISTS = "999.999";
    this->VERSION_UNK = "Unk";
    this->GL_EXT_GPU_SHADER_100 = "GL_ARB_shading_language_100";
    this->GL_EXT_GPU_SHADER4 = "GL_EXT_gpu_shader4";
    this->glVersion = this->glVersionString;
    this->glInstanceVersion = this->VERSION_UNK;
    this->glExtensionDrawTexture = false;
    this->glThreedDrawTexture = false;
    this->glExtensionGPUShader4 = false;
    this->glExtensionGPUShader100 = false;
    this->vertexBufferObjectSupport = false;
}


OpenGLCapabilities* OpenGLCapabilities_getInstance(void) {
        return OpenGLCapabilities_instance;
}


void OpenGLCapabilities_init(OpenGLCapabilities* this) {
    OpenGLCapabilities_initFields(this);
}

OpenGLCapabilities* OpenGLCapabilities_new(void) {
    OpenGLCapabilities* this = calloc(1, sizeof(OpenGLCapabilities));
    OpenGLCapabilities_init(this);
    return this;
}


bool OpenGLCapabilities_isInitialized(OpenGLCapabilities* this) {
        return this->initialized;
}


static void OpenGLCapabilities_requireInitialization(OpenGLCapabilities* this) {
}


void OpenGLCapabilities_initCapabilities(OpenGLCapabilities* this, GL10* gl) {
        const char* METHOD_NAME = "initGLCapabilities";
        JAVA_TRY {
            Features* features = Features_getInstance();
            OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
            OpenGLImageSpecificFactory* openGLImageSpecificFactory = OpenGLImageSpecificFactory_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            this->glVersionString = GL10_glGetString(gl, _GL10->GL_VERSION);
            int32_t GL_SHADING_LANGUAGE_VERSION = 0x8b8c;
            this->glShaderVersionString = GL10_glGetString(gl, GL_SHADING_LANGUAGE_VERSION);
            if (this->glShaderVersionString == nullptr) {
                this->glShaderVersionString = this->stringUtil->EMPTY_STRING;
            }
            JAVA_TRY {
                if (this->glShaderVersionString != nullptr && java_string_indexOf(this->glShaderVersionString, u'.') >= 0) {
                    int32_t startIndex = java_string_lastIndexOf(this->glShaderVersionString, u' ');
                    if (startIndex >= 0) {
                        this->glShaderVersionString = java_substring(this->glShaderVersionString, startIndex + 1, (int32_t) strlen(this->glShaderVersionString));
                    }
                    this->shaderVersion = ((int32_t) strtol(java_string_replace(this->glShaderVersionString, CommonSeps_getInstance()->PERIOD, StringUtil_getInstance()->EMPTY_STRING), nullptr, 10));
                }
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, METHOD_NAME, e);
            } JAVA_END_TRY;
            this->glRenderer = GL10_glGetString(gl, _GL10->GL_RENDERER);
            this->glVendor = GL10_glGetString(gl, _GL10->GL_VENDOR);
            this->glExtensions = GL10_glGetString(gl, _GL10->GL_EXTENSIONS);
            if (java_string_indexOf(this->glExtensions, this->GL_EXT_GPU_SHADER_100) >= 0) {
                this->glExtensionGPUShader100 = true;
            } else {
                this->glExtensionGPUShader100 = false;
            }
            if (java_string_indexOf(this->glExtensions, this->GL_EXT_GPU_SHADER4) >= 0) {
                this->glExtensionGPUShader4 = true;
            } else {
                this->glExtensionGPUShader4 = false;
            }
            if (this->glRenderer == nullptr) {
                this->glRenderer = this->stringUtil->EMPTY_STRING;
            }
            if (java_string_indexOf(java_string_toLowerCase(this->glRenderer), "pixelflinger") >= 0) {
                this->acceleratedString = java_concat("Probably Not for ", this->glRenderer);
                this->possiblyAccelerated = false;
            } else {
                this->acceleratedString = java_concat("Probably for ", this->glRenderer);
                this->possiblyAccelerated = true;
            }
            this->glExtensionDrawTexture = false;
            if (this->glVersionString == nullptr) {
                this->glVersionString = this->stringUtil->EMPTY_STRING;
                this->glVersion = this->VERSION_UNK;
            } else if (java_string_indexOf(this->glVersionString, " 1.0") >= 0) {
                this->glVersion = this->VERSION_1_0;
            } else if (java_string_indexOf(this->glVersionString, " 1.1") >= 0) {
                this->glVersion = this->VERSION_1_1;
            } else {
                this->glVersion = this->VERSION_UNK;
            }
            if (java_instanceof(gl, "GL11")) {
                this->glInstanceVersion = this->VERSION_1_1;
            } else if (java_instanceof(gl, "GL10")) {
                this->glInstanceVersion = this->VERSION_1_0;
            }
            if (this->glVendor == nullptr) {
                this->glVendor = this->stringUtil->EMPTY_STRING;
            }
            if (this->glExtensions == nullptr) {
                this->glExtensions = this->stringUtil->EMPTY_STRING;
            }
            if (this->possiblyAccelerated) {
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "VBO:?"), appendboolean, (this->glInstanceVersion == this->VERSION_1_1)), append, "||"), appendboolean, OpenGLCapabilities_isExtension(this, openGLFeatureFactory->OPENGL_VERTEX_BUFFER_OBJECT)), toString), this, METHOD_NAME);
                if ((this->glInstanceVersion == this->VERSION_1_1 || OpenGLCapabilities_isExtension(this, openGLFeatureFactory->OPENGL_VERTEX_BUFFER_OBJECT))) {
                    if (AndroidUtil_isAndroid()) {
                        PreLogUtil_put("VBO implementation was detected, but disabled by default for Android", this, METHOD_NAME);
                    } else {
                        PreLogUtil_put("VBO implementation was detected, but disabled for now", this, METHOD_NAME);
                    }
                }
            }
            StringUtil* stringUtil = StringUtil_getInstance();
            if (Features_isDefault(features, openGLFeatureFactory->OPENGL_AUTO_SELECT)) {
                if (this->vertexBufferObjectSupport) {
                    OpenGLImageSpecificFactory_setImageFactory(openGLImageSpecificFactory, OpenGLESGL11VBOImageFactory_new());
                } else {
                    StringMaker_append(stringBuffer, "OpenGL is on but ");
                    StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, openGLFeatureFactory->OPENGL_DRAW_TEXTURE));
                    StringMaker_append(stringBuffer, " was not available");
                    PreLogUtil_put(StringMaker_toString(stringBuffer), this, METHOD_NAME);
                    OpenGLImageSpecificFactory_setImageFactory(openGLImageSpecificFactory, OpenGLESGL10ImageFactory_new());
                }
            } else {
                StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, openGLFeatureFactory->OPENGL_AUTO_SELECT));
                StringMaker_append(stringBuffer, " is not on");
                PreLogUtil_put(StringMaker_toString(stringBuffer), this, METHOD_NAME);
                OpenGLImageSpecificFactory_setImageFactory(openGLImageSpecificFactory, OpenGLESGL10ImageFactory_new());
            }
            int32_t* maxTextureSizeArray = ((int32_t*) java_array_new(sizeof(int32_t), 1));
            GL10_glGetIntegerv(gl, _GL10->GL_MAX_TEXTURE_SIZE, maxTextureSizeArray, 0);
            this->maxTextureSize = maxTextureSizeArray[0];
            this->initialized = true;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, METHOD_NAME, e);
        } JAVA_END_TRY;
}


static bool OpenGLCapabilities_isExtension(OpenGLCapabilities* this, OpenGLFeature* gameFeature) {
        int32_t index = java_string_indexOf(this->glExtensions, OpenGLFeature_getName(gameFeature));
        if (index >= 0) {
            return true;
        } else {
            return false;
        }
}


bool OpenGLCapabilities_isGlExtensionDrawTexture(OpenGLCapabilities* this) {
        OpenGLCapabilities_requireInitialization(this);
        return this->glExtensionDrawTexture;
}


bool OpenGLCapabilities_isGlExtensionGPUShader100(OpenGLCapabilities* this) {
        return this->glExtensionGPUShader100;
}


bool OpenGLCapabilities_isGlExtensionGPUShader4(OpenGLCapabilities* this) {
        OpenGLCapabilities_requireInitialization(this);
        return this->glExtensionGPUShader4;
}


const char* OpenGLCapabilities_getGlVersion(OpenGLCapabilities* this) {
        OpenGLCapabilities_requireInitialization(this);
        return this->glVersion;
}


const char* OpenGLCapabilities_getGlVersionString(OpenGLCapabilities* this) {
        OpenGLCapabilities_requireInitialization(this);
        return this->glVersionString;
}


const char* OpenGLCapabilities_getGlShaderVersion(OpenGLCapabilities* this) {
        OpenGLCapabilities_requireInitialization(this);
        return this->glShaderVersionString;
}


bool OpenGLCapabilities_isGlThreedDrawTexture(OpenGLCapabilities* this) {
        OpenGLCapabilities_requireInitialization(this);
        return this->glThreedDrawTexture;
}


const char* OpenGLCapabilities_getGlRenderer(OpenGLCapabilities* this) {
        OpenGLCapabilities_requireInitialization(this);
        return this->glRenderer;
}


bool OpenGLCapabilities_isVertexBufferObjectSupport(OpenGLCapabilities* this) {
        OpenGLCapabilities_requireInitialization(this);
        return this->vertexBufferObjectSupport;
}


bool OpenGLCapabilities_isTextureSizeValid(OpenGLCapabilities* this, int32_t widthAndHeight) {
        OpenGLCapabilities_requireInitialization(this);
        if (this->maxTextureSize >= widthAndHeight) {
            return true;
        }
        return false;
}


const char* OpenGLCapabilities_toString(OpenGLCapabilities* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "GL_VERSION: ");
        StringMaker_append(stringBuffer, this->glVersionString);
        StringMaker_append(stringBuffer, " GL_SHADING_LANGUAGE_VERSION: ");
        StringMaker_append(stringBuffer, this->glShaderVersionString);
        StringMaker_append(stringBuffer, " GL_RENDERER: ");
        StringMaker_append(stringBuffer, this->glRenderer);
        StringMaker_append(stringBuffer, " GL_VENDOR: ");
        StringMaker_append(stringBuffer, this->glVendor);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, " Is Accelerated: ");
        StringMaker_append(stringBuffer, this->acceleratedString);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, " VBO Support: ");
        StringMaker_appendboolean(stringBuffer, OpenGLCapabilities_isVertexBufferObjectSupport(this));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, " Max Texture Size: ");
        StringMaker_appendint(stringBuffer, this->maxTextureSize);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, " GL_EXTENSIONS: ");
        JAVA_TRY {
            Tokenizer* tokenizer = Tokenizer_new(commonSeps->SPACE);
            BasicArrayList* list = Tokenizer_getTokensFromString(tokenizer, this->glExtensions, BasicArrayListD_new());
            int32_t size = BasicArrayList_size(list);
            for (int32_t index = 0; index < size; index++) {
                StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
                StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, list->objectArray[index]));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, commonStrings->TOSTRING, e);
        } JAVA_END_TRY;
        return StringMaker_toString(stringBuffer);
}

