
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/screen/ScreenRepaintUtil.h"


ScreenRepaintProcessor::ScreenRepaintProcessor(Displayable* displayable){
this->displayable= displayable;
    
}


                //@Throws(Exception.constructor)
            
    auto ScreenRepaintProcessor::process() -> void{
ScreenRepaintUtil::repaint(this->displayable);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_CPP
