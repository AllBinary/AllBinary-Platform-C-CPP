
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_CPP
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/canvas/transition/progress/LazyProgressCanvas.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"


LazyProgressCanvas::LazyProgressCanvas(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ProgressCanvas(title, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto LazyProgressCanvas::start() -> void{
ProgressCanvas::start();
    
this->hasPainted= false;
    
}


    auto LazyProgressCanvas::end() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->END_METHOD_NAME);
    
this->endActual();
    
this->paintable= this->GAUGE_PAINTABLE;
    
ImageCacheFactory::getInstance()->runTask();
    
ImageCacheFactory::getInstance()->progressEnded();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF(this->commonStrings->EXCEPTION, this, this->commonStrings->END_METHOD_NAME);
    
}

}


    auto LazyProgressCanvas::inGame() -> void{
this->inGameProcessor= Processor::getInstance();
    
}


    auto LazyProgressCanvas::endFromInitialLazyLoadingComplete() -> void{
ProgressCanvas::endFromInitialLazyLoadingComplete();
    
this->paintable= NullPaintable::getInstance();
    
}


    auto LazyProgressCanvas::endIfPaintedSinceStart() -> void{

                        if(this->paintable == this->GAUGE_PAINTABLE && this->hasPainted)
                        
                                    {
                                    this->endFromInitialLazyLoadingComplete();
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_CPP
