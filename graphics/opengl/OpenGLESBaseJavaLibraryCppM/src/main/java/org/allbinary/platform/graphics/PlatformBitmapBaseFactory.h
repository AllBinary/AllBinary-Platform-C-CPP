
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
        



        #ifndef ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_H
        #define ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Image;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PlatformBitmapBase;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformBitmapBaseFactory
            : public virtual Object
         {

    private: static PlatformBitmapBaseFactory* NULL_PLATFORM_BITMAP_BASE_FACTORY_owner();
    public: static PlatformBitmapBaseFactory* NULL_PLATFORM_BITMAP_BASE_FACTORY;


            
    public: PlatformBitmapBaseFactory();
        
    public: PlatformBitmapBase* createBitmap(Image* image);

};

            


        #endif //ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include("org/allbinary/platform/graphics/PlatformBitmapBase.h")
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#endif

        #endif
    
