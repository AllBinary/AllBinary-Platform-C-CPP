// Generated Code Do Not Modify
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/math/MathUtil.h"






static void PrimitiveLongUtil_setCurrentTotalDigits(PrimitiveLongUtil* this, int32_t currentTotalDigits);



void PrimitiveLongUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PrimitiveLongUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PrimitiveLongUtil", nullptr);
    java_register_method("PrimitiveLongUtil", "getCharArray", (void*) PrimitiveLongUtil_getCharArray);
    java_register_method("PrimitiveLongUtil", "setCurrentTotalDigits", (void*) PrimitiveLongUtil_setCurrentTotalDigits);
    java_register_method("PrimitiveLongUtil", "getCurrentTotalDigits", (void*) PrimitiveLongUtil_getCurrentTotalDigits);
    java_register_method("PrimitiveLongUtil", "getMaxDigits", (void*) PrimitiveLongUtil_getMaxDigits);
}

static void PrimitiveLongUtil_initFields(PrimitiveLongUtil* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    this->currentTotalDigits = 0;
    this->primitiveLongSingleton = PrimitiveLongSingleton_getInstance();
}


PrimitiveLongUtil* PrimitiveLongUtil_createPowerOfTen(int32_t powerOfTen) {
        PrimitiveLongUtil* primitiveLongUtil = PrimitiveLongUtil_new(powerOfTen, NullUtil_getInstance()->NULL_OBJECT);
        if (powerOfTen % 10 != 0) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, primitiveLongUtil, commonStrings->CONSTRUCTOR, java_exception_new("Exception", "Max must be power of 10"));
        }
        return primitiveLongUtil;
}


void PrimitiveLongUtil_init(PrimitiveLongUtil* this, int32_t powerOfTen, void* unused) {
    PrimitiveLongUtil_register();
    PrimitiveLongUtil_initFields(this);
        this->maxDigits = MathUtil_getTotalDigits(MathUtil_getInstance(), powerOfTen);
        this->powerOfTen = powerOfTen;
        this->maxValue = (powerOfTen * 10) - 1;
        this->charArray = ((uint16_t*) java_array_new(sizeof(uint16_t), this->maxDigits));
}

PrimitiveLongUtil* PrimitiveLongUtil_new(int32_t powerOfTen, void* unused) {
    PrimitiveLongUtil* this = java_object_alloc(sizeof(PrimitiveLongUtil), "PrimitiveLongUtil");
    PrimitiveLongUtil_init(this, powerOfTen, unused);
    return this;
}


uint16_t* PrimitiveLongUtil_getCharArray(PrimitiveLongUtil* this, int32_t value) {
        if (value < 10) {
            PrimitiveLongUtil_setCurrentTotalDigits(this, 1);
            return this->primitiveLongSingleton->NUMBER_CHAR_ARRAYS[value];
        }
        if (value > this->maxValue) {
            PrimitiveLongUtil_setCurrentTotalDigits(this, 3);
            return this->primitiveLongSingleton->UNK;
        }
        int32_t index = 0;
        int32_t div = this->powerOfTen;
        int32_t lastValue = 0;
        while (div >= 1) {
            int32_t digit = (value - lastValue) / div;
            if (digit >= 0 && digit < 10) {
                if (digit == 0 && index == 0) {
                } else {
                    this->charArray[index++] = this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[digit];
                }
                lastValue += digit * div;
            }
            div = div / 10;
        }
        PrimitiveLongUtil_setCurrentTotalDigits(this, index);
        return this->charArray;
}


static void PrimitiveLongUtil_setCurrentTotalDigits(PrimitiveLongUtil* this, int32_t currentTotalDigits) {
        this->currentTotalDigits = currentTotalDigits;
}


int32_t PrimitiveLongUtil_getCurrentTotalDigits(PrimitiveLongUtil* this) {
        return this->currentTotalDigits;
}


int32_t PrimitiveLongUtil_getMaxDigits(PrimitiveLongUtil* this) {
        return this->maxDigits;
}

