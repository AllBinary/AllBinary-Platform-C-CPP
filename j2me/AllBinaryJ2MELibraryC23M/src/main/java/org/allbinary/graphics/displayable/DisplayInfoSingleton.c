// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "javax/microedition/lcdui/Displayable.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/event/LastDisplayChangeEventHandler.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/displayable/BaseScalable.h"
#include "org/allbinary/graphics/displayable/ScalableListener.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/graphics/threed/SWTJOGLProcessor.h")
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h")
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/event/LastDisplayChangeEventHandler.h")
#include "org/allbinary/graphics/displayable/event/LastDisplayChangeEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/graphics/threed/SWTJOGLProcessor.h")
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#endif


static DisplayInfoSingleton* DisplayInfoSingleton_SINGLETON;









static void DisplayInfoSingleton_setLastSizeForce(DisplayInfoSingleton* this, int32_t aLastWidth, int32_t aLastHeight, const char* reason);



























void DisplayInfoSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DisplayInfoSingleton_SINGLETON = DisplayInfoSingleton_new();
}

void DisplayInfoSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DisplayInfoSingleton", nullptr);
    java_register_method("DisplayInfoSingleton", "getLastHalf", (void*) DisplayInfoSingleton_getLastHalf);
    java_register_method("DisplayInfoSingleton", "getLast", (void*) DisplayInfoSingleton_getLast);
    java_register_method("DisplayInfoSingleton", "getFull", (void*) DisplayInfoSingleton_getFull);
    java_register_method("DisplayInfoSingleton", "getScaleLargestTo", (void*) DisplayInfoSingleton_getScaleLargestTo);
    java_register_method("DisplayInfoSingleton", "setScaleLargestTo", (void*) DisplayInfoSingleton_setScaleLargestTo);
    java_register_method("DisplayInfoSingleton", "setLastSize", (void*) DisplayInfoSingleton_setLastSize);
    java_register_method("DisplayInfoSingleton", "setLastSizeForce", (void*) DisplayInfoSingleton_setLastSizeForce);
    java_register_method("DisplayInfoSingleton", "isPortraitWH", (void*) DisplayInfoSingleton_isPortraitWH);
    java_register_method("DisplayInfoSingleton", "isPortrait", (void*) DisplayInfoSingleton_isPortrait);
    java_register_method("DisplayInfoSingleton", "add", (void*) DisplayInfoSingleton_add);
    java_register_method("DisplayInfoSingleton", "process", (void*) DisplayInfoSingleton_process);
    java_register_method("DisplayInfoSingleton", "processForced", (void*) DisplayInfoSingleton_processForced);
    java_register_method("DisplayInfoSingleton", "update", (void*) DisplayInfoSingleton_update);
    java_register_method("DisplayInfoSingleton", "toString", (void*) DisplayInfoSingleton_toString);
    java_register_method("DisplayInfoSingleton", "toStringAppend", (void*) DisplayInfoSingleton_toStringAppend);
    java_register_method("DisplayInfoSingleton", "getTop", (void*) DisplayInfoSingleton_getTop);
    java_register_method("DisplayInfoSingleton", "getLeft", (void*) DisplayInfoSingleton_getLeft);
    java_register_method("DisplayInfoSingleton", "getLastWidth", (void*) DisplayInfoSingleton_getLastWidth);
    java_register_method("DisplayInfoSingleton", "getLastHeight", (void*) DisplayInfoSingleton_getLastHeight);
    java_register_method("DisplayInfoSingleton", "getLastHalfWidth", (void*) DisplayInfoSingleton_getLastHalfWidth);
    java_register_method("DisplayInfoSingleton", "getLastHalfHeight", (void*) DisplayInfoSingleton_getLastHalfHeight);
    java_register_method("DisplayInfoSingleton", "getCustomLastWidth", (void*) DisplayInfoSingleton_getCustomLastWidth);
    java_register_method("DisplayInfoSingleton", "getCustomLastHeight", (void*) DisplayInfoSingleton_getCustomLastHeight);
    java_register_method("DisplayInfoSingleton", "getRawLastWidth", (void*) DisplayInfoSingleton_getRawLastWidth);
    java_register_method("DisplayInfoSingleton", "getRawLastHeight", (void*) DisplayInfoSingleton_getRawLastHeight);
    java_register_method("DisplayInfoSingleton", "setCustom", (void*) DisplayInfoSingleton_setCustom);
    java_register_method("DisplayInfoSingleton", "setScalableListener", (void*) DisplayInfoSingleton_setScalableListener);
    java_register_method("DisplayInfoSingleton", "getScalableListener", (void*) DisplayInfoSingleton_getScalableListener);
    java_register_method("DisplayInfoSingleton", "getRatio", (void*) DisplayInfoSingleton_getRatio);
    java_register_method("DisplayInfoSingleton", "getDisplayRatio", (void*) DisplayInfoSingleton_getDisplayRatio);
    java_register_method("DisplayInfoSingleton", "setOffset", (void*) DisplayInfoSingleton_setOffset);
    java_register_method("DisplayInfoSingleton", "getxOffset", (void*) DisplayInfoSingleton_getxOffset);
    java_register_method("DisplayInfoSingleton", "getyOffset", (void*) DisplayInfoSingleton_getyOffset);
}

