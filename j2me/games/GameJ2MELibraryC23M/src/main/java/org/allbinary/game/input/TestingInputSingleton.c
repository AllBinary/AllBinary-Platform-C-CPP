// Generated Code Do Not Modify
#include "org/allbinary/game/input/TestingInputSingleton.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/game/input/GameInputInterface.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/GameInputProcessorUtil.h"
#include "org/allbinary/game/input/TestInputInterface.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif


static TestingInputSingleton* TestingInputSingleton_instance;









void TestingInputSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TestingInputSingleton_instance = TestingInputSingleton_new();
}

void TestingInputSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TestingInputSingleton", "AllBinaryGameLayer");
    java_register_method("TestingInputSingleton", "initInputProcessors", (void*) TestingInputSingleton_initInputProcessors);
    java_register_method("TestingInputSingleton", "initInputProcessorsForTestInput", (void*) TestingInputSingleton_initInputProcessorsForTestInput);
    java_register_method("TestingInputSingleton", "processInputList", (void*) TestingInputSingleton_processInputList);
    java_register_method("TestingInputSingleton", "processInput", (void*) TestingInputSingleton_processInput);
    java_register_method("TestingInputSingleton", "paint", (void*) TestingInputSingleton_paint);
    java_register_method("TestingInputSingleton", "implmentsGameInputInterface", (void*) TestingInputSingleton_implmentsGameInputInterface);
}

static void TestingInputSingleton_initFields(TestingInputSingleton* this) {
    this->inputProcessorArray = ((GameInputProcessor**) java_array_new(sizeof(GameInputProcessor*), InputFactory_getInstance()->MAX));
    this->testInputPaintable = NullPaintable_getInstance();
}


TestingInputSingleton* TestingInputSingleton_getInstance(void) {
        return (TestingInputSingleton_staticInit(), TestingInputSingleton_instance);
}


void TestingInputSingleton_init(TestingInputSingleton* this) {
    TestingInputSingleton_register();
        AllBinaryGameLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, (RectangleFactory_staticInit(), RectangleFactory_SINGLETON), ViewPosition_getInstanceD());
        TestingInputSingleton_initFields(this);
        GameInputProcessorUtil_initMethod(this->inputProcessorArray);
}

TestingInputSingleton* TestingInputSingleton_new(void) {
    TestingInputSingleton* this = java_object_alloc(sizeof(TestingInputSingleton), "TestingInputSingleton");
    TestingInputSingleton_init(this);
    return this;
}


void TestingInputSingleton_initInputProcessors(TestingInputSingleton* this) {
}


void TestingInputSingleton_initInputProcessorsForTestInput(TestingInputSingleton* this, TestInputInterface* aTestInputInterface) {
        TestInputInterface* testInputInterface = aTestInputInterface;
        this->testInputPaintable = testInputInterface;
        this->inputProcessorArray[(Canvas_staticInit(), Canvas_UP)] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_up(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[(Canvas_staticInit(), Canvas_DOWN)] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_down(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[(Canvas_staticInit(), Canvas_LEFT)] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_left(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[(Canvas_staticInit(), Canvas_RIGHT)] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_right(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[(Canvas_staticInit(), Canvas_KEY_NUM7)] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_strafeLeft(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[(Canvas_staticInit(), Canvas_KEY_NUM9)] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_strafeRight(testInputInterface);
        }
#endif
;
        GameInputProcessorUtil_initMethod(this->inputProcessorArray);
}


// throws Exception
// synchronized
void TestingInputSingleton_processInputList(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, BasicArrayList* list) {
        int32_t key = 0;
        GameKeyEvent* gameKeyEvent = nullptr;
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            gameKeyEvent = (((GameKeyEvent*) list->objectArray[index]));
            key = GameKeyEvent_getKey(gameKeyEvent);
            GameInputProcessor_processEvent(this->inputProcessorArray[key], allbinaryLayerManager, (GameKeyEvent_staticInit(), GameKeyEvent_NONE));
        }
}


// throws Exception
// synchronized
void TestingInputSingleton_processInput(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager) {
        TestingInputSingleton_processInputList(this, allbinaryLayerManager, AllBinaryGameLayer_getGameKeyEventList(this));
        BasicArrayList_clear(AllBinaryGameLayer_getGameKeyEventList(this));
}


void TestingInputSingleton_paint(TestingInputSingleton* this, Graphics* graphics) {
        PaintableInterface_paint(this->testInputPaintable, graphics);
}


bool TestingInputSingleton_implmentsGameInputInterface(TestingInputSingleton* this) {
        return true;
}

