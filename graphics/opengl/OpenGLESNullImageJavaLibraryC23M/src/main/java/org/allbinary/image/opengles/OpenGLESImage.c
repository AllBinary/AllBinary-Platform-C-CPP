// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/image/opengles/OpenGLESImageProperties.h"
#include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"
#include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"


OpenGLESImage* OpenGLESImage_NULL_OPENGL_IMAGE;
BasicArrayList* OpenGLESImage_texture2dList;








void OpenGLESImage_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLESImage_NULL_OPENGL_IMAGE = OpenGLESImage_new((NullImage_staticInit(), NullImage_NULL_IMAGE), (PlatformBitmapBaseFactory_staticInit(), PlatformBitmapBaseFactory_NULL_PLATFORM_BITMAP_BASE_FACTORY), (PlatformTextureBaseFactory_staticInit(), PlatformTextureBaseFactory_NULL_PLATFORM_TEXTURE_BASE_FACTORY));
    OpenGLESImage_texture2dList = BasicArrayListD_new();
}

void OpenGLESImage_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESImage", "Image");
    java_register_method("OpenGLESImage", "set", (void*) OpenGLESImage_set);
    java_register_method("OpenGLESImage", "initTexture", (void*) OpenGLESImage_initTexture);
    java_register_method("OpenGLESImage", "drawRegion", (void*) OpenGLESImage_drawRegion);
    java_register_method("OpenGLESImage", "draw", (void*) OpenGLESImage_draw);
    java_register_method("OpenGLESImage", "getType", (void*) OpenGLESImage_getType);
}

static void OpenGLESImage_initFields(OpenGLESImage* this) {
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->openGLESImageProperties = OpenGLESImageProperties_new();
    this->imageProcessor = OpenGLESImageProcessor_getInstance();
    this->openGLESImageTranslate = OpenGLESImageTranslate_getInstance();
}


void OpenGLESImage_init(OpenGLESImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
    OpenGLESImage_register();
    Image_init(&this->base);
    OpenGLESImage_initFields(this);
        this->openGLBitmap = PlatformBitmapBaseFactory_createBitmap(bitmapFactory, image);
        this->textureFactory = textureFactory;
}

OpenGLESImage* OpenGLESImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
    OpenGLESImage* this = java_object_alloc(sizeof(OpenGLESImage), "OpenGLESImage");
    OpenGLESImage_init(this, image, bitmapFactory, textureFactory);
    return this;
}


// throws Exception
void OpenGLESImage_set(OpenGLESImage* this, GL* gl) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


bool OpenGLESImage_initTexture(OpenGLESImage* this, GL10* gl) {
        return false;
}


void OpenGLESImage_drawRegion(OpenGLESImage* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) {
}


void OpenGLESImage_draw(OpenGLESImage* this, GL10* gl, int32_t x, int32_t y, int32_t z) {
}


int32_t OpenGLESImage_getType(OpenGLESImage* this) {
        return OpenGLESImage_TYPE;
}

