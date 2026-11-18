// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/PlatformKeyFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/validation/TextItemVisitor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
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
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif














void CustomTextBox_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomTextBox_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomTextBox", "GameCommandCanvas");
    java_register_method("CustomTextBox", "submit", (void*) CustomTextBox_submit);
    java_register_method("CustomTextBox", "onEventRaw", (void*) CustomTextBox_onEventRaw);
    java_register_method("CustomTextBox", "keyPressed", (void*) CustomTextBox_keyPressed);
    java_register_method("CustomTextBox", "keyReleased", (void*) CustomTextBox_keyReleased);
    java_register_method("CustomTextBox", "keyRepeated", (void*) CustomTextBox_keyRepeated);
    java_register_method("CustomTextBox", "keyPressedByDevice", (void*) CustomTextBox_keyPressedByDevice);
    java_register_method("CustomTextBox", "keyReleasedByDevice", (void*) CustomTextBox_keyReleasedByDevice);
    java_register_method("CustomTextBox", "paint", (void*) CustomTextBox_paint);
    java_register_method("CustomTextBox", "paintXY", (void*) CustomTextBox_paintXY);
    java_register_method("CustomTextBox", "getTextFieldItem", (void*) CustomTextBox_getTextFieldItem);
}

static void CustomTextBox_initFields(CustomTextBox* this) {
    
    this->inputFactory = InputFactory_getInstance();
}


void CustomTextBox_init(CustomTextBox* this, CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomTextBox_register();
        GameCommandCanvas_init(&this->base, cmdListener, label, backgroundBasicColor, foregroundBasicColor);
        CustomTextBox_initFields(this);
        StringUtil* stringUtil = StringUtil_getInstance();
        ABTextFieldItem* textFieldItem = ABTextFieldItem_new(this, TextItemVisitor_new(), stringUtil->EMPTY_STRING, stringUtil->EMPTY_STRING, maxSize, 0, stringUtil->EMPTY_STRING, font, backgroundBasicColor, foregroundBasicColor);
        ABTextFieldItem_setString(textFieldItem, text);
        this->textFieldItem = textFieldItem;
        Displayable_setTitle(this, label);
}

CustomTextBox* CustomTextBox_new(CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CustomTextBox* this = java_object_alloc(sizeof(CustomTextBox), "CustomTextBox");
    CustomTextBox_init(this, cmdListener, label, text, maxSize, constraints, font, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void CustomTextBox_submit(CustomTextBox* this) {
}


void CustomTextBox_onEventRaw(CustomTextBox* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->base.base.commonStrings->START), keyCode)), this, "onEvent");
        CustomTextBox_keyPressedByDevice(this, keyCode, deviceId);
}


void CustomTextBox_keyPressed(CustomTextBox* this, int32_t keyCode) {
        CustomTextBox_keyPressedByDevice(this, keyCode, 0);
}


void CustomTextBox_keyReleased(CustomTextBox* this, int32_t keyCode) {
        CustomTextBox_keyReleasedByDevice(this, keyCode, 0);
}


void CustomTextBox_keyRepeated(CustomTextBox* this, int32_t keyCode) {
        GameCommandCanvas_keyRepeatedByDevice(this, keyCode, 0);
}


void CustomTextBox_keyPressedByDevice(CustomTextBox* this, int32_t keyCode, int32_t deviceId) {
        JAVA_TRY {
            LogUtil_putF(this->base.base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), keyCode)), this, this->base.gameInputStrings->KEY_PRESSED);
            PlatformKeyFactory* platformKeyFactory = PlatformKeyFactory_getInstance();
            Input* input = InputFactory_getInstanceById(this->inputFactory, keyCode);
            if (PlatformKeyFactory_isSubmission(platformKeyFactory, input)) {
                CustomTextBox_submit(this);
            } else {
                ABTextItem_keyPressed(this->textFieldItem, keyCode);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, this->base.gameInputStrings->KEY_PRESSED, e);
        } JAVA_END_TRY;
}


void CustomTextBox_keyReleasedByDevice(CustomTextBox* this, int32_t keyCode, int32_t deviceId) {
}


void CustomTextBox_paint(CustomTextBox* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->base.backgroundColor);
        Graphics_fillRect(graphics, 0, 0, DisplayInfoSingleton_getLastWidth(this->base.base.displayInfo), DisplayInfoSingleton_getLastHeight(this->base.base.displayInfo));
        Graphics_setColor(graphics, this->base.foregroundColor);
        if (!J2MEUtil_isJ2ME()) {
            Graphics_drawString(graphics, Displayable_getTitle(this), 8, 1, 0);
        }
        CustomTextBox_paintXY(this, graphics, 8, Font_getHeight(Graphics_getFont(graphics)) + 2);
        GameCommandCanvas_paint((&this->base), graphics);
}


void CustomTextBox_paintXY(CustomTextBox* this, Graphics* graphics, int32_t x, int32_t y) {
        ABTextItem_paintXY(this->textFieldItem, graphics, x, y);
}


ABTextFieldItem* CustomTextBox_getTextFieldItem(CustomTextBox* this) {
        return this->textFieldItem;
}

