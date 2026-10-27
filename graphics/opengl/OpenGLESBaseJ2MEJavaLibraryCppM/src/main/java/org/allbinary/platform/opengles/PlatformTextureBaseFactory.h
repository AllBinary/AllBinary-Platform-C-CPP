
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL10;
class Image;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformTextureBaseFactory
            : public virtual Object
         {

    private: static PlatformTextureBaseFactory* NULL_PLATFORM_TEXTURE_BASE_FACTORY_owner();
    public: static PlatformTextureBaseFactory* NULL_PLATFORM_TEXTURE_BASE_FACTORY;


            
    public: PlatformTextureBaseFactory();
        
    /*protected*/ public: CommonStrings* commonStrings;

    public: void load(GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip);

};

            


        #endif //ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
