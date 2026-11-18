// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLOptions.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#endif




void OpenGLOptions_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLOptions_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLOptions", nullptr);
    java_register_method("OpenGLOptions", "init", (void*) OpenGLOptions_initMethod);
}

void OpenGLOptions_init(OpenGLOptions* this) {
    OpenGLOptions_register();
}

OpenGLOptions* OpenGLOptions_new(void) {
    OpenGLOptions* this = java_object_alloc(sizeof(OpenGLOptions), "OpenGLOptions");
    OpenGLOptions_init(this);
    return this;
}


void OpenGLOptions_initMethod(OpenGLOptions* this) {
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (Features_isFeature(Features_getInstance(), openGLFeatureFactory->OPENGL_OPTIONS)) {
            BasicArrayList* openGLMultipleList = BasicArrayListD_new();
            BasicArrayList_add(openGLMultipleList, openGLFeatureFactory->OPENGL);
            GameFeatureChoiceGroups_add(GameFeatureChoiceGroups_getMultipleInstance(), "OpenGL (Complete Restart)", openGLMultipleList);
            BasicArrayList* openGLVersionSelectorMultipleList = BasicArrayListD_new();
            BasicArrayList_add(openGLVersionSelectorMultipleList, openGLFeatureFactory->OPENGL_AUTO_SELECT);
            BasicArrayList_add(openGLVersionSelectorMultipleList, openGLFeatureFactory->OPENGL_MINIMUM);
            GameFeatureChoiceGroups_add(GameFeatureChoiceGroups_getExclusiveInstance(), "OpenGL Version Selector", openGLVersionSelectorMultipleList);
            BasicArrayList* openGLImageColorMultipleList = BasicArrayListD_new();
            BasicArrayList_add(openGLImageColorMultipleList, openGLFeatureFactory->IMAGE_COLOR_DEPTH_4444);
            BasicArrayList_add(openGLImageColorMultipleList, openGLFeatureFactory->IMAGE_COLOR_DEPTH_8888);
            GameFeatureChoiceGroups_add(GameFeatureChoiceGroups_getExclusiveInstance(), "OpenGL Image Color RGBA", openGLImageColorMultipleList);
        }
}

