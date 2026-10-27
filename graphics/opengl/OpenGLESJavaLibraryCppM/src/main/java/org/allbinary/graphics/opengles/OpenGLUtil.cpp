
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
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
        #include "org/allbinary/graphics/opengles/OpenGLCapabilities.h"
#include "org/allbinary/graphics/opengles/OpenGLLogUtil.h"

class OpenGLUtil
            : public Object
         {

    private: static OpenGLUtil* instance() { static std::unique_ptr<OpenGLUtil> value(new OpenGLUtil()); return value.get(); }

    public: static OpenGLUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: RendererStrings* renderStrings = RendererStrings::getInstance();

    protected: CanvasStrings* canvasStrings = CanvasStrings::getInstance();

    protected: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil::getInstance();

    private: SynchObject* lockObject = new SynchObject();

    private: SynchObject* anyType = new SynchObject();

    private: BasicArrayList* list = new BasicArrayListD();

    public: BasicArrayList* runnableList = new BasicArrayListD();

    private: bool created = false;

    public: void onSurfaceCreated(GL10* gl){

        try {
            
                        if(!this->created)
                        
                                    {
                                    this->created= true;
    
PreLogUtil::put(CommonLabels::getInstance()->START_LABEL +OpenGLCapabilities::getInstance()->toString(), this, this->renderStrings->ON_SURFACE_CREATED);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->renderStrings->ON_SURFACE_CREATED, &e);
    
}

}


    public: void onSurfaceCreated(GL10* gl, LoadTextures* loadTextures){

        try {
            loadTextures->load(gl);
    
OpenGLLogUtil::getInstance()->logError(gl);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->renderStrings->ON_SURFACE_CREATED, &e);
    
}

}


    private: bool surfaceCreatedAndInitialized = false;

                //@Throws(Exception.constructor)
            
    public: void onSurfaceChanged(GL10* gl, OpenGLESGraphics* graphics){

                        if(!this->surfaceCreatedAndInitialized)
                        
                                    {
                                    graphics->init();
    
this->surfaceCreatedAndInitialized= true;
    

                                    }
                                
graphics->update();
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->update(graphics);
    
getInstance = dynamic_cast<OpenGLImageCache*>(OpenGLImageCacheFactory::getInstance()getInstance)
getInstance.
                    update(gl);
    
this->processRunnables();
    
this->set(gl);
    
}


    public: Image* addImage(Image* image){

    Image* encapsulateImage = this->preResourceImageUtil->encapsulate(image);;
    

                        if(encapsulateImage != image)
                        
                                    {
                                    
        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->list->add(encapsulateImage);
    





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return encapsulateImage;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    public: void clear(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->list->clear();
    


}


    public: void addRunnable(Runnable* runnable){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lockObject) 

        //mutex.withLock
        

                        if(!this->runnableList->contains(runnable))
                        
                                    {
                                    this->runnableList->add(runnable);
    
this->displayInfoSingleton->add(this->canvasStrings->SCALED_IMAGES);
    

                                    }
                                


}


    private: void processRunnables(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lockObject) 

        //mutex.withLock
        

    Runnable* runnable;;
    

    int32_t size = this->runnableList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
runnable= dynamic_cast<Runnable*>(this->runnableList->get(index));
    
runnable->run();
    
}

this->runnableList->clear();
    


}


                //@Throws(Exception.constructor)
            
    private: void set(GL10* gl){

    int32_t size = this->list->size();;
    

    OpenGLESImage* image;;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
image= dynamic_cast<OpenGLESImage*>(this->list->get(index2));
    
image->set(gl);
    
}

}


};

            

