
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressCanvas.h"

class LazyProgressCanvas: public ProgressCanvas {

    protected: const LogUtil logUtil = LogUtil::getInstance();

protected: LazyProgressCanvas(std::string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(title, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void start(){
super.start();
    
this->hasPainted= false;
    
}


    public: void end(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.END_METHOD_NAME);
    
this->endActual();
    
this->paintable= GAUGE_PAINTABLE;
    
ImageCacheFactory::getInstance().runTask();
    
ImageCacheFactory::getInstance().progressEnded();
    

                //: 
} catch(e) 
            {
this->logUtil.putF(this->commonStrings.EXCEPTION, this, this->commonStrings.END_METHOD_NAME);
    
}

}


    public: void inGame(){
inGameProcessor= Processor::getInstance();
    
}


    public: void endFromInitialLazyLoadingComplete(){
super.endFromInitialLazyLoadingComplete();
    
this->paintable= NullPaintable::getInstance();
    
}


    public: void endIfPaintedSinceStart(){

                        if(this->paintable == GAUGE_PAINTABLE && this->hasPainted)
                        
                                    {
                                    this->endFromInitialLazyLoadingComplete();
    

                                    }
                                
}


};

            

