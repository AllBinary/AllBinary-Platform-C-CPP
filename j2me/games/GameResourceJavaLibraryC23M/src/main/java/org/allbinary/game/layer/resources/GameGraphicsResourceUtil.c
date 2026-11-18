// Generated Code Do Not Modify
#include "org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeature.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif


static void* GameGraphicsResourceUtil_instance;



static const char* GameGraphicsResourceUtil_getString(GameGraphicsResourceUtil* this);



void GameGraphicsResourceUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameGraphicsResourceUtil_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void GameGraphicsResourceUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameGraphicsResourceUtil", nullptr);
    java_register_method("GameGraphicsResourceUtil", "getString", (void*) GameGraphicsResourceUtil_getString);
    java_register_method("GameGraphicsResourceUtil", "getStringForFeature", (void*) GameGraphicsResourceUtil_getStringForFeature);
    java_register_method("GameGraphicsResourceUtil", "getName", (void*) GameGraphicsResourceUtil_getName);
}

static void GameGraphicsResourceUtil_initFields(GameGraphicsResourceUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->SPRITE = "_sprite";
    this->QUARTER = "_quarter";
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


GameGraphicsResourceUtil* GameGraphicsResourceUtil_getInstance(void) {
        if ((GameGraphicsResourceUtil_staticInit(), GameGraphicsResourceUtil_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            GameGraphicsResourceUtil_instance = GameGraphicsResourceUtil_new();
        }
        return ((GameGraphicsResourceUtil*) (GameGraphicsResourceUtil_staticInit(), GameGraphicsResourceUtil_instance));
}


void GameGraphicsResourceUtil_init(GameGraphicsResourceUtil* this) {
    GameGraphicsResourceUtil_register();
    GameGraphicsResourceUtil_initFields(this);
        JAVA_TRY {
            this->name = GameGraphicsResourceUtil_getString(this);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

GameGraphicsResourceUtil* GameGraphicsResourceUtil_new(void) {
    GameGraphicsResourceUtil* this = java_object_alloc(sizeof(GameGraphicsResourceUtil), "GameGraphicsResourceUtil");
    GameGraphicsResourceUtil_init(this);
    return this;
}


// throws Exception
static const char* GameGraphicsResourceUtil_getString(GameGraphicsResourceUtil* this) {
        GraphicsFeatureFactory* graphicsFeatureFactory = GraphicsFeatureFactory_getInstance();
        GraphicsFeature* graphicsFeature = graphicsFeatureFactory->NONE;
        Features* features = Features_getInstance();
        if (Features_isFeature(features, graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS)) {
            graphicsFeature = graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS;
        } else if (Features_isFeature(features, graphicsFeatureFactory->SPRITE_FULL_GRAPHICS)) {
            graphicsFeature = graphicsFeatureFactory->SPRITE_FULL_GRAPHICS;
        } else if (Features_isFeature(features, graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS)) {
            graphicsFeature = graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS;
        } else if (Features_isFeature(features, graphicsFeatureFactory->IMAGE_ROTATION_ON_THE_FLY)) {
            graphicsFeature = graphicsFeatureFactory->IMAGE_ROTATION_ON_THE_FLY;
        }
        return GameGraphicsResourceUtil_getStringForFeature(this, graphicsFeature);
}


// throws Exception
const char* GameGraphicsResourceUtil_getStringForFeature(GameGraphicsResourceUtil* this, GraphicsFeature* graphicsFeature) {
        StringMaker* stringBuffer = StringMaker_new();
        GraphicsFeatureFactory* graphicsFeatureFactory = GraphicsFeatureFactory_getInstance();
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        Features* features = Features_getInstance();
        if (Features_isFeature(features, graphicsFeatureFactory->VECTOR_GRAPHICS)) {
        } else if (Features_isFeature(features, graphicsFeatureFactory->IMAGE_GRAPHICS)) {
            if (graphicsFeature == graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS || graphicsFeature == graphicsFeatureFactory->IMAGE_ROTATION_ON_THE_FLY) {
            } else if (graphicsFeature == graphicsFeatureFactory->SPRITE_FULL_GRAPHICS) {
                StringMaker_append(stringBuffer, this->SPRITE);
            } else if (graphicsFeature == graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS) {
                StringMaker_append(stringBuffer, this->QUARTER);
                StringMaker_append(stringBuffer, this->SPRITE);
            } else {
                java_throw(java_exception_new("Exception", "None/Unknown Sub Image Resource Type Specified"));
            }
        } else if (OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance())) {
            StringMaker_append(stringBuffer, CanvasStrings_getInstance()->OBJ_MODEL);
        } else {
            java_throw(java_exception_new("Exception", "None/Unknown Main Image Resource Type Specified"));
        }
        return java_string_of(stringBuffer);
}


const char* GameGraphicsResourceUtil_getName(GameGraphicsResourceUtil* this) {
        return this->name;
}

