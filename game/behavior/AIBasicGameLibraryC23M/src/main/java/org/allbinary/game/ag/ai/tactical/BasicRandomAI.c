// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/tactical/BasicRandomAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/ag/ai/InputProbability.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#if __has_include("org/allbinary/game/ag/ai/tactical/TimeDelayHelper.h")
#include "org/allbinary/game/ag/ai/tactical/TimeDelayHelper.h"
#endif
#if __has_include("javax/microedition/lcdui/TimeDelayHelper.h")
#include "javax/microedition/lcdui/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/ai/TimeDelayHelper.h")
#include "org/allbinary/game/ai/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/TimeDelayHelper.h")
#include "org/allbinary/game/ag/ai/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/input/TimeDelayHelper.h")
#include "org/allbinary/game/input/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/rand/TimeDelayHelper.h")
#include "org/allbinary/game/rand/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/layer/TimeDelayHelper.h")
#include "org/allbinary/layer/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/layer/TimeDelayHelper.h")
#include "org/allbinary/layer/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/util/visitor/TimeDelayHelper.h")
#include "org/allbinary/logic/util/visitor/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/tactical/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/ag/ai/tactical/GameTickTimeDelayHelper.h"
#endif
#if __has_include("javax/microedition/lcdui/GameTickTimeDelayHelper.h")
#include "javax/microedition/lcdui/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/ai/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/ai/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/ag/ai/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/input/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/input/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/rand/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/rand/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/layer/GameTickTimeDelayHelper.h")
#include "org/allbinary/layer/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/layer/GameTickTimeDelayHelper.h")
#include "org/allbinary/layer/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/util/visitor/GameTickTimeDelayHelper.h")
#include "org/allbinary/logic/util/visitor/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif





void BasicRandomAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicRandomAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicRandomAI", "BasicAI");
    java_register_method("BasicRandomAI", "processAI", (void*) BasicRandomAI_processAI);
}

static void BasicRandomAI_initFields(BasicRandomAI* this) {
    this->i_random = 0;
    
    
    this->keyArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ (Canvas_staticInit(), Canvas_UP), (Canvas_staticInit(), Canvas_DOWN), (Canvas_staticInit(), Canvas_LEFT), (Canvas_staticInit(), Canvas_RIGHT), (Canvas_staticInit(), Canvas_KEY_NUM1), (Canvas_staticInit(), Canvas_KEY_NUM7), (Canvas_staticInit(), Canvas_KEY_NUM9) }) / sizeof(int32_t), (int32_t[]){ (Canvas_staticInit(), Canvas_UP), (Canvas_staticInit(), Canvas_DOWN), (Canvas_staticInit(), Canvas_LEFT), (Canvas_staticInit(), Canvas_RIGHT), (Canvas_staticInit(), Canvas_KEY_NUM1), (Canvas_staticInit(), Canvas_KEY_NUM7), (Canvas_staticInit(), Canvas_KEY_NUM9) }));
    this->myRandomFactory = MyRandomFactory_getInstance();
}


void BasicRandomAI_init(BasicRandomAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, InputProbability* inputProbability, Visitor* visitor) {
    BasicRandomAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        BasicRandomAI_initFields(this);
        this->inputProbability = inputProbability;
        this->visitor = visitor;
}

BasicRandomAI* BasicRandomAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, InputProbability* inputProbability, Visitor* visitor) {
    BasicRandomAI* this = java_object_alloc(sizeof(BasicRandomAI), "BasicRandomAI");
    BasicRandomAI_init(this, ownerLayerInterface, gameInput, inputProbability, visitor);
    return this;
}


// throws Exception
void BasicRandomAI_processAI(BasicRandomAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (TimeDelayHelper_isTime(InputProbability_getTimeDelayHelper(this->inputProbability), GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            this->i_random = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, InputProbability_getMax(this->inputProbability));
            bool repeat = false;
            int32_t* repeatLikelyhoodIntegerArray = InputProbability_getRepeatLikelyhoodIntegerArray(this->inputProbability);
            if (BasicAI_getLastKey(this) != -1 && Integer_intValue(repeatLikelyhoodIntegerArray[BasicAI_getLastKey(this)]) >= this->i_random) {
                repeat = true;
            }
            if (!repeat) {
                int32_t** likelyhoodIntegerArray = InputProbability_getLikelyhoodIntegerArray(this->inputProbability);
                this->i_random = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, InputProbability_getMax(this->inputProbability));
                int32_t size = java_array_length(this->keyArray);
                int32_t* likelyhoodIntegerKeyArray = nullptr;
                for (int32_t index = 0; index < size; index++) {
                    int32_t key = this->keyArray[index];
                    likelyhoodIntegerKeyArray = likelyhoodIntegerArray[key];
                    if (java_array_length(likelyhoodIntegerArray) >= key && likelyhoodIntegerKeyArray[0] != 0) {
                        if (this->i_random >= Integer_intValue(likelyhoodIntegerKeyArray[0]) && this->i_random < Integer_intValue(likelyhoodIntegerKeyArray[1])) {
                            BasicAI_setLastKey(this, key);
                            break;
                        }
                    }
                }
            }
            Visitor_visit(this->visitor, this);
        }
}

