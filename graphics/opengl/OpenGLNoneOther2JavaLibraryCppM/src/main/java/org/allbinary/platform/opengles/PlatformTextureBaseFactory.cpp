
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
        



        #ifndef ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_CPP
        #define ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PlatformTextureBaseFactory::PlatformTextureBaseFactory() : commonStrings(CommonStrings::getInstance()) {
        }
        auto PlatformTextureBaseFactory::NULL_PLATFORM_TEXTURE_BASE_FACTORY_owner() -> PlatformTextureBaseFactory* { static std::unique_ptr<PlatformTextureBaseFactory> value(new PlatformTextureBaseFactory()); return value.get(); }
PlatformTextureBaseFactory* PlatformTextureBaseFactory::NULL_PLATFORM_TEXTURE_BASE_FACTORY = PlatformTextureBaseFactory::NULL_PLATFORM_TEXTURE_BASE_FACTORY_owner();

    auto PlatformTextureBaseFactory::load(GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip) -> void{
}




        #endif //ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_CPP
