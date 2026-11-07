
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/cache/BufferedImageCacheable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/cache/BufferedImageInfo.h"


BufferedImageCacheable::BufferedImageCacheable(BufferedImageInfo* key){
this->key= key;
    
this->setBufferedImage(new BufferedImage(key->getWidth(), key->getHeight(), key->getType()));
    
}


    auto BufferedImageCacheable::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->key);
    
}


    auto BufferedImageCacheable::getBufferedImage() -> BufferedImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->bufferedImage;
    
}


    auto BufferedImageCacheable::setBufferedImage(BufferedImage* bufferedImage) -> void{
this->bufferedImage= bufferedImage;
    
}


    auto BufferedImageCacheable::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(" ");
    
stringBuffer->append(JavaString::valueOf(this->getKey()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_CPP
