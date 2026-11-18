// Generated Code Do Not Modify
#include "org/allbinary/image/IndexedAnimationToImageArrayUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/image/AnimationFrameToImageUtil.h"




void IndexedAnimationToImageArrayUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void IndexedAnimationToImageArrayUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IndexedAnimationToImageArrayUtil", nullptr);
}

void IndexedAnimationToImageArrayUtil_init(IndexedAnimationToImageArrayUtil* this) {
    IndexedAnimationToImageArrayUtil_register();
}

IndexedAnimationToImageArrayUtil* IndexedAnimationToImageArrayUtil_new(void) {
    IndexedAnimationToImageArrayUtil* this = java_object_alloc(sizeof(IndexedAnimationToImageArrayUtil), "IndexedAnimationToImageArrayUtil");
    IndexedAnimationToImageArrayUtil_init(this);
    return this;
}


// throws Exception
Image** IndexedAnimationToImageArrayUtil_getInstance(int32_t width, int32_t height, IndexedAnimation* sequentialAnimationInterface) {
        int32_t size = IndexedAnimation_getAnimationSize(sequentialAnimationInterface);
        Image** imageArray = ((Image**) java_array_new(sizeof(Image*), size));
        for (int32_t index = 0; index < size; index++) {
            IndexedAnimation_setFrame(sequentialAnimationInterface, index);
            imageArray[index] = AnimationFrameToImageUtil_getInstanceWH(AnimationFrameToImageUtil_getInstance(), width, height, sequentialAnimationInterface);
        }
        return imageArray;
}

