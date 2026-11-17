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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/MainFeatureFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct OpenGLConfiguration OpenGLConfiguration;
struct OpenGLConfiguration {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    bool opengl;
    OpenGLFeature* type;
    OpenGLFeature* imageColor;
    OpenGLFeature* color;
    OpenGLFeature* versionSelector;
};

static Any* OpenGLConfiguration_instance;

OpenGLConfiguration* OpenGLConfiguration_new(void);
OpenGLConfiguration* OpenGLConfiguration_getInstance(void);

void OpenGLConfiguration_init(OpenGLConfiguration* this);
void OpenGLConfiguration_write(OpenGLConfiguration* this);
void OpenGLConfiguration_init(OpenGLConfiguration* this);
void OpenGLConfiguration_update(OpenGLConfiguration* this, Feature* gameFeature, bool colorLocked);
void OpenGLConfiguration_setOpenGL(OpenGLConfiguration* this, bool opengl);
bool OpenGLConfiguration_isOpenGL(OpenGLConfiguration* this);
void OpenGLConfiguration_setImageColor(OpenGLConfiguration* this, OpenGLFeature* imageColor);
OpenGLFeature* OpenGLConfiguration_getImageColor(OpenGLConfiguration* this);
void OpenGLConfiguration_setColor(OpenGLConfiguration* this, OpenGLFeature* color);
OpenGLFeature* OpenGLConfiguration_getColor(OpenGLConfiguration* this);
void OpenGLConfiguration_setVersionSelector(OpenGLConfiguration* this, OpenGLFeature* versionSelector);
OpenGLFeature* OpenGLConfiguration_getVersionSelector(OpenGLConfiguration* this);
void OpenGLConfiguration_setType(OpenGLConfiguration* this, OpenGLFeature* type);
OpenGLFeature* OpenGLConfiguration_getType(OpenGLConfiguration* this);
const char* OpenGLConfiguration_toString(OpenGLConfiguration* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLConfiguration_staticInit(void) {
    OpenGLConfiguration_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void OpenGLConfiguration_initFields(OpenGLConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->opengl = false;
    this->type = OpenGLFeatureFactory_getInstance()->OPENGL_AS_GAME_THREAD;
    this->imageColor = OpenGLFeatureFactory_getInstance()->IMAGE_COLOR_DEPTH_4444;
    this->color = OpenGLFeatureFactory_getInstance()->IMAGE_COLOR_DEPTH_4444;
    this->versionSelector = OpenGLFeatureFactory_getInstance()->OPENGL_AUTO_SELECT;
}


OpenGLConfiguration* OpenGLConfiguration_getInstance(void) {
        if (OpenGLConfiguration_instance == NullUtil_getInstance()->NULL_OBJECT) {
            OpenGLConfiguration_instance = OpenGLConfiguration_new();
        }
        return ((OpenGLConfiguration*) OpenGLConfiguration_instance);
}


void OpenGLConfiguration_init(OpenGLConfiguration* this) {
    OpenGLConfiguration_initFields(this);
}

OpenGLConfiguration* OpenGLConfiguration_new(void) {
    OpenGLConfiguration* this = calloc(1, sizeof(OpenGLConfiguration));
    OpenGLConfiguration_init(this);
    return this;
}


void OpenGLConfiguration_write(OpenGLConfiguration* this) {
}


// throws Exception
void OpenGLConfiguration_init(OpenGLConfiguration* this) {
        Features* features = Features_getInstance();
        if (ChangedGameFeatureListener_isChangedFeature(ChangedGameFeatureListener_getInstance(), MainFeatureFactory_getInstance()->STATIC)) {
            if (OpenGLConfiguration_isOpenGL(this)) {
                if (!Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
                    LogUtil_putF(this->logUtil, "Turning on OpenGL", this, this->commonStrings->INIT);
                    Features_addDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL);
                    LogUtil_putF(this->logUtil, java_concat("Using OpenGL Type Feature: ", java_string_of(OpenGLConfiguration_getType(this))), this, this->commonStrings->INIT);
                    Features_addDefault(features, OpenGLConfiguration_getType(this));
                    LogUtil_putF(this->logUtil, java_concat("Using OpenGL ImageColor Feature: ", java_string_of(OpenGLConfiguration_getImageColor(this))), this, this->commonStrings->INIT);
                    Features_addDefault(features, OpenGLConfiguration_getImageColor(this));
                    LogUtil_putF(this->logUtil, java_concat("Using OpenGL Color Feature: ", java_string_of(OpenGLConfiguration_getColor(this))), this, this->commonStrings->INIT);
                    Features_addDefault(features, OpenGLConfiguration_getColor(this));
                    LogUtil_putF(this->logUtil, java_concat("Using OpenGL Version Selector Feature: ", java_string_of(OpenGLConfiguration_getVersionSelector(this))), this, this->commonStrings->INIT);
                    Features_addDefault(features, OpenGLConfiguration_getVersionSelector(this));
                }
            } else {
                LogUtil_putF(this->logUtil, "OpenGL is Off", this, this->commonStrings->INIT);
            }
        } else {
            if (OpenGLConfiguration_isOpenGL(this) && !Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
                PreLogUtil_put("OpenGL is set but not Enabled since Statics where not cleared (Reboot or Complete exit is Required)", this, this->commonStrings->INIT);
            }
        }
        PreLogUtil_put(OpenGLConfiguration_toString(this), this, this->commonStrings->INIT);
}


// throws Exception
void OpenGLConfiguration_update(OpenGLConfiguration* this, Feature* gameFeature, bool colorLocked) {
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        bool modified = false;
        if (gameFeature == openGLFeatureFactory->OPENGL) {
            if (Features_isFeature(features, gameFeature)) {
                if (!OpenGLConfiguration_isOpenGL(this)) {
                    OpenGLConfiguration_setOpenGL(this, true);
                    modified = true;
                }
            } else {
                if (OpenGLConfiguration_isOpenGL(this)) {
                    OpenGLConfiguration_setOpenGL(this, false);
                    modified = true;
                }
            }
        }
        if (gameFeature == openGLFeatureFactory->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS || gameFeature == openGLFeatureFactory->OPENGL_AS_GAME_THREAD) {
            if (Features_isFeature(features, gameFeature)) {
                if (gameFeature != OpenGLConfiguration_getType(this)) {
                    OpenGLConfiguration_setType(this, ((OpenGLFeature*) gameFeature));
                    modified = true;
                }
            }
        }
        if (gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444 || gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_565 || gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_8888) {
            if (Features_isFeature(features, gameFeature)) {
                if (OpenGLConfiguration_getImageColor(this) != gameFeature) {
                    OpenGLConfiguration_setImageColor(this, ((OpenGLFeature*) gameFeature));
                    if (colorLocked) {
                        if (gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444) {
                            OpenGLConfiguration_setColor(this, openGLFeatureFactory->OPENGL_COLOR_DEPTH_4444);
                        } else if (gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_565) {
                            OpenGLConfiguration_setColor(this, openGLFeatureFactory->OPENGL_COLOR_DEPTH_565);
                        } else if (gameFeature == openGLFeatureFactory->IMAGE_COLOR_DEPTH_8888) {
                            OpenGLConfiguration_setColor(this, openGLFeatureFactory->OPENGL_COLOR_DEPTH_8888);
                        }
                    }
                    modified = true;
                }
            }
        }
        if (gameFeature == openGLFeatureFactory->OPENGL_COLOR_DEPTH_4444 || gameFeature == openGLFeatureFactory->OPENGL_COLOR_DEPTH_565 || gameFeature == openGLFeatureFactory->OPENGL_COLOR_DEPTH_8888) {
            if (Features_isFeature(features, gameFeature)) {
                if (OpenGLConfiguration_getColor(this) != gameFeature) {
                    OpenGLConfiguration_setColor(this, ((OpenGLFeature*) gameFeature));
                    modified = true;
                }
            }
        }
        if (gameFeature == openGLFeatureFactory->OPENGL_AUTO_SELECT || gameFeature == openGLFeatureFactory->OPENGL_MINIMUM) {
            if (Features_isFeature(features, gameFeature)) {
                OpenGLConfiguration_setVersionSelector(this, ((OpenGLFeature*) gameFeature));
            }
            modified = true;
        }
}


void OpenGLConfiguration_setOpenGL(OpenGLConfiguration* this, bool opengl) {
        this->opengl = opengl;
}


bool OpenGLConfiguration_isOpenGL(OpenGLConfiguration* this) {
        return this->opengl;
}


void OpenGLConfiguration_setImageColor(OpenGLConfiguration* this, OpenGLFeature* imageColor) {
        this->imageColor = imageColor;
}


OpenGLFeature* OpenGLConfiguration_getImageColor(OpenGLConfiguration* this) {
        return this->imageColor;
}


void OpenGLConfiguration_setColor(OpenGLConfiguration* this, OpenGLFeature* color) {
        this->color = color;
}


OpenGLFeature* OpenGLConfiguration_getColor(OpenGLConfiguration* this) {
        return this->color;
}


void OpenGLConfiguration_setVersionSelector(OpenGLConfiguration* this, OpenGLFeature* versionSelector) {
        this->versionSelector = versionSelector;
}


OpenGLFeature* OpenGLConfiguration_getVersionSelector(OpenGLConfiguration* this) {
        return this->versionSelector;
}


void OpenGLConfiguration_setType(OpenGLConfiguration* this, OpenGLFeature* type) {
        this->type = type;
}


OpenGLFeature* OpenGLConfiguration_getType(OpenGLConfiguration* this) {
        return this->type;
}


const char* OpenGLConfiguration_toString(OpenGLConfiguration* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        StringMaker_append(stringBuffer, " isOpenGL: ");
        StringMaker_appendboolean(stringBuffer, OpenGLConfiguration_isOpenGL(this));
        StringMaker_append(stringBuffer, " VersionSelector: ");
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, OpenGLConfiguration_getVersionSelector(this)));
        StringMaker_append(stringBuffer, " Type: ");
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, OpenGLConfiguration_getType(this)));
        StringMaker_append(stringBuffer, " Image Color: ");
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, OpenGLConfiguration_getImageColor(this)));
        StringMaker_append(stringBuffer, " Color: ");
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, OpenGLConfiguration_getColor(this)));
        return StringMaker_toString(stringBuffer);
}

