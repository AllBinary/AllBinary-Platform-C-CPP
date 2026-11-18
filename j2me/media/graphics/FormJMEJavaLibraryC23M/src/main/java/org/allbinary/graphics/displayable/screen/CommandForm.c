// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABStack.h"
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


static void* CommandForm_NULL_COMMAND_FORM;










void CommandForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommandForm_NULL_COMMAND_FORM = NullUtil_getInstance()->NULL_OBJECT;
}

void CommandForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommandForm", "Form");
    java_register_method("CommandForm", "initCommands", (void*) CommandForm_initCommands);
    java_register_method("CommandForm", "open", (void*) CommandForm_open);
    java_register_method("CommandForm", "close", (void*) CommandForm_close);
    java_register_method("CommandForm", "update", (void*) CommandForm_update);
    java_register_method("CommandForm", "getSourceId", (void*) CommandForm_getSourceId);
    java_register_method("CommandForm", "addCommand", (void*) CommandForm_addCommand);
    java_register_method("CommandForm", "removeAllCommands", (void*) CommandForm_removeAllCommands);
}

static void CommandForm_initFields(CommandForm* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->repaintProcessor = ScreenRepaintProcessorFactory_create(ScreenRepaintProcessorFactory_getInstance(), this);
    
}


CommandForm* CommandForm_getNullCommandForm(void) {
        if ((CommandForm_staticInit(), CommandForm_NULL_COMMAND_FORM) == NullUtil_getInstance()->NULL_OBJECT) {
            CommandForm_NULL_COMMAND_FORM = CommandForm_new((NullCommandListener_staticInit(), NullCommandListener_NULL_COMMAND_LISTENER), StringUtil_getInstance()->EMPTY_STRING, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((CommandForm*) (CommandForm_staticInit(), CommandForm_NULL_COMMAND_FORM));
}


void CommandForm_init(CommandForm* this, CommandListener* commandListener, const char* formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    CommandForm_register();
        Form_init(&this->base, formTitle);
        CommandForm_initFields(this);
        this->commandStack = StdUtil_createStack(StdUtil_getInstance());
        JAVA_TRY {
            Processor_process(this->repaintProcessor);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

CommandForm* CommandForm_new(CommandListener* commandListener, const char* formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    CommandForm* this = java_object_alloc(sizeof(CommandForm), "CommandForm");
    CommandForm_init(this, commandListener, formTitle, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void CommandForm_initCommands(CommandForm* this, CommandListener* cmdListener) {
}


void CommandForm_open(CommandForm* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "open");
}


// throws Exception
void CommandForm_close(CommandForm* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CLOSE);
}


// throws Exception
void CommandForm_update(CommandForm* this) {
        Processor_process(this->repaintProcessor);
}


int32_t CommandForm_getSourceId(CommandForm* this) {
        return 0;
}


void CommandForm_addCommand(CommandForm* this, Command* command) {
        Stack_push(this->commandStack, command);
        Displayable_addCommand((&this->base), command);
}


void CommandForm_removeAllCommands(CommandForm* this) {
        int32_t size = Stack_size(this->commandStack);
        for (int32_t index = 0; index < size; index++) {
            Displayable_removeCommand((&this->base), ((Command*) Stack_pop(this->commandStack)));
        }
}

