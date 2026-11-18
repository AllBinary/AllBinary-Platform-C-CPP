// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/BasicTouchButtonsBuilder.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonUpResource.h"
#include "org/allbinary/input/motion/button/TouchButtonDownResource.h"
#include "org/allbinary/input/motion/button/TouchButtonTurnLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonTurnRightResource.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif




void BasicTouchButtonsBuilder_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicTouchButtonsBuilder_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicTouchButtonsBuilder", "BaseTouchInput");
    java_register_method("BasicTouchButtonsBuilder", "getList", (void*) BasicTouchButtonsBuilder_getList);
}

static void BasicTouchButtonsBuilder_initFields(BasicTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void BasicTouchButtonsBuilder_init(BasicTouchButtonsBuilder* this) {
    BasicTouchButtonsBuilder_register();
    BaseTouchInput_init(&this->base);
    BasicTouchButtonsBuilder_initFields(this);
}

BasicTouchButtonsBuilder* BasicTouchButtonsBuilder_new(void) {
    BasicTouchButtonsBuilder* this = java_object_alloc(sizeof(BasicTouchButtonsBuilder), "BasicTouchButtonsBuilder");
    BasicTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListD_new();
            CommonButtons* commonButtons = CommonButtons_getInstance();
            TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
            BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory_new();
            TouchButton* UP = TouchButton_createButton(BasicTouchInputFactory_getInstance()->UP, TouchButtonUpResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->SECOND_FROM_BOTTOM_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* DOWN = TouchButton_createButton(BasicTouchInputFactory_getInstance()->DOWN, TouchButtonDownResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* LEFT = TouchButton_createButton(BasicTouchInputFactory_getInstance()->SPECIAL_BUTTON_FOUR, TouchButtonTurnLeftResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_SECOND_FROM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* RIGHT = TouchButton_createButton(BasicTouchInputFactory_getInstance()->SPECIAL_BUTTON_THREE, TouchButtonTurnRightResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            BasicArrayList_add(list, UP);
            BasicArrayList_add(list, LEFT);
            BasicArrayList_add(list, RIGHT);
            BasicArrayList_add(list, DOWN);
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

