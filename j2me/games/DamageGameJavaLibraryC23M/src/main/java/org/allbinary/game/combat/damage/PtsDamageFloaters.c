// Generated Code Do Not Modify
#include "org/allbinary/game/combat/damage/PtsDamageFloaters.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorArrayIndexer.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/java/character/CharArrayFactory.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/character/CharArrayFactory.h")
#include "org/allbinary/logic/java/character/CharArrayFactory.h"
#endif


static BasicColorArrayIndexer* PtsDamageFloaters_basicColorArrayIndexer;




void PtsDamageFloaters_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PtsDamageFloaters_basicColorArrayIndexer = BasicColorArrayIndexer_new(((BasicColor**) java_array_from(sizeof(BasicColor*), sizeof((BasicColor*[]){ BasicColorFactory_getInstance()->WHITE, BasicColorFactory_getInstance()->RED, BasicColorFactory_getInstance()->YELLOW, BasicColorFactory_getInstance()->BLUE }) / sizeof(BasicColor*), (BasicColor*[]){ BasicColorFactory_getInstance()->WHITE, BasicColorFactory_getInstance()->RED, BasicColorFactory_getInstance()->YELLOW, BasicColorFactory_getInstance()->BLUE })));
}

void PtsDamageFloaters_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PtsDamageFloaters", "DamageFloaters");
    java_register_method("PtsDamageFloaters", "add", (void*) PtsDamageFloaters_add);
    java_register_method("PtsDamageFloaters", "paint", (void*) PtsDamageFloaters_paint);
}

static void PtsDamageFloaters_initFields(PtsDamageFloaters* this) {
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    
    this->lastDamage = ((int32_t*) java_array_new(sizeof(int32_t), 5));
    this->lastDamageString = ((uint16_t**) java_array_new2(sizeof(uint16_t), 5, 0));
    this->lastDamageStringSizeArray = ((int32_t*) java_array_new(sizeof(int32_t), 5));
    this->circularIndexUtil = CircularIndexUtil_createInstance(5);
    
    this->myRandomFactory = MyRandomFactory_getInstance();
}


void PtsDamageFloaters_init(PtsDamageFloaters* this, AllBinaryLayer* layerInterface) {
    PtsDamageFloaters_register();
    DamageFloaters_init(&this->base);
    PtsDamageFloaters_initFields(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(100000);
        this->layerInterface = layerInterface;
        uint16_t* CHAR_ARRAY = CharArrayFactory_getZeroCharArray(CharArrayFactory_getInstance());
        for (int32_t index = java_array_length(this->lastDamageString) - 1; index >= 0; index--) {
            this->lastDamageString[index] = CHAR_ARRAY;
        }
}

PtsDamageFloaters* PtsDamageFloaters_new(AllBinaryLayer* layerInterface) {
    PtsDamageFloaters* this = java_object_alloc(sizeof(PtsDamageFloaters), "PtsDamageFloaters");
    PtsDamageFloaters_init(this, layerInterface);
    return this;
}


void PtsDamageFloaters_add(PtsDamageFloaters* this, int32_t damage) {
        int32_t index = CircularIndexUtil_getIndex(this->circularIndexUtil);
        this->lastDamage[index] = damage;
        this->lastDamageString[index] = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, this->lastDamage[index]);
        this->lastDamageStringSizeArray[index] = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
        CircularIndexUtil_next(this->circularIndexUtil);
}


void PtsDamageFloaters_paint(PtsDamageFloaters* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this->layerInterface);
        int32_t x = GPoint_getX(viewPosition);
        int32_t y = GPoint_getY(viewPosition);
        for (int32_t index = java_array_length(this->lastDamage) - 1; index >= 0; index--) {
            if (this->lastDamage[index] != 0) {
                int32_t delta = 10 * (index + 2);
                BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicColorArrayIndexer_get((PtsDamageFloaters_staticInit(), PtsDamageFloaters_basicColorArrayIndexer)));
                Graphics_drawChars(graphics, this->lastDamageString[index], 0, this->lastDamageStringSizeArray[index], x - MyRandomFactory_getNextInt(this->myRandomFactory, delta), y - delta, 0);
                BasicColorArrayIndexer_next((PtsDamageFloaters_staticInit(), PtsDamageFloaters_basicColorArrayIndexer));
            }
            this->lastDamage[index] = 0;
        }
}

