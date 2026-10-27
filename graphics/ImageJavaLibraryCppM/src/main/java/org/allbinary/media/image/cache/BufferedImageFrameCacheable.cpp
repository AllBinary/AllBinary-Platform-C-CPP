
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEFRAMECACHEABLE_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEFRAMECACHEABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/cache/BufferedImageFrameCacheable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BufferedImageFrameCacheable::BufferedImageFrameCacheable(BufferedImage* bufferedImage, int64_t frame){
this->frame= frame;
    
this->setBufferedImage(bufferedImage);
    
}


    auto BufferedImageFrameCacheable::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    auto BufferedImageFrameCacheable::getBufferedImage() -> BufferedImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bufferedImage;
    
}


    auto BufferedImageFrameCacheable::setBufferedImage(BufferedImage* bufferedImage) -> void{
this->bufferedImage= bufferedImage;
    
}


    auto BufferedImageFrameCacheable::getFrame() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    auto BufferedImageFrameCacheable::setFrame(int64_t frame) -> void{
this->frame= frame;
    
}


    auto BufferedImageFrameCacheable::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(" Frame: ");
    
stringBuffer->appendlong(this->getFrame());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEFRAMECACHEABLE_CPP
