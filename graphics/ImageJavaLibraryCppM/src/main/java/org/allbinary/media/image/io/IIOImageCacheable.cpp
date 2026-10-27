
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLE_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/io/IIOImageCacheable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <javax/imageio/IIOImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

IIOImageCacheable::IIOImageCacheable(std::string key){
this->key= key;
    
}


    auto IIOImageCacheable::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    auto IIOImageCacheable::setBufferedImage(BufferedImage* bufferedImage) -> void{
this->setIioImage(new IIOImage(bufferedImage, 
                            nullptr, 
                            nullptr));
    
}


    auto IIOImageCacheable::getIioImage() -> IIOImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->iioImage;
    
}


    auto IIOImageCacheable::setIioImage(IIOImage* iioImage) -> void{
this->iioImage= iioImage;
    
}


    auto IIOImageCacheable::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(" Reusable IIOImage");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IO_IIOIMAGECACHEABLE_CPP
