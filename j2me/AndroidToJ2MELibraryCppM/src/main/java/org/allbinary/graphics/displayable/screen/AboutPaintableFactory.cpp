
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AboutPaintableFactory::AboutPaintableFactory() : paintableArray(
                                                {
                                                    NullPaintable::getInstance()
                                                }) {
        }
        auto AboutPaintableFactory::instance_owner() -> AboutPaintableFactory* { static std::unique_ptr<AboutPaintableFactory> value(new AboutPaintableFactory()); return value.get(); }
AboutPaintableFactory* AboutPaintableFactory::instance = AboutPaintableFactory::instance_owner();

    auto AboutPaintableFactory::getInstance() -> AboutPaintableFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AboutPaintableFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_CPP
