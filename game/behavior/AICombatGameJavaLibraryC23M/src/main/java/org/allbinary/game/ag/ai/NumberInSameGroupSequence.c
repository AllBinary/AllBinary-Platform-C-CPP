// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/NumberInSameGroupSequence.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"





void NumberInSameGroupSequence_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NumberInSameGroupSequence_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NumberInSameGroupSequence", nullptr);
}

static void NumberInSameGroupSequence_initFields(NumberInSameGroupSequence* this) {
    
    
    
    
    
    
    
    
    
    
    
}


NumberInSameGroupSequence* NumberInSameGroupSequence_getInstance(void) {
        return NumberInSameGroupSequence_new();
}


void NumberInSameGroupSequence_init(NumberInSameGroupSequence* this) {
    NumberInSameGroupSequence_register();
    NumberInSameGroupSequence_initFields(this);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_ZERO = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 100);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_ONE = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 101);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_TWO = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 102);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_THREE = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 103);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_FOUR = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 104);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_FIVE = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 105);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_SIX = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 106);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_SEVEN = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 107);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_EIGHT = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 108);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE_NINE = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 109);
        this->NUMBER_ON_SAME_TEAM_SEQUENCE = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ this->NUMBER_ON_SAME_TEAM_SEQUENCE_ZERO, this->NUMBER_ON_SAME_TEAM_SEQUENCE_ONE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_THREE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_FOUR, this->NUMBER_ON_SAME_TEAM_SEQUENCE_FIVE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_SIX, this->NUMBER_ON_SAME_TEAM_SEQUENCE_SEVEN, this->NUMBER_ON_SAME_TEAM_SEQUENCE_EIGHT, this->NUMBER_ON_SAME_TEAM_SEQUENCE_NINE }) / sizeof(int32_t), (int32_t[]){ this->NUMBER_ON_SAME_TEAM_SEQUENCE_ZERO, this->NUMBER_ON_SAME_TEAM_SEQUENCE_ONE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_THREE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_FOUR, this->NUMBER_ON_SAME_TEAM_SEQUENCE_FIVE, this->NUMBER_ON_SAME_TEAM_SEQUENCE_SIX, this->NUMBER_ON_SAME_TEAM_SEQUENCE_SEVEN, this->NUMBER_ON_SAME_TEAM_SEQUENCE_EIGHT, this->NUMBER_ON_SAME_TEAM_SEQUENCE_NINE }));
}

NumberInSameGroupSequence* NumberInSameGroupSequence_new(void) {
    NumberInSameGroupSequence* this = java_object_alloc(sizeof(NumberInSameGroupSequence), "NumberInSameGroupSequence");
    NumberInSameGroupSequence_init(this);
    return this;
}