static void DisplayInfoSingleton_initFields(DisplayInfoSingleton* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonLabels = CommonLabels_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->ORIENTATION = "ORIENTATION";
    this->ADJUSTING_FOR_SCALING_IN_PORTRAIT = "Adjusting for Scaling in portrait display ratio: ";
    this->ADJUSTING_FOR_SCALING_IN_LANDSCAPE = "Adjusting for Scaling in landscape display ratio: ";
    this->last = ((int32_t*) java_array_new(sizeof(int32_t), 4));
    this->lastHalf = ((int32_t*) java_array_new(sizeof(int32_t), 4));
    this->full = ((int32_t*) java_array_new(sizeof(int32_t), 4));
    this->top = 0;
    this->left = 0;
    this->xOffset = 0;
    this->yOffset = 0;
    this->scaleLargestTo = 0.0f;
    this->WIDTH = 0;
    this->HEIGHT = 1;
    this->CUSTOM_WIDTH = 2;
    this->CUSTOM_HEIGHT = 3;
    this->scalableListener = BaseScalable_new();
    this->displayRatio = 0.0f;
    this->ratio = 1.0f;
    this->SET_LAST_SIZE_METHOD_NAME = "setLastSize";
    this->FULL_WIDTH = " FullWidth: ";
    this->FULL_HEIGHT = " FullHeight: ";
    this->LAST_WIDTH = "LastWidth: ";
    this->LAST_HEIGHT = " LastHeight: ";
    this->PORTRAIT = "Portrait";
    this->LANDSCAPE = "Landscape";
    this->displayChangeEvent = DisplayChangeEvent_new(this);
    this->FIRE_METHOD_NAME = "fire";
    this->REASON = "reason: ";
    this->UPDATE_FROM_ORIENTATION_CHANGE = "Updating from Orientation Change ";
    this->list = BasicArrayListD_new();
    this->DISPLAY_INFO = "Display Info: ";
    this->FULL = "full";
    this->LAST = "last";
    this->LAST_HALF = "lastHalf";
}


DisplayInfoSingleton* DisplayInfoSingleton_getInstance(void) {
        return (DisplayInfoSingleton_staticInit(), DisplayInfoSingleton_SINGLETON);
}


void DisplayInfoSingleton_init(DisplayInfoSingleton* this) {
    DisplayInfoSingleton_register();
    DisplayInfoSingleton_initFields(this);
        int32_t size = java_array_length(this->last);
        for (int32_t index = 0; index < size; index++) {
            this->last[index] = 0;
            this->lastHalf[index] = 0;
            this->full[index] = 0;
        }
        if (AndroidUtil_isAndroid()) {
            this->scaleLargestTo = 640.0f;
        } else {
            this->scaleLargestTo = 1080.0f;
        }
}

