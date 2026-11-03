
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGEFACTORY_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLESGL11VBOImageFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLImageFactory.h"
#include "org/allbinary/image/opengles/OpenGLESGL10Image.h"


OpenGLESGL11VBOImageFactory::OpenGLESGL11VBOImageFactory() {
        }
        
    auto OpenGLESGL11VBOImageFactory::getInstance(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new OpenGLESGL10Image(image, bitmapFactory, textureFactory);
    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGEFACTORY_CPP
