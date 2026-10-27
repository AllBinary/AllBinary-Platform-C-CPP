
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
        



        #ifndef JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_CPP
        #define JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "javax/microedition/lcdui/PostLoadPlatformImage.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/PlatformImage.h"
//PlatformNullImageJavaLibrary

PostLoadPlatformImage::PostLoadPlatformImage() {
        }
        auto PostLoadPlatformImage::instance_owner() -> PostLoadPlatformImage* { static std::unique_ptr<PostLoadPlatformImage> value(new PostLoadPlatformImage()); return value.get(); }
PostLoadPlatformImage* PostLoadPlatformImage::instance = PostLoadPlatformImage::instance_owner();

    auto PostLoadPlatformImage::getInstance() -> PostLoadPlatformImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PostLoadPlatformImage::instance;
    
}




        #endif //JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_CPP