DisplayInfoSingleton* DisplayInfoSingleton_new(void) {
    DisplayInfoSingleton* this = java_object_alloc(sizeof(DisplayInfoSingleton), "DisplayInfoSingleton");
    DisplayInfoSingleton_init(this);
    return this;
}


int32_t* DisplayInfoSingleton_getLastHalf(DisplayInfoSingleton* this) {
        return this->lastHalf;
}


int32_t* DisplayInfoSingleton_getLast(DisplayInfoSingleton* this) {
        return this->last;
}


int32_t* DisplayInfoSingleton_getFull(DisplayInfoSingleton* this) {
        return this->full;
}


float DisplayInfoSingleton_getScaleLargestTo(DisplayInfoSingleton* this) {
        return this->scaleLargestTo;
}


void DisplayInfoSingleton_setScaleLargestTo(DisplayInfoSingleton* this, int32_t scaleLargestTo) {
        this->scaleLargestTo = ((float) scaleLargestTo);
}


void DisplayInfoSingleton_setLastSize(DisplayInfoSingleton* this, int32_t aLastWidth, int32_t aLastHeight, const char* reason) {
        if (this->full[this->WIDTH] != aLastWidth || this->full[this->HEIGHT] != aLastHeight) {
            DisplayInfoSingleton_setLastSizeForce(this, aLastWidth, aLastHeight, reason);
        }
}


static void DisplayInfoSingleton_setLastSizeForce(DisplayInfoSingleton* this, int32_t aLastWidth, int32_t aLastHeight, const char* reason) {
        StringMaker* stringMaker = StringMaker_new();
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(stringMaker, CommonLabels_getInstance()->START_LABEL), reason)), this, this->SET_LAST_SIZE_METHOD_NAME);
        int32_t aFullWidth = aLastWidth;
        int32_t aFullHeight = aLastHeight;
        StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(stringMaker, this->FULL_WIDTH), aFullWidth), this->FULL_HEIGHT), aFullHeight), DisplayInfoSingleton_toString(this))), this, this->SET_LAST_SIZE_METHOD_NAME);
        GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
        if (GenericOperatingSystem_isOverScan(operatingSystemInterface)) {
            aLastWidth = aLastWidth * GenericOperatingSystem_getOverScanXPercent(operatingSystemInterface) / 100;
            aLastHeight = aLastHeight * GenericOperatingSystem_getOverScanYPercent(operatingSystemInterface) / 100;
        }
        if (GenericOperatingSystem_isScalable(operatingSystemInterface)) {
            if (DisplayInfoSingleton_isPortraitWH(this, aLastWidth, aLastHeight)) {
                if (((float) aLastHeight) > this->scaleLargestTo) {
                    this->displayRatio = this->scaleLargestTo / ((float) aLastHeight);
                    this->ratio = ((float) aLastHeight) / this->scaleLargestTo;
                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                    LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendfloat(StringMaker_append(stringMaker, this->ADJUSTING_FOR_SCALING_IN_PORTRAIT), this->displayRatio)), this, this->SET_LAST_SIZE_METHOD_NAME);
                    aLastWidth = ((int32_t) (((float) aLastWidth) * this->displayRatio));
                    aLastHeight = ((int32_t) (((float) aLastHeight) * this->displayRatio));
                    BaseScalable_scale(this->scalableListener, this->ratio);
                } else {
                    this->ratio = 1.0f;
                    BaseScalable_scale(this->scalableListener, this->ratio);
                }
            } else {
                if (((float) aLastWidth) > this->scaleLargestTo) {
                    this->displayRatio = this->scaleLargestTo / ((float) aLastWidth);
                    this->ratio = ((float) aLastWidth) / this->scaleLargestTo;
                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                    LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendfloat(StringMaker_append(stringMaker, this->ADJUSTING_FOR_SCALING_IN_LANDSCAPE), this->displayRatio)), this, this->SET_LAST_SIZE_METHOD_NAME);
                    aLastWidth = ((int32_t) (((float) aLastWidth) * this->displayRatio));
                    aLastHeight = ((int32_t) (((float) aLastHeight) * this->displayRatio));
                    BaseScalable_scale(this->scalableListener, this->ratio);
                } else {
                    this->ratio = 1.0f;
                    BaseScalable_scale(this->scalableListener, this->ratio);
                }
            }
        }
        StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(stringMaker, this->LAST_WIDTH), aLastWidth), this->LAST_HEIGHT), aLastHeight)), this, this->SET_LAST_SIZE_METHOD_NAME);
        this->xOffset = aFullWidth - aLastWidth;
        this->yOffset = aFullHeight - aLastHeight;
        this->left = BaseScalable_getLeft(this->scalableListener, this->xOffset);
        this->top = BaseScalable_getTop(this->scalableListener, this->yOffset);
        this->full[this->WIDTH] = aFullWidth;
        this->full[this->HEIGHT] = aFullHeight;
        this->last[this->WIDTH] = aLastWidth;
        this->lastHalf[this->WIDTH] = (this->last[this->WIDTH] >> 1);
        this->last[this->HEIGHT] = aLastHeight;
        this->lastHalf[this->HEIGHT] = (this->last[this->HEIGHT] >> 1);
        SWTJOGLProcessor_setCustom(SWTJOGLProcessor_getInstance(), aLastWidth, aLastHeight, this->ratio);
        DisplayInfoSingleton_add(this, this->SET_LAST_SIZE_METHOD_NAME);
}


