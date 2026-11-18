// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/WebCommandProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"


static WebCommandProcessor* WebCommandProcessor_instance;



void WebCommandProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    WebCommandProcessor_instance = WebCommandProcessor_new();
}

void WebCommandProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WebCommandProcessor", nullptr);
    java_register_method("WebCommandProcessor", "process", (void*) WebCommandProcessor_process);
}

static void WebCommandProcessor_initFields(WebCommandProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->aboutCommandProcessor = AboutCommandProcessor_getInstance();
    this->list = BasicArrayListD_new();
}

void WebCommandProcessor_init(WebCommandProcessor* this) {
    WebCommandProcessor_register();
    WebCommandProcessor_initFields(this);
}

WebCommandProcessor* WebCommandProcessor_new(void) {
    WebCommandProcessor* this = java_object_alloc(sizeof(WebCommandProcessor), "WebCommandProcessor");
    WebCommandProcessor_init(this);
    return this;
}


WebCommandProcessor* WebCommandProcessor_getInstance(void) {
        return (WebCommandProcessor_staticInit(), WebCommandProcessor_instance);
}


void WebCommandProcessor_process(WebCommandProcessor* this, CommandListener* midletCommandListener, Command* command, Canvas* canvas) {
        JAVA_TRY {
            if (Desktop_isDesktopSupported() && JAVA_CALL(Desktop_getDesktop(), isSupported, (Desktop_staticInit(), Desktop_Action)->BROWSE)) {
                JAVA_CALL(Desktop_getDesktop(), browse, URI_new(((const char*) BasicArrayList_removeAt(this->list, 0))));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}

