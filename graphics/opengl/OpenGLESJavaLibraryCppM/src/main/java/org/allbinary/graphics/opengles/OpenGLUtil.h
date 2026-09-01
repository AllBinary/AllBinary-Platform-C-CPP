
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Runnable.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/device/LoadTextures.h>

      
#include <org/allbinary/device/OpenGLESGraphics.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/opengles/renderer/RendererStrings.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/image/opengles/OpenGLImageCache.h>

      
#include <org/allbinary/image/opengles/OpenGLImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLCapabilities.h"
#include "OpenGLLogUtil.h"

class OpenGLUtil
            : public Object
         {

    private: static OpenGLUtil instance() { return OpenGLUtil(); }

    public: static OpenGLUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const RendererStrings renderStrings = RendererStrings::getInstance();

    protected: const CanvasStrings canvasStrings = CanvasStrings::getInstance();

    protected: const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: const PreResourceImageUtil preResourceImageUtil = PreResourceImageUtil::getInstance();

    private: const SynchObject lockObject = SynchObject();

    private: const SynchObject anyType = SynchObject();

    private: const BasicArrayList list = BasicArrayListD();

    public: const BasicArrayList runnableList = BasicArrayListD();

    private: bool created = false;

    public: void onSurfaceCreated(GL10 gl);

    public: void onSurfaceCreated(GL10 gl, LoadTextures loadTextures);

    private: bool surfaceCreatedAndInitialized = false;

                //@Throws(Exception.constructor)
            
    public: void onSurfaceChanged(GL10 gl, OpenGLESGraphics graphics);

    public: Image addImage(Image image);

    public: void clear();

    public: void addRunnable(Runnable runnable);

    private: void processRunnables();

                //@Throws(Exception.constructor)
            
    private: void set(GL10 gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