bool DisplayInfoSingleton_isPortraitWH(DisplayInfoSingleton* this, int32_t lastWidth, int32_t lastHeight) {
        if (lastHeight > lastWidth) {
            return true;
        } else {
            return false;
        }
}


bool DisplayInfoSingleton_isPortrait(DisplayInfoSingleton* this) {
        return DisplayInfoSingleton_isPortraitWH(this, this->last[this->WIDTH], this->last[this->HEIGHT]);
}


void DisplayInfoSingleton_add(DisplayInfoSingleton* this, const char* reason) {
        StringMaker* stringMaker = StringMaker_new();
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(stringMaker, this->REASON), reason)), this, this->FIRE_METHOD_NAME);
        StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
        LogUtil_putF(this->logUtil, DisplayInfoSingleton_toStringAppend(this, stringMaker), this, this->FIRE_METHOD_NAME);
        BasicArrayList_add(this->list, reason);
}


void DisplayInfoSingleton_process(DisplayInfoSingleton* this) {
        JAVA_TRY {
            if (BasicArrayList_size(this->list) > 0) {
                DisplayInfoSingleton_processForced(this);
            }
            BasicArrayList_clear(this->list);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, this->FIRE_METHOD_NAME, e);
        } JAVA_END_TRY;
}


void DisplayInfoSingleton_processForced(DisplayInfoSingleton* this) {
        JAVA_TRY {
            SWTJOGLProcessor* swtJOGLProcessor = SWTJOGLProcessor_getInstance();
            SWTJOGLProcessor_clear(swtJOGLProcessor);
            BasicEventHandler_fireEvent(DisplayChangeEventHandler_getInstance(), this->displayChangeEvent);
            BasicEventHandler_fireEvent(LastDisplayChangeEventHandler_getInstance(), this->displayChangeEvent);
            SWTJOGLProcessor_onSurfaceChanged(swtJOGLProcessor);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, this->FIRE_METHOD_NAME, e);
        } JAVA_END_TRY;
}


