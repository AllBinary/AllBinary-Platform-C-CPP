
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASPROGRESSUTIL_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASPROGRESSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/DemoCanvasProgressUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableComposite.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/DemoCanvas.h"


DemoCanvasProgressUtil::DemoCanvasProgressUtil() {
        }
        
    auto DemoCanvasProgressUtil::showProgress(DemoCanvas* demoCanvas) -> void{
DemoCanvasProgressUtil::showProgressOptionallyInTheBackground(demoCanvas, false);
    
}


    auto DemoCanvasProgressUtil::showProgressOptionallyInTheBackground(DemoCanvas* demoCanvas, bool background) -> void{

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->startBackground(background);
    

    std::vector<PaintableInterface*> paintableArray = std::vector<PaintableInterface*>(2);;
    
paintableArray[0]= progressCanvas;
    
paintableArray[1]= demoCanvas->getDefaultPaintableInterface();
    
demoCanvas->setDefaultPaintableInterface(new PaintableComposite(paintableArray));
    
demoCanvas->setPaintableInterface(demoCanvas->getDefaultPaintableInterface());
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOCANVASPROGRESSUTIL_CPP
