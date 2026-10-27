
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageJ2SEUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/Color.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageJ2SEUtil::ImageJ2SEUtil() : TRANSPARENT_COLOR(new Color(0, 0, 0, 0)) {
        }
        auto ImageJ2SEUtil::instance_owner() -> ImageJ2SEUtil* { static std::unique_ptr<ImageJ2SEUtil> value(new ImageJ2SEUtil()); return value.get(); }
ImageJ2SEUtil* ImageJ2SEUtil::instance = ImageJ2SEUtil::instance_owner();

    auto ImageJ2SEUtil::getInstance() -> ImageJ2SEUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2SEUtil::instance;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEUTIL_CPP
