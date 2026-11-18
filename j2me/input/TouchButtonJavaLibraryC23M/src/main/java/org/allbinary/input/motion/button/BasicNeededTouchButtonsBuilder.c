// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/BasicNeededTouchButtonsBuilder.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif




void BasicNeededTouchButtonsBuilder_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicNeededTouchButtonsBuilder_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicNeededTouchButtonsBuilder", "BaseTouchInput");
    java_register_method("BasicNeededTouchButtonsBuilder", "getList", (void*) BasicNeededTouchButtonsBuilder_getList);
}

static void BasicNeededTouchButtonsBuilder_initFields(BasicNeededTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void BasicNeededTouchButtonsBuilder_init(BasicNeededTouchButtonsBuilder* this) {
    BasicNeededTouchButtonsBuilder_register();
    BaseTouchInput_init(&this->base);
    BasicNeededTouchButtonsBuilder_initFields(this);
}

BasicNeededTouchButtonsBuilder* BasicNeededTouchButtonsBuilder_new(void) {
    BasicNeededTouchButtonsBuilder* this = java_object_alloc(sizeof(BasicNeededTouchButtonsBuilder), "BasicNeededTouchButtonsBuilder");
    BasicNeededTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* BasicNeededTouchButtonsBuilder_getList(BasicNeededTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListD_new();
            TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
            BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory_new();
            CommonButtons* commonButtons = CommonButtons_getInstance();
            Animation* animationInterface = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
            TouchButton* UP = TouchButton_new7(BasicTouchInputFactory_getInstance()->UP, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->SECOND_FROM_BOTTOM_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* DOWN = TouchButton_new7(BasicTouchInputFactory_getInstance()->DOWN, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* LEFT = TouchButton_new7(BasicTouchInputFactory_getInstance()->LEFT, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_SECOND_FROM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* RIGHT = TouchButton_new7(BasicTouchInputFactory_getInstance()->RIGHT, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            BasicArrayList_add(list, UP);
            BasicArrayList_add(list, DOWN);
            BasicArrayList_add(list, LEFT);
            BasicArrayList_add(list, RIGHT);
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

