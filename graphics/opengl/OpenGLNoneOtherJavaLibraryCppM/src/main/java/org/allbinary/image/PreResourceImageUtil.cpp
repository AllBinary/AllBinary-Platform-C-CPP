
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
        



        #ifndef ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_CPP
        #define ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/PreResourceImageUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PreResourceImageUtil::PreResourceImageUtil() {
        }
        auto PreResourceImageUtil::instance_owner() -> PreResourceImageUtil* { static std::unique_ptr<PreResourceImageUtil> value(new PreResourceImageUtil()); return value.get(); }
PreResourceImageUtil* PreResourceImageUtil::instance = PreResourceImageUtil::instance_owner();

    auto PreResourceImageUtil::getInstance() -> PreResourceImageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PreResourceImageUtil::instance;
    
}


    auto PreResourceImageUtil::encapsulate(Image* image) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    auto PreResourceImageUtil::updateGL(GL* gl, Image* image) -> void{
}


    auto PreResourceImageUtil::update(Graphics* graphics, Image* image) -> void{
}




        #endif //ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_CPP
