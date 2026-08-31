
        /* Generated Code Do Not Modify */
        



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

    public static OpenGLUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLUtil.instance;
    
}


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

    public onSurfaceCreated(GL10 gl){

        try {
            
                        if(!this.created)
                        
                                    {
                                    this.created= true;
    
PreLogUtil.put(CommonLabels.getInstance()!.START_LABEL +OpenGLCapabilities.getInstance()!.toString(), this, this.renderStrings!.ON_SURFACE_CREATED);
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.renderStrings!.ON_SURFACE_CREATED, e);
    
}

}


    public onSurfaceCreated(GL10 gl, LoadTextures loadTextures){

        try {
            loadTextures!.load(gl);
    
OpenGLLogUtil.getInstance()!.logError(gl);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.renderStrings!.ON_SURFACE_CREATED, e);
    
}

}


    private: surfaceCreatedAndInitialized: bool = false;

                //@Throws(Exception.constructor)
            
    public onSurfaceChanged(GL10 gl, OpenGLESGraphics graphics){

                        if(!this.surfaceCreatedAndInitialized)
                        
                                    {
                                    graphics.init();
    
this.surfaceCreatedAndInitialized= true;
    

                                    }
                                
graphics.update();
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.update(graphics);
    
getInstance = OpenGLImageCacheFactory.getInstance()getInstance as OpenGLImageCache
getInstance.
                    update(gl);
    
this.processRunnables();
    
this.set(gl);
    
}


    public Image addImage(Image image){

    encapsulateImage: Image = this.preResourceImageUtil!.encapsulate(image)!;;
    

                        if(encapsulateImage != image)
                        
                                    {
                                    
        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.anyType) 

        //mutex.withLock
        
this.list.add(encapsulateImage);
    





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return encapsulateImage;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    public clear(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.anyType) 

        //mutex.withLock
        
this.list.clear();
    


}


    public addRunnable(Runnable runnable){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.lockObject) 

        //mutex.withLock
        

                        if(!this.runnableList!.contains(runnable))
                        
                                    {
                                    this.runnableList!.add(runnable);
    
this.displayInfoSingleton!.add(this.canvasStrings!.SCALED_IMAGES);
    

                                    }
                                


}


    processRunnables(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.lockObject) 

        //mutex.withLock
        

    runnable: Runnable;;
    

    size: int32_t = this.runnableList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
runnable= this.runnableList!.get(index) as Runnable;
    
runnable.run();
    
}

this.runnableList!.clear();
    


}


                //@Throws(Exception.constructor)
            
    set(GL10 gl){

    size: int32_t = this.list.size()!;;
    

    image: any;;
    




                        for (
    index2: int32_t = 0;index2 < size; index2++)
        {
image= this.list.get(index2);
    
image = imageimage as OpenGLESImage
image.
                    set(gl);
    
}

}


};

            

