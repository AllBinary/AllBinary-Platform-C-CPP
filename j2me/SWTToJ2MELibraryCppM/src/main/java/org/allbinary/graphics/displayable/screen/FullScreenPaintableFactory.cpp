
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/screen/FullScreenPaintableFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/paint/FullScreenPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

FullScreenPaintableFactory::FullScreenPaintableFactory() : paintable(FullScreenPaintable::getInstance()) {
        }
        auto FullScreenPaintableFactory::instance_owner() -> FullScreenPaintableFactory* { static std::unique_ptr<FullScreenPaintableFactory> value(new FullScreenPaintableFactory()); return value.get(); }
FullScreenPaintableFactory* FullScreenPaintableFactory::instance = FullScreenPaintableFactory::instance_owner();

    auto FullScreenPaintableFactory::getInstance() -> FullScreenPaintableFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FullScreenPaintableFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_CPP
