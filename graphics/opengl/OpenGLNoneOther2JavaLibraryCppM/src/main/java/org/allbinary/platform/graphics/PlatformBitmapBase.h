
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
        



        #ifndef ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_H
        #define ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Image;
class NullImage;
class BasicColor;
class BasicColorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformBitmapBase
            : public virtual Object
         {

    private: static PlatformBitmapBase* NULL_PLATFORM_BITMAP_BASE_owner();
    public: static PlatformBitmapBase* NULL_PLATFORM_BITMAP_BASE;


            
    public: PlatformBitmapBase();
        
    public: int32_t alpha = 255;

    public: BasicColor* basicColor;

    public: int32_t getWidth();

    public: int32_t getHeight();

    public: Image* getImage();

};

            


        #endif //ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_H_COMPLETE)
        #define ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif

        #endif
    
