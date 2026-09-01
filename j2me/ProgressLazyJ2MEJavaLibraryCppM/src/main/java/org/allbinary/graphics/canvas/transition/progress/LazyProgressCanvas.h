
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_H

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

protected: LazyProgressCanvas(std::string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public: void start();

    public: void end();

    public: void inGame();

    public: void endFromInitialLazyLoadingComplete();

    public: void endIfPaintedSinceStart();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_LAZYPROGRESSCANVAS_H
