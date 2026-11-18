// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/ImageItem.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/form/ScreenInfo.h"
#include "org/allbinary/logic/VectorUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/form/item/CommandTextItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#if __has_include("org/allbinary/graphics/form/ScreenInfo.h")
#include "org/allbinary/graphics/form/ScreenInfo.h"
#endif
#if __has_include("org/allbinary/graphics/form/ScreenInfo.h")
#include "org/allbinary/graphics/form/ScreenInfo.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif





void CommandTextItemArrayFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CommandTextItemArrayFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommandTextItemArrayFactory", nullptr);
    java_register_method("CommandTextItemArrayFactory", "getInstance", (void*) CommandTextItemArrayFactory_getInstance);
}

static void CommandTextItemArrayFactory_initFields(CommandTextItemArrayFactory* this) {
    this->list = BasicArrayListD_new();
    
}


void CommandTextItemArrayFactory_init(CommandTextItemArrayFactory* this, Visitor* visitorInterface) {
    CommandTextItemArrayFactory_register();
    CommandTextItemArrayFactory_initFields(this);
        this->visitorInterface = visitorInterface;
}

CommandTextItemArrayFactory* CommandTextItemArrayFactory_new(Visitor* visitorInterface) {
    CommandTextItemArrayFactory* this = java_object_alloc(sizeof(CommandTextItemArrayFactory), "CommandTextItemArrayFactory");
    CommandTextItemArrayFactory_init(this, visitorInterface);
    return this;
}


ABCustomItem** CommandTextItemArrayFactory_getInstance(CommandTextItemArrayFactory* this, void* vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        VectorUtil* vectorUtil = VectorUtil_getInstance();
        int32_t size = VectorUtil_getSize(vectorUtil, vector);
        BasicArrayList_clear(this->list);
        CommandTextItem* textItem = nullptr;
        int32_t priorityLimit = 7;
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        bool isLargeEnoughDisplayForBigMenu = (DisplayInfoSingleton_isPortrait(displayInfo) && DisplayInfoSingleton_getLastHeight(displayInfo) >= ScreenInfo_getInstance()->MEDIUM_WIDTH) || (!DisplayInfoSingleton_isPortrait(displayInfo) && DisplayInfoSingleton_getLastWidth(displayInfo) >= ScreenInfo_getInstance()->MEDIUM_WIDTH);
        if (!isLargeEnoughDisplayForBigMenu && size > 3) {
            priorityLimit = 3;
        }
        Command* command = nullptr;
        for (int32_t index = 0; index < size; index++) {
            command = ((Command*) VectorUtil_elementAt(vectorUtil, vector, index));
            if (Command_getPriority(command) < priorityLimit) {
                bool aBoolean = ((bool) Visitor_visit(this->visitorInterface, command));
                if (Boolean_booleanValue(aBoolean)) {
                    textItem = CommandTextItem_new(command, (ImageItem_staticInit(), ImageItem_LAYOUT_DEFAULT), StringUtil_getInstance()->EMPTY_STRING, backgroundBasicColor, foregroundBasicColor);
                    BasicArrayList_add(this->list, textItem);
                }
            }
        }
        ABCustomItem** textItemArray = ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), BasicArrayList_size(this->list)));
        int32_t size2 = java_array_length(textItemArray);
        for (int32_t index = 0; index < size2; index++) {
            textItemArray[index] = ((ABCustomItem*) this->list->objectArray[index]);
        }
        return textItemArray;
}

