// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/CommandRunnable.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"





void CommandRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CommandRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommandRunnable", nullptr);
    java_register_method("CommandRunnable", "run", (void*) CommandRunnable_run);
}

static void CommandRunnable_initFields(CommandRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void CommandRunnable_init(CommandRunnable* this, CommandFormInputProcessor* commandFormInputProcessor, Command* command) {
    CommandRunnable_register();
    CommandRunnable_initFields(this);
        this->commandFormInputProcessor = commandFormInputProcessor;
        this->command = command;
}

CommandRunnable* CommandRunnable_new(CommandFormInputProcessor* commandFormInputProcessor, Command* command) {
    CommandRunnable* this = java_object_alloc(sizeof(CommandRunnable), "CommandRunnable");
    CommandRunnable_init(this, commandFormInputProcessor, command);
    return this;
}


void CommandRunnable_run(CommandRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
            MyCanvas* canvas = BasicMenuInputProcessor_getCanvas(this->commandFormInputProcessor);
            CommandListener* commandListener = MyCanvas_getCustomCommandListener(canvas);
            CommandListener_commandAction(commandListener, this->command, canvas);
            LogUtil_putF(this->logUtil, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

