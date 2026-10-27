
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEFACTORY_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLImageFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLImageFactory::OpenGLImageFactory() {
        }
        auto OpenGLImageFactory::NULL_OPENGL_IMAGE_FACTORY_owner() -> OpenGLImageFactory* { static std::unique_ptr<OpenGLImageFactory> value(new OpenGLImageFactory()); return value.get(); }
OpenGLImageFactory* OpenGLImageFactory::NULL_OPENGL_IMAGE_FACTORY = OpenGLImageFactory::NULL_OPENGL_IMAGE_FACTORY_owner();

    auto OpenGLImageFactory::getInstance(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) -> Image*{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEFACTORY_CPP
