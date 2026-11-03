
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessor.h"

auto ScreenRepaintProcessorFactory::instance_owner() -> ScreenRepaintProcessorFactory* { static std::unique_ptr<ScreenRepaintProcessorFactory> value(new ScreenRepaintProcessorFactory()); return value.get(); }
ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory::instance = ScreenRepaintProcessorFactory::instance_owner();

    auto ScreenRepaintProcessorFactory::getInstance() -> ScreenRepaintProcessorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ScreenRepaintProcessorFactory::instance;
    
}


ScreenRepaintProcessorFactory::ScreenRepaintProcessorFactory(){
}


    auto ScreenRepaintProcessorFactory::create(Displayable* displayable) -> Processor*{

                        if(!J2MEUtil::isJ2ME())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ScreenRepaintProcessor(displayable);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Processor::getInstance();;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_CPP
