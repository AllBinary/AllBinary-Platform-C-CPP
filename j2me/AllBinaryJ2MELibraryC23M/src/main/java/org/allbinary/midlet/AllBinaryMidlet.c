// Generated Code Do Not Modify
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/Display.h"
#include "javax/microedition/lcdui/Displayable.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "javax/microedition/midlet/MIDletStateChangeException.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/system/Memory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
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
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("javax/microedition/lcdui/Display.h")
#include "javax/microedition/lcdui/Display.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
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
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
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
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


static void* AllBinaryMidlet_NULL_ALLBINARY_MIDLET;
















void AllBinaryMidlet_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryMidlet_NULL_ALLBINARY_MIDLET = NullUtil_getInstance()->NULL_OBJECT;
}

void AllBinaryMidlet_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryMidlet", "MIDlet");
    java_register_method("AllBinaryMidlet", "setDisplay", (void*) AllBinaryMidlet_setDisplay);
    java_register_method("AllBinaryMidlet", "getDisplay", (void*) AllBinaryMidlet_getDisplay);
    java_register_method("AllBinaryMidlet", "getCurrentDisplayable", (void*) AllBinaryMidlet_getCurrentDisplayable);
    java_register_method("AllBinaryMidlet", "setDestroyed", (void*) AllBinaryMidlet_setDestroyed);
    java_register_method("AllBinaryMidlet", "isDestroyed", (void*) AllBinaryMidlet_isDestroyed);
    java_register_method("AllBinaryMidlet", "startApp", (void*) AllBinaryMidlet_startApp);
    java_register_method("AllBinaryMidlet", "pauseApp", (void*) AllBinaryMidlet_pauseApp);
    java_register_method("AllBinaryMidlet", "destroyAppInRunnable", (void*) AllBinaryMidlet_destroyAppInRunnable);
    java_register_method("AllBinaryMidlet", "destroyApp", (void*) AllBinaryMidlet_destroyApp);
    java_register_method("AllBinaryMidlet", "setStartStateHashtable", (void*) AllBinaryMidlet_setStartStateHashtable);
    java_register_method("AllBinaryMidlet", "getStartStateHashtable", (void*) AllBinaryMidlet_getStartStateHashtable);
    java_register_method("AllBinaryMidlet", "getCurrentStateHashtable", (void*) AllBinaryMidlet_getCurrentStateHashtable);
    java_register_method("AllBinaryMidlet", "commandAction", (void*) AllBinaryMidlet_commandAction);
}

static void AllBinaryMidlet_initFields(AllBinaryMidlet* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->SET_DISPLAY = "setDisplay";
    this->SETTING_ = "Setting: ";
    this->_DISPLAY__ = " Display: ";
    this->SETTING_NO_TITLE = "Setting: No Title, Display: ";
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->midletDestroyed = false;
}


AllBinaryMidlet* AllBinaryMidlet_getNullInstance(void) {
        if ((AllBinaryMidlet_staticInit(), AllBinaryMidlet_NULL_ALLBINARY_MIDLET) == NullUtil_getInstance()->NULL_OBJECT) {
            AllBinaryMidlet_NULL_ALLBINARY_MIDLET = AllBinaryMidlet_new();
        }
        return ((AllBinaryMidlet*) (AllBinaryMidlet_staticInit(), AllBinaryMidlet_NULL_ALLBINARY_MIDLET));
}


void AllBinaryMidlet_init(AllBinaryMidlet* this) {
    AllBinaryMidlet_register();
    MIDlet_init(&this->base);
    AllBinaryMidlet_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, "AllBinaryMidlet::AllBinaryMidlet");
}

AllBinaryMidlet* AllBinaryMidlet_new(void) {
    AllBinaryMidlet* this = java_object_alloc(sizeof(AllBinaryMidlet), "AllBinaryMidlet");
    AllBinaryMidlet_init(this);
    return this;
}


void AllBinaryMidlet_setDisplay(AllBinaryMidlet* this, Displayable* newDisplay) {
        const char* title = StringUtil_getInstance()->EMPTY_STRING;
        if (newDisplay != (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS)) {
            title = Displayable_getTitle(newDisplay);
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), this->SETTING_), title), this->_DISPLAY__), StringUtil_toString(StringUtil_getInstance(), newDisplay))), this, this->SET_DISPLAY);
        }
        Display* display = AllBinaryMidlet_getDisplay(this);
        Display_setCurrent(display, newDisplay);
}


Display* AllBinaryMidlet_getDisplay(AllBinaryMidlet* this) {
        return Display_getDisplay(this);
}


Displayable* AllBinaryMidlet_getCurrentDisplayable(AllBinaryMidlet* this) {
        return Display_getCurrent(Display_getDisplay(this));
}


void AllBinaryMidlet_setDestroyed(AllBinaryMidlet* this, bool destroyed) {
        this->midletDestroyed = destroyed;
}


bool AllBinaryMidlet_isDestroyed(AllBinaryMidlet* this) {
        return this->midletDestroyed;
}


// throws MIDletStateChangeException
void AllBinaryMidlet_startApp(AllBinaryMidlet* this) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void AllBinaryMidlet_pauseApp(AllBinaryMidlet* this) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void AllBinaryMidlet_destroyAppInRunnable(AllBinaryMidlet* this, bool unconditional, bool isProgress) {
}


void AllBinaryMidlet_destroyApp(AllBinaryMidlet* this, bool unconditional) {
        const char* METHOD_NAME = "AllBinaryMidlet::destroyApp";
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, METHOD_NAME);
            PreLogUtil_put(Memory_getInfo(), this, METHOD_NAME);
            AllBinaryMidlet_setDestroyed(this, true);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, METHOD_NAME, e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryMidlet_setStartStateHashtable(AllBinaryMidlet* this, ABHashtable* hashtable) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), StringUtil_toString(StringUtil_getInstance(), hashtable))), this, "setStartStateHashtable");
        this->hashtable = hashtable;
}


// throws Exception
ABHashtable* AllBinaryMidlet_getStartStateHashtable(AllBinaryMidlet* this) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), StringUtil_toString(StringUtil_getInstance(), this->hashtable))), this, "getStartStateHashtable");
        return this->hashtable;
}


// throws Exception
ABHashtable* AllBinaryMidlet_getCurrentStateHashtable(AllBinaryMidlet* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getStateHashtable");
        return StdUtil_getInstance()->NULL_TABLE;
}


void AllBinaryMidlet_commandAction(AllBinaryMidlet* this, Command* command, Displayable* displayable) {
}

