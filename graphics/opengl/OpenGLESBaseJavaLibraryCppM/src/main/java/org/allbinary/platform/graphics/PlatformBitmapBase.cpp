
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
        
class PlatformBitmapBase
            : public Object
         {

    public: static PlatformBitmapBase* NULL_PLATFORM_BITMAP_BASE() { static std::unique_ptr<PlatformBitmapBase> value(new PlatformBitmapBase()); return value.get(); }

    public: int32_t alpha = 255;

    public: BasicColor* basicColor = BasicColorFactory::getInstance()->NULL_COLOR;

    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: Image* getImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage::NULL_IMAGE;
    
}


};

            

