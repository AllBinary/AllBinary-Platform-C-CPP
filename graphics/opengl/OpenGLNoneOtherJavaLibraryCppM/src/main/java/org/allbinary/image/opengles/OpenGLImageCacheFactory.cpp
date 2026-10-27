
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLImageCacheFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/image/ImageCache.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //OpenGLNoneOtherJavaLibrary

OpenGLImageCacheFactory::OpenGLImageCacheFactory() {
        }
        ImageCache* OpenGLImageCacheFactory::IMAGE_CACHE = ImageCache::NULL_IMAGE_CACHE;

    auto OpenGLImageCacheFactory::getInstance() -> ImageCache*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLImageCacheFactory::IMAGE_CACHE;
    
}


    auto OpenGLImageCacheFactory::init() -> void{

                        if(OpenGLImageCacheFactory::IMAGE_CACHE == 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHEFACTORY_CPP
