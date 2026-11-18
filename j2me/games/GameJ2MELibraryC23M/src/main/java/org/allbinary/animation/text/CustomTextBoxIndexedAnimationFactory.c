// Generated Code Do Not Modify
#include "org/allbinary/animation/text/CustomTextBoxIndexedAnimationFactory.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/canvas/ABToGBUtil.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/text/CustomTextBox2.h"
#include "org/allbinary/animation/text/CustomTextBoxIndexedAnimation.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/animation/text/AllBinaryGameLayerManager.h")
#include "org/allbinary/animation/text/AllBinaryGameLayerManager.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinaryGameLayerManager.h")
#include "javax/microedition/lcdui/AllBinaryGameLayerManager.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinaryGameLayerManager.h")
#include "javax/microedition/lcdui/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/form/item/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/animation/AllBinaryGameLayerManager.h")
#include "org/allbinary/animation/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/animation/AllBinaryGameLayerManager.h")
#include "org/allbinary/animation/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/canvas/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/canvas/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/AllBinaryGameLayerManager.h")
#include "org/allbinary/logic/communication/log/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/string/AllBinaryGameLayerManager.h")
#include "org/allbinary/string/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/logic/string/AllBinaryGameLayerManager.h")
#include "org/allbinary/logic/string/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/media/AllBinaryGameLayerManager.h")
#include "org/allbinary/media/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/animation/text/AllBinaryGameLayerManager.h")
#include "org/allbinary/animation/text/AllBinaryGameLayerManager.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinaryGameLayerManager.h")
#include "javax/microedition/lcdui/AllBinaryGameLayerManager.h"
#endif
#if __has_include("javax/microedition/lcdui/AllBinaryGameLayerManager.h")
#include "javax/microedition/lcdui/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/AllBinaryGameLayerManager.h")
#include "org/allbinary/graphics/form/item/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/animation/AllBinaryGameLayerManager.h")
#include "org/allbinary/animation/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/animation/AllBinaryGameLayerManager.h")
#include "org/allbinary/animation/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/canvas/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/canvas/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/AllBinaryGameLayerManager.h")
#include "org/allbinary/logic/communication/log/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/string/AllBinaryGameLayerManager.h")
#include "org/allbinary/string/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/logic/string/AllBinaryGameLayerManager.h")
#include "org/allbinary/logic/string/AllBinaryGameLayerManager.h"
#endif
#if __has_include("org/allbinary/media/AllBinaryGameLayerManager.h")
#include "org/allbinary/media/AllBinaryGameLayerManager.h"
#endif






void CustomTextBoxIndexedAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomTextBoxIndexedAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomTextBoxIndexedAnimationFactory", nullptr);
    java_register_method("CustomTextBoxIndexedAnimationFactory", "getInstance", (void*) CustomTextBoxIndexedAnimationFactory_getInstance);
    java_register_method("CustomTextBoxIndexedAnimationFactory", "setInitialScale", (void*) CustomTextBoxIndexedAnimationFactory_setInitialScale);
}

static void CustomTextBoxIndexedAnimationFactory_initFields(CustomTextBoxIndexedAnimationFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void CustomTextBoxIndexedAnimationFactory_init(CustomTextBoxIndexedAnimationFactory* this, int32_t fontSize, int32_t maxLength) {
    CustomTextBoxIndexedAnimationFactory_register();
    CustomTextBoxIndexedAnimationFactory_initFields(this);
        this->scaleProperties = ScaleProperties_new();
        this->scaleProperties->scaleHeight = fontSize;
        this->maxLength = maxLength;
}

CustomTextBoxIndexedAnimationFactory* CustomTextBoxIndexedAnimationFactory_new(int32_t fontSize, int32_t maxLength) {
    CustomTextBoxIndexedAnimationFactory* this = java_object_alloc(sizeof(CustomTextBoxIndexedAnimationFactory), "CustomTextBoxIndexedAnimationFactory");
    CustomTextBoxIndexedAnimationFactory_init(this, fontSize, maxLength);
    return this;
}


// throws Exception
Animation* CustomTextBoxIndexedAnimationFactory_getInstance(CustomTextBoxIndexedAnimationFactory* this, int32_t instanceId) {
        ABToGBUtil* abToGBUtil = ABToGBUtil_getInstance();
        AllBinaryGameCanvas* abCanvas = ((AllBinaryGameCanvas*) abToGBUtil->abCanvas);
        Font* font = Font_getFont((Font_staticInit(), Font_FACE_SYSTEM), (Font_staticInit(), Font_STYLE_PLAIN), this->scaleProperties->scaleHeight);
        CustomTextBox* customTextBox = CustomTextBox2_new(MyCanvas_getCustomCommandListener(abCanvas), StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, this->maxLength, (TextField_staticInit(), TextField_ANY), font, AllBinaryGameLayerManager_getBackgroundBasicColor(AllBinaryGameCanvas_getLayerManager(abCanvas)), AllBinaryGameLayerManager_getForegroundBasicColor(AllBinaryGameCanvas_getLayerManager(abCanvas)));
        return CustomTextBoxIndexedAnimation_new(customTextBox);
}


void CustomTextBoxIndexedAnimationFactory_setInitialScale(CustomTextBoxIndexedAnimationFactory* this, ScaleProperties* scaleProperties) {
        int32_t fontSize = this->scaleProperties->scaleHeight;
        this->scaleProperties = scaleProperties;
        if (this->scaleProperties->scaleHeight < 6) {
            this->scaleProperties->scaleHeight = fontSize;
        }
}

