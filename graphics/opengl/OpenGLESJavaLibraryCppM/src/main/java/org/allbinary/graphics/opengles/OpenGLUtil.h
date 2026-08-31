
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
        

    private: static const instance: OpenGLUtil = new OpenGLUtil();

    public static OpenGLUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const renderStrings: RendererStrings = RendererStrings.getInstance()!;

    const canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;

    const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const preResourceImageUtil: PreResourceImageUtil = PreResourceImageUtil.getInstance()!;

    private: const lockObject: SynchObject = new SynchObject();

    private: const anyType: SynchObject = new SynchObject();

    private: const list: BasicArrayList = new BasicArrayListD();

    public const runnableList: BasicArrayList = new BasicArrayListD();

    private: created: bool = false;

    public onSurfaceCreated(GL10 gl);

    public onSurfaceCreated(GL10 gl, LoadTextures loadTextures);

    private: surfaceCreatedAndInitialized: bool = false;

                //@Throws(Exception.constructor)
            
    public onSurfaceChanged(GL10 gl, OpenGLESGraphics graphics);

    public Image addImage(Image image);

    public clear();

    public addRunnable(Runnable runnable);

    processRunnables();

                //@Throws(Exception.constructor)
            
    set(GL10 gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
