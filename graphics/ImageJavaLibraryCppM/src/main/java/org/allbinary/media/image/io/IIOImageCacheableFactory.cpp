
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/io/IIOImageCacheableFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/io/IIOImageCacheable.h"


IIOImageCacheableFactory::IIOImageCacheableFactory(){
}


    auto IIOImageCacheableFactory::getInstance(Object* key) -> CacheableInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new IIOImageCacheable(key);
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLEFACTORY_CPP
