
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class GL10;
class Image;
class LoadTextures;
class OpenGLESGraphics;
class ProgressCanvas;
class ProgressCanvasFactory;
class CanvasStrings;
class DisplayInfoSingleton;
class RendererStrings;
class PreResourceImageUtil;
class OpenGLESImage;
class OpenGLImageCache;
class OpenGLImageCacheFactory;
class LogUtil;
class PreLogUtil;
class CommonLabels;
class CommonStrings;
class SynchObject;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLCapabilities;
class OpenGLLogUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLUtil
            : public virtual Object
         {

    private: static OpenGLUtil* instance_owner();
    private: static OpenGLUtil* instance;

    public: static OpenGLUtil* getInstance();


            
    public: OpenGLUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: RendererStrings* renderStrings;

    /*protected*/ public: CanvasStrings* canvasStrings;

    /*protected*/ public: DisplayInfoSingleton* displayInfoSingleton;

    private: PreResourceImageUtil* preResourceImageUtil;

    private: SynchObject* lockObject;

    private: SynchObject* anyType;

    private: BasicArrayList* list;

    public: BasicArrayList* runnableList;

    private: bool created = false;

    public: void onSurfaceCreated(GL10* gl);

    public: void onSurfaceCreated(GL10* gl, LoadTextures* loadTextures);

    private: bool surfaceCreatedAndInitialized = false;

                //@Throws(Exception.constructor)
            
    public: void onSurfaceChanged(GL10* gl, OpenGLESGraphics* graphics);

    public: Image* addImage(Image* image);

    public: void clear();

    public: void addRunnable(Runnable* runnable);

    private: void processRunnables();

                //@Throws(Exception.constructor)
            
    private: void set(GL10* gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/device/LoadTextures.h>)
#include <org/allbinary/device/LoadTextures.h>
#endif
#if __has_include(<org/allbinary/device/OpenGLESGraphics.h>)
#include <org/allbinary/device/OpenGLESGraphics.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/renderer/RendererStrings.h>)
#include <org/allbinary/graphics/opengles/renderer/RendererStrings.h>
#endif
#if __has_include(<org/allbinary/image/PreResourceImageUtil.h>)
#include <org/allbinary/image/PreResourceImageUtil.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImage.h>)
#include <org/allbinary/image/opengles/OpenGLESImage.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLImageCache.h>)
#include <org/allbinary/image/opengles/OpenGLImageCache.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLImageCacheFactory.h>)
#include <org/allbinary/image/opengles/OpenGLImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/SynchObject.h>)
#include <org/allbinary/thread/SynchObject.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLCapabilities.h")
#include "org/allbinary/graphics/opengles/OpenGLCapabilities.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLLogUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLLogUtil.h"
#endif

        #endif
    
