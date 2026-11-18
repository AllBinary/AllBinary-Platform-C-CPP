// Generated Code Do Not Modify
#include "org/allbinary/game/score/displayable/HighScoreTextBox.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/PostGameCommandFactory.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/SimpleTextPaintable.h"
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#include "org/allbinary/game/score/displayable/HighScoreUtil.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h")
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/ABTextFieldItem.h")
#include "org/allbinary/game/score/displayable/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/ABTextFieldItem.h")
#include "org/allbinary/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/ABTextFieldItem.h")
#include "org/allbinary/game/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/score/ABTextFieldItem.h")
#include "org/allbinary/game/score/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/score/ABTextFieldItem.h")
#include "org/allbinary/game/score/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/score/ABTextFieldItem.h")
#include "org/allbinary/game/score/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ABTextFieldItem.h")
#include "org/allbinary/graphics/paint/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ABTextFieldItem.h")
#include "org/allbinary/graphics/paint/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ABTextFieldItem.h")
#include "org/allbinary/graphics/paint/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/input/event/ABTextFieldItem.h")
#include "org/allbinary/input/event/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/ABTextFieldItem.h")
#include "org/allbinary/logic/system/os/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/ABTextFieldItem.h")
#include "org/allbinary/logic/system/os/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ABTextFieldItem.h")
#include "org/allbinary/logic/system/security/licensing/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ABTextFieldItem.h")
#include "org/allbinary/logic/system/security/licensing/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/PostGameCommandFactory.h")
#include "org/allbinary/PostGameCommandFactory.h"
#endif
#if __has_include("org/allbinary/game/score/displayable/ABTextFieldItem.h")
#include "org/allbinary/game/score/displayable/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("javax/microedition/lcdui/ABTextFieldItem.h")
#include "javax/microedition/lcdui/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/ABTextFieldItem.h")
#include "org/allbinary/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/ABTextFieldItem.h")
#include "org/allbinary/game/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/score/ABTextFieldItem.h")
#include "org/allbinary/game/score/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/score/ABTextFieldItem.h")
#include "org/allbinary/game/score/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/game/score/ABTextFieldItem.h")
#include "org/allbinary/game/score/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/color/ABTextFieldItem.h")
#include "org/allbinary/graphics/color/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ABTextFieldItem.h")
#include "org/allbinary/graphics/paint/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ABTextFieldItem.h")
#include "org/allbinary/graphics/paint/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ABTextFieldItem.h")
#include "org/allbinary/graphics/paint/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/input/event/ABTextFieldItem.h")
#include "org/allbinary/input/event/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/ABTextFieldItem.h")
#include "org/allbinary/logic/system/os/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/ABTextFieldItem.h")
#include "org/allbinary/logic/system/os/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ABTextFieldItem.h")
#include "org/allbinary/logic/system/security/licensing/ABTextFieldItem.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ABTextFieldItem.h")
#include "org/allbinary/logic/system/security/licensing/ABTextFieldItem.h"
#endif











void HighScoreTextBox_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoreTextBox_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoreTextBox", "CustomTextBox");
    java_register_method("HighScoreTextBox", "initCommands", (void*) HighScoreTextBox_initCommands);
    java_register_method("HighScoreTextBox", "open", (void*) HighScoreTextBox_open);
    java_register_method("HighScoreTextBox", "close", (void*) HighScoreTextBox_close);
    java_register_method("HighScoreTextBox", "update", (void*) HighScoreTextBox_update);
    java_register_method("HighScoreTextBox", "paint", (void*) HighScoreTextBox_paint);
    java_register_method("HighScoreTextBox", "saveHighScore", (void*) HighScoreTextBox_saveHighScore);
    java_register_method("HighScoreTextBox", "submit", (void*) HighScoreTextBox_submit);
}

