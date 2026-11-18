// Generated Code Do Not Modify
#include "org/allbinary/graphics/pipeline/RandomRotationFactory.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"


static RandomRotationFactory* RandomRotationFactory_instance;




void RandomRotationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RandomRotationFactory_instance = RandomRotationFactory_new();
}

void RandomRotationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RandomRotationFactory", nullptr);
    java_register_method("RandomRotationFactory", "getInstanceList", (void*) RandomRotationFactory_getInstanceList);
    java_register_method("RandomRotationFactory", "getNextRandomAngle", (void*) RandomRotationFactory_getNextRandomAngle);
}

static void RandomRotationFactory_initFields(RandomRotationFactory* this) {
    this->myRandomFactory = MyRandomFactory_getInstance();
    this->angleFactory = AngleFactory_getInstance();
}

void RandomRotationFactory_init(RandomRotationFactory* this) {
    RandomRotationFactory_register();
    RandomRotationFactory_initFields(this);
}

RandomRotationFactory* RandomRotationFactory_new(void) {
    RandomRotationFactory* this = java_object_alloc(sizeof(RandomRotationFactory), "RandomRotationFactory");
    RandomRotationFactory_init(this);
    return this;
}


RandomRotationFactory* RandomRotationFactory_getInstance(void) {
        return (RandomRotationFactory_staticInit(), RandomRotationFactory_instance);
}


// throws Exception
BasicArrayList* RandomRotationFactory_getInstanceList(RandomRotationFactory* this, BasicArrayList* vector, int32_t howMuch) {
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(vector);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_rotateToAngle(graphicsPipe, AngleFactory_getAt(this->angleFactory, RandomRotationFactory_getNextRandomAngle(this, howMuch)));
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}


int32_t RandomRotationFactory_getNextRandomAngle(RandomRotationFactory* this, int32_t howMuch) {
        return MyRandomFactory_getNextInt(this->myRandomFactory, howMuch * 10);
}

