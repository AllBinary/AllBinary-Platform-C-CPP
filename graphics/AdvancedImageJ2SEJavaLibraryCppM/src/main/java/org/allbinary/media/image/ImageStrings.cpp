
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESTRINGS_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageStrings::ImageStrings() {
        }
        auto ImageStrings::instance_owner() -> ImageStrings* { static std::unique_ptr<ImageStrings> value(new ImageStrings()); return value.get(); }
ImageStrings* ImageStrings::instance = ImageStrings::instance_owner();

    auto ImageStrings::getInstance() -> ImageStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageStrings::instance;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESTRINGS_CPP