void DisplayInfoSingleton_update(DisplayInfoSingleton* this, Displayable* displayable, const char* reason) {
        int32_t aLastWidth = Displayable_getWidth(displayable);
        int32_t aLastHeight = Displayable_getHeight(displayable);
        int32_t aFullWidth = aLastWidth;
        int32_t aFullHeight = aLastHeight;
        StringMaker* stringMaker = StringMaker_new();
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, CommonLabels_getInstance()->START_LABEL), reason), this->LAST_WIDTH), aLastWidth), this->LAST_HEIGHT), aLastHeight), this->commonSeps->SPACE), DisplayInfoSingleton_toString(this))), this, this->commonStrings->UPDATE);
        if (aLastWidth > 0 && aLastHeight > 0) {
            Features* features = Features_getInstance();
            OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
            if (!Features_isDefault(features, openGLFeatureFactory->OPENGL) || this->last[this->WIDTH] != aLastWidth || this->last[this->HEIGHT] != aLastHeight) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(stringMaker, this->UPDATE_FROM_ORIENTATION_CHANGE)), this, this->commonStrings->UPDATE);
                GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
                if (GenericOperatingSystem_isOverScan(operatingSystemInterface)) {
                    aLastWidth = aLastWidth * GenericOperatingSystem_getOverScanXPercent(operatingSystemInterface) / 100;
                    aLastHeight = aLastHeight * GenericOperatingSystem_getOverScanYPercent(operatingSystemInterface) / 100;
                }
                if (GenericOperatingSystem_isScalable(operatingSystemInterface)) {
                    if (DisplayInfoSingleton_isPortraitWH(this, aLastWidth, aLastHeight)) {
                        if (((float) aLastHeight) > this->scaleLargestTo) {
                            this->displayRatio = this->scaleLargestTo / ((float) aLastHeight);
                            this->ratio = ((float) aLastHeight) / this->scaleLargestTo;
                            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                            LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendfloat(StringMaker_append(stringMaker, this->ADJUSTING_FOR_SCALING_IN_PORTRAIT), this->displayRatio)), this, this->commonStrings->UPDATE);
                            aLastWidth = ((int32_t) (((float) aLastWidth) * this->displayRatio));
                            aLastHeight = ((int32_t) (((float) aLastHeight) * this->displayRatio));
                            BaseScalable_scale(this->scalableListener, this->ratio);
                        } else {
                            this->ratio = 1.0f;
                            BaseScalable_scale(this->scalableListener, this->ratio);
                        }
                    } else {
                        if (((float) aLastWidth) > this->scaleLargestTo) {
                            this->displayRatio = this->scaleLargestTo / ((float) aLastWidth);
                            this->ratio = ((float) aLastWidth) / this->scaleLargestTo;
                            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                            LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendfloat(StringMaker_append(stringMaker, this->ADJUSTING_FOR_SCALING_IN_LANDSCAPE), this->displayRatio)), this, this->commonStrings->UPDATE);
                            aLastWidth = ((int32_t) (((float) aLastWidth) * this->displayRatio));
                            aLastHeight = ((int32_t) (((float) aLastHeight) * this->displayRatio));
                            BaseScalable_scale(this->scalableListener, this->ratio);
                        } else {
                            this->ratio = 1.0f;
                            BaseScalable_scale(this->scalableListener, this->ratio);
                        }
                    }
                }
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_append(stringMaker, this->UPDATE_FROM_ORIENTATION_CHANGE), this->LAST_WIDTH), aLastWidth), this->LAST_HEIGHT), aLastHeight)), this, this->commonStrings->UPDATE);
                this->xOffset = aFullWidth - aLastWidth;
                this->yOffset = aFullHeight - aLastHeight;
                this->left = BaseScalable_getLeft(this->scalableListener, this->xOffset);
                this->top = BaseScalable_getTop(this->scalableListener, this->yOffset);
                this->full[this->WIDTH] = aFullWidth;
                this->full[this->HEIGHT] = aFullHeight;
                this->last[this->WIDTH] = aLastWidth;
                this->lastHalf[this->WIDTH] = (this->last[this->WIDTH] >> 1);
                this->last[this->HEIGHT] = aLastHeight;
                this->lastHalf[this->HEIGHT] = (this->last[this->HEIGHT] >> 1);
                SWTJOGLProcessor_setCustom(SWTJOGLProcessor_getInstance(), aLastWidth, aLastHeight, this->ratio);
                DisplayInfoSingleton_add(this, this->commonStrings->UPDATE);
            }
        }
}


const char* DisplayInfoSingleton_toString(DisplayInfoSingleton* this) {
        StringMaker* stringBuffer = StringMaker_new();
        return DisplayInfoSingleton_toStringAppend(this, stringBuffer);
}


