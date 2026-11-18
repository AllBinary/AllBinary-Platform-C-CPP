// Generated Code Do Not Modify
#include "org/allbinary/graphics/pipeline/RandomTranslation.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"




void RandomTranslation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RandomTranslation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RandomTranslation", nullptr);
}

void RandomTranslation_init(RandomTranslation* this) {
    RandomTranslation_register();
}

RandomTranslation* RandomTranslation_new(void) {
    RandomTranslation* this = java_object_alloc(sizeof(RandomTranslation), "RandomTranslation");
    RandomTranslation_init(this);
    return this;
}


// throws Exception
BasicArrayList* RandomTranslation_getInstance(BasicArrayList* vector, int32_t howMuch) {
        MyRandomFactory* myRandomFactory = MyRandomFactory_getInstance();
        int32_t x = -MyRandomFactory_getNextInt(myRandomFactory, howMuch);
        int32_t y = MyRandomFactory_getNextInt(myRandomFactory, howMuch);
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(vector);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_translate(graphicsPipe, x, y);
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}

