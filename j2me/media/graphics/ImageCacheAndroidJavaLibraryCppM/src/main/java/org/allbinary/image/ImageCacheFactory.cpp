
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGECACHEFACTORY_CPP
        #define ORG_ALLBINARY_IMAGE_IMAGECACHEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/ImageCacheFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageCache.h"


ImageCacheFactory::ImageCacheFactory() {
        }
        auto ImageCacheFactory::IMAGE_CACHE_owner() -> ImageCache* { static std::unique_ptr<ImageCache> value(new ImageCache()); return value.get(); }
ImageCache* ImageCacheFactory::IMAGE_CACHE = ImageCacheFactory::IMAGE_CACHE_owner();

    auto ImageCacheFactory::getInstance() -> ImageCache*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCacheFactory::IMAGE_CACHE;
    
}


    auto ImageCacheFactory::init() -> void{
}




        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHEFACTORY_CPP
