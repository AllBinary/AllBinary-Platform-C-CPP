
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/platform/graphics/PlatformBitmapBase.h"

class PlatformBitmapBaseFactory
            : public Object
         {

    public: static PlatformBitmapBaseFactory* NULL_PLATFORM_BITMAP_BASE_FACTORY() { static std::unique_ptr<PlatformBitmapBaseFactory> value(new PlatformBitmapBaseFactory()); return value.get(); }

    public: PlatformBitmapBase* createBitmap(Image* image);

};

            


        #endif //ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASEFACTORY_H
