
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLUtil.h"
        

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


OpenGLUtil::OpenGLUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), renderStrings(RendererStrings::getInstance()), canvasStrings(CanvasStrings::getInstance()), displayInfoSingleton(DisplayInfoSingleton::getInstance()), preResourceImageUtil(PreResourceImageUtil::getInstance()), lockObject(new SynchObject()), anyType(new SynchObject()), list(new BasicArrayListD()), runnableList(new BasicArrayListD()) {
        }
        auto OpenGLUtil::instance_owner() -> OpenGLUtil* { static std::unique_ptr<OpenGLUtil> value(new OpenGLUtil()); return value.get(); }
OpenGLUtil* OpenGLUtil::instance = OpenGLUtil::instance_owner();

    auto OpenGLUtil::getInstance() -> OpenGLUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLUtil::instance;
    
}


    auto OpenGLUtil::onSurfaceCreated(GL10* gl) -> void{

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


    auto OpenGLUtil::onSurfaceCreated(GL10* gl, LoadTextures* loadTextures) -> void{

        try {
            loadTextures->load(gl);
    
OpenGLLogUtil::getInstance()->logError(gl);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->renderStrings->ON_SURFACE_CREATED, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto OpenGLUtil::onSurfaceChanged(GL10* gl, OpenGLESGraphics* graphics) -> void{

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


    auto OpenGLUtil::addImage(Image* image) -> Image*{

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


    auto OpenGLUtil::clear() -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->list->clear();
    


}


    auto OpenGLUtil::addRunnable(Runnable* runnable) -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lockObject) 

        //mutex.withLock
        

                        if(!this->runnableList->contains(runnable))
                        
                                    {
                                    this->runnableList->add(runnable);
    
this->displayInfoSingleton->add(this->canvasStrings->SCALED_IMAGES);
    

                                    }
                                


}


    auto OpenGLUtil::processRunnables() -> void{

        
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
            
    auto OpenGLUtil::set(GL10* gl) -> void{

    int32_t size = this->list->size();;
    

    OpenGLESImage* image;;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
image= dynamic_cast<OpenGLESImage*>(this->list->get(index2));
    
image->set(gl);
    
}

}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_CPP