const char* DisplayInfoSingleton_toStringAppend(DisplayInfoSingleton* this, StringMaker* stringBuffer) {
        StringMaker_append(stringBuffer, this->DISPLAY_INFO);
        StringMaker_append(stringBuffer, this->FULL);
        StringMaker_append(stringBuffer, this->commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, this->full[this->WIDTH]);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->FULL);
        StringMaker_append(stringBuffer, this->commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, this->full[this->HEIGHT]);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->LAST);
        StringMaker_append(stringBuffer, this->commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, this->last[this->WIDTH]);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->LAST);
        StringMaker_append(stringBuffer, this->commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, this->last[this->HEIGHT]);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->LAST_HALF);
        StringMaker_append(stringBuffer, this->commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, this->lastHalf[this->WIDTH]);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->LAST_HALF);
        StringMaker_append(stringBuffer, this->commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, this->lastHalf[this->HEIGHT]);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, (DisplayInfoSingleton_isPortrait(this) ? this->PORTRAIT : this->LANDSCAPE));
        return java_string_of(stringBuffer);
}


int32_t DisplayInfoSingleton_getTop(DisplayInfoSingleton* this) {
        return this->top;
}


int32_t DisplayInfoSingleton_getLeft(DisplayInfoSingleton* this) {
        return this->left;
}


int32_t DisplayInfoSingleton_getLastWidth(DisplayInfoSingleton* this) {
        return this->last[this->WIDTH];
}


int32_t DisplayInfoSingleton_getLastHeight(DisplayInfoSingleton* this) {
        return this->last[this->HEIGHT];
}


int32_t DisplayInfoSingleton_getLastHalfWidth(DisplayInfoSingleton* this) {
        return this->lastHalf[this->WIDTH];
}


int32_t DisplayInfoSingleton_getLastHalfHeight(DisplayInfoSingleton* this) {
        return this->lastHalf[this->HEIGHT];
}


int32_t DisplayInfoSingleton_getCustomLastWidth(DisplayInfoSingleton* this) {
        return this->last[this->CUSTOM_WIDTH];
}


int32_t DisplayInfoSingleton_getCustomLastHeight(DisplayInfoSingleton* this) {
        return this->last[this->CUSTOM_HEIGHT];
}


int32_t DisplayInfoSingleton_getRawLastWidth(DisplayInfoSingleton* this) {
        return this->last[this->WIDTH];
}


int32_t DisplayInfoSingleton_getRawLastHeight(DisplayInfoSingleton* this) {
        return this->last[this->HEIGHT];
}


void DisplayInfoSingleton_setCustom(DisplayInfoSingleton* this, int32_t width, int32_t height) {
        this->last[this->CUSTOM_WIDTH] = width;
        this->lastHalf[this->CUSTOM_WIDTH] = (this->last[this->CUSTOM_WIDTH] >> 1);
        this->last[this->CUSTOM_HEIGHT] = height;
        this->lastHalf[this->CUSTOM_HEIGHT] = (this->last[this->CUSTOM_HEIGHT] >> 1);
}


void DisplayInfoSingleton_setScalableListener(DisplayInfoSingleton* this, BaseScalable* scalableListener) {
        this->scalableListener = scalableListener;
}


ScalableListener* DisplayInfoSingleton_getScalableListener(DisplayInfoSingleton* this) {
        return this->scalableListener;
}


float DisplayInfoSingleton_getRatio(DisplayInfoSingleton* this) {
        return this->ratio;
}


float DisplayInfoSingleton_getDisplayRatio(DisplayInfoSingleton* this) {
        return this->displayRatio;
}


void DisplayInfoSingleton_setOffset(DisplayInfoSingleton* this, int32_t left, int32_t top) {
        this->left = left;
}


int32_t DisplayInfoSingleton_getxOffset(DisplayInfoSingleton* this) {
        return this->xOffset;
}


int32_t DisplayInfoSingleton_getyOffset(DisplayInfoSingleton* this) {
        return this->yOffset;
}

