
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageCompleteUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageCompleteUtil::ImageCompleteUtil() {
        }
        auto ImageCompleteUtil::instance_owner() -> ImageCompleteUtil* { static std::unique_ptr<ImageCompleteUtil> value(new ImageCompleteUtil()); return value.get(); }
ImageCompleteUtil* ImageCompleteUtil::instance = ImageCompleteUtil::instance_owner();

    auto ImageCompleteUtil::getInstance() -> ImageCompleteUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageCompleteUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCompleteUtil::waitForImage(Image* image, std::string name) -> void{
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_CPP