static void HighScoreTextBox_initFields(HighScoreTextBox* this) {
    this->virtualKeyboardEventHandler = VirtualKeyboardEventHandler_getInstance();
    
    this->pleaseWait = SimpleTextPaintable_new(this->base.base.base.commonStrings->PLEASE_WAIT, BasicColorFactory_getInstance()->WHITE);
    this->paintable = NullPaintable_getInstance();
    this->submitted = false;
}


void HighScoreTextBox_init(HighScoreTextBox* this, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    HighScoreTextBox_register();
        CustomTextBox_init(&this->base, cmdListener, "New High Score Enter Name:", name, 12, (TextField_staticInit(), TextField_ANY), Font_getDefaultFont(), backgrounBasicColor, foregroundBasicColor);
        HighScoreTextBox_initFields(this);
        this->highScoreUtil = HighScoreUtil_new(highScoresFactoryInterface, highScoresHelper, abeClientInformation, gameInfo, cmdListener, name, highScore);
        GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
        if (GenericOperatingSystem_isOverScan(operatingSystemInterface)) {
            const char* username = InApplicationPurchaseFactory_getUserName(InApplicationPurchaseFactory_getInstance());
            ABTextFieldItem_setString(CustomTextBox_getTextFieldItem(this), username);
        }
}

HighScoreTextBox* HighScoreTextBox_new(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    HighScoreTextBox* this = java_object_alloc(sizeof(HighScoreTextBox), "HighScoreTextBox");
    HighScoreTextBox_init(this, highScoresFactoryInterface, highScoresHelper, abeClientInformation, gameInfo, cmdListener, name, highScore, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void HighScoreTextBox_initCommands(HighScoreTextBox* this, CommandListener* cmdListener) {
        MyCanvas_removeAllCommands(this);
        PostGameCommandFactory_addCommands(PostGameCommandFactory_getInstance(), this);
        MyCanvas_addCommand(this, (HighScoreUtil_staticInit(), HighScoreUtil_SUBMIT_TEXTBOX_COMMAND));
        MyCanvas_setCommandListener(this, cmdListener);
}


void HighScoreTextBox_open(HighScoreTextBox* this) {
        VirtualKeyboardEventHandler_open(this->virtualKeyboardEventHandler);
        this->paintable = NullPaintable_getInstance();
        GameCommandCanvas_open((&this->base));
}


// throws Exception
void HighScoreTextBox_close(HighScoreTextBox* this) {
        VirtualKeyboardEventHandler_close(this->virtualKeyboardEventHandler);
        this->paintable = this->pleaseWait;
        RepaintBehavior_onChangeRepaint(this->base.base.repaintBehavior, this);
        GameCommandCanvas_close((&this->base));
        MyCanvas_removeCommand(this, (HighScoreUtil_staticInit(), HighScoreUtil_SUBMIT_TEXTBOX_COMMAND));
        HighScoreTextBox_update(this);
        if (this->submitted) {
            HighScoreUtil_saveHighScore(this->highScoreUtil);
        } else {
        }
        this->paintable = NullPaintable_getInstance();
        RepaintBehavior_onChangeRepaint(this->base.base.repaintBehavior, this);
}


// throws Exception
void HighScoreTextBox_update(HighScoreTextBox* this) {
        const char* name = ABTextFieldItem_getString(CustomTextBox_getTextFieldItem(this));
        HighScoreUtil_update(this->highScoreUtil, name);
        GameCommandCanvas_update((&this->base));
}


void HighScoreTextBox_paint(HighScoreTextBox* this, Graphics* graphics) {
        CustomTextBox_paint((&this->base), graphics);
        Paintable_paint(this->paintable, graphics);
}


void HighScoreTextBox_saveHighScore(HighScoreTextBox* this) {
        HighScoreUtil_saveHighScore(this->highScoreUtil);
}


void HighScoreTextBox_submit(HighScoreTextBox* this) {
        HighScoreUtil_submit(this->highScoreUtil, this);
}

