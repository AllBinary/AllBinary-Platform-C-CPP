// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeature.h"


static OpenGLFeatureFactory* OpenGLFeatureFactory_instance;



void OpenGLFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLFeatureFactory_instance = OpenGLFeatureFactory_new();
}

void OpenGLFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLFeatureFactory", nullptr);
}

static void OpenGLFeatureFactory_initFields(OpenGLFeatureFactory* this) {
    this->OPENGL_OPTIONS = OpenGLFeature_new("OpenGL Options");
    this->OPENGL = OpenGLFeature_new("OpenGL");
    this->OPENGL_SURFACE_VIEW = OpenGLFeature_new("GLSurfaceView");
    this->OPENGL_2D = OpenGLFeature_new("OpenGL 2D");
    this->OPENGL_3D = OpenGLFeature_new("OpenGL 3D");
    this->OPENGL_2D_AND_3D = OpenGLFeature_new("OpenGL 2D/3D");
    this->OPENGL_AUTO_SELECT = OpenGLFeature_new("Auto Select");
    this->OPENGL_MINIMUM = OpenGLFeature_new("Minimum");
    this->OPENGL_AS_GAME_THREAD = OpenGLFeature_new("As game thread");
    this->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS = OpenGLFeature_new("As different threads");
    this->IMAGE_COLOR_DEPTH_4444 = OpenGLFeature_new("4444");
    this->IMAGE_COLOR_DEPTH_8888 = OpenGLFeature_new("8888");
    this->IMAGE_COLOR_DEPTH_565 = OpenGLFeature_new("565");
    this->OPENGL_COLOR_DEPTH_4444 = OpenGLFeature_new("4444");
    this->OPENGL_COLOR_DEPTH_8888 = OpenGLFeature_new("8888");
    this->OPENGL_COLOR_DEPTH_565 = OpenGLFeature_new("565");
    this->OPENGL_DRAW_TEXTURE = OpenGLFeature_new("GL_OES_draw_texture");
    this->OPENGL_VERTEX_BUFFER_OBJECT = OpenGLFeature_new("vertex_buffer_object");
    this->OPENGL_SIMPLE_OBJECT3D_PROCESSOR = OpenGLFeature_new("Simple Object3d Processor");
    this->OPENGL_COMPLEX_OBJECT3D_PROCESSOR = OpenGLFeature_new("Complex Object3d Processor");
    this->OPENGL_SIMPLE_TEXTURE_PROCESSOR = OpenGLFeature_new("Simple Texture Processor");
    this->OPENGL_COMPLEX_TEXTURE_PROCESSOR = OpenGLFeature_new("Complex Texture Processor");
}


OpenGLFeatureFactory* OpenGLFeatureFactory_getInstance(void) {
        return (OpenGLFeatureFactory_staticInit(), OpenGLFeatureFactory_instance);
}


void OpenGLFeatureFactory_init(OpenGLFeatureFactory* this) {
    OpenGLFeatureFactory_register();
    OpenGLFeatureFactory_initFields(this);
}

OpenGLFeatureFactory* OpenGLFeatureFactory_new(void) {
    OpenGLFeatureFactory* this = java_object_alloc(sizeof(OpenGLFeatureFactory), "OpenGLFeatureFactory");
    OpenGLFeatureFactory_init(this);
    return this;
}

