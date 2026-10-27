
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
        



        #ifndef ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H
        #define ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlatformTextureBaseFactory
            : public Object
         {

    public: static PlatformTextureBaseFactory* NULL_PLATFORM_TEXTURE_BASE_FACTORY() { static std::unique_ptr<PlatformTextureBaseFactory> value(new PlatformTextureBaseFactory()); return value.get(); }

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: void load(GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip);

};

            


        #endif //ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H
