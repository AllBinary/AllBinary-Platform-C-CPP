
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
        



        #ifndef ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_CPP
        #define ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PlatformBitmapBase::PlatformBitmapBase() : basicColor(BasicColorFactory::getInstance()->NULL_COLOR) {
        }
        auto PlatformBitmapBase::NULL_PLATFORM_BITMAP_BASE_owner() -> PlatformBitmapBase* { static std::unique_ptr<PlatformBitmapBase> value(new PlatformBitmapBase()); return value.get(); }
PlatformBitmapBase* PlatformBitmapBase::NULL_PLATFORM_BITMAP_BASE = PlatformBitmapBase::NULL_PLATFORM_BITMAP_BASE_owner();

    auto PlatformBitmapBase::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto PlatformBitmapBase::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto PlatformBitmapBase::getImage() -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage::NULL_IMAGE;
    
}




        #endif //ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_CPP
