
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageSwtUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/eclipse/swt/graphics/Color.h>

      
#include <org/eclipse/swt/graphics/RGB.h>

      
#include <org/microemu/app/BareMain.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageSwtUtil::ImageSwtUtil() {
        }
        auto ImageSwtUtil::instance_owner() -> ImageSwtUtil* { static std::unique_ptr<ImageSwtUtil> value(new ImageSwtUtil()); return value.get(); }
ImageSwtUtil* ImageSwtUtil::instance = ImageSwtUtil::instance_owner();

    auto ImageSwtUtil::getInstance() -> ImageSwtUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageSwtUtil::instance;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTUTIL_CPP
