
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/LazyProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"


ProgressCanvasFactory::ProgressCanvasFactory() {
        }
        Object* ProgressCanvasFactory::PROGRESS_FORM_SCREEN = NullUtil::getInstance()->NULL_OBJECT;

    auto ProgressCanvasFactory::getInstance() -> ProgressCanvas*{

                        if(ProgressCanvasFactory::PROGRESS_FORM_SCREEN == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ProgressCanvasFactory::PROGRESS_FORM_SCREEN= new LazyProgressCanvas(StringUtil::getInstance()->EMPTY_STRING, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ProgressCanvas*>(ProgressCanvasFactory::PROGRESS_FORM_SCREEN);
    
}


    auto ProgressCanvasFactory::getLazyInstance() -> PaintableInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ProgressCanvasFactory::getInstance();;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_CPP
