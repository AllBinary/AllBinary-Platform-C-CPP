
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
        



        #ifndef ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_CPP
        #define ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/platform/graphics/PlatformBitmapBase.h"


PlatformBitmapBaseFactory::PlatformBitmapBaseFactory() {
        }
        auto PlatformBitmapBaseFactory::NULL_PLATFORM_BITMAP_BASE_FACTORY_owner() -> PlatformBitmapBaseFactory* { static std::unique_ptr<PlatformBitmapBaseFactory> value(new PlatformBitmapBaseFactory()); return value.get(); }
PlatformBitmapBaseFactory* PlatformBitmapBaseFactory::NULL_PLATFORM_BITMAP_BASE_FACTORY = PlatformBitmapBaseFactory::NULL_PLATFORM_BITMAP_BASE_FACTORY_owner();

    auto PlatformBitmapBaseFactory::createBitmap(Image* image) -> PlatformBitmapBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlatformBitmapBase::NULL_PLATFORM_BITMAP_BASE;
    
}




        #endif //ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_CPP
