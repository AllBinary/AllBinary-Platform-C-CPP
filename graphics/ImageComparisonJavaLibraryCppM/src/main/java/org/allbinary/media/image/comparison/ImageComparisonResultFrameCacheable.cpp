
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/ImageComparisonResultFrameCacheable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/ImageComparisonResult.h"


ImageComparisonResultFrameCacheable::ImageComparisonResultFrameCacheable(ImageComparisonResult* imageComparisonResult, int64_t frame){
this->setImageComparisonResult(imageComparisonResult);
    
this->frame= frame;
    
}


    auto ImageComparisonResultFrameCacheable::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    auto ImageComparisonResultFrameCacheable::getFrame() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    auto ImageComparisonResultFrameCacheable::setFrame(int64_t frame) -> void{
this->frame= frame;
    
}


    auto ImageComparisonResultFrameCacheable::getImageComparisonResult() -> ImageComparisonResult*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageComparisonResult;
    
}


    auto ImageComparisonResultFrameCacheable::setImageComparisonResult(ImageComparisonResult* imageComparisonResult) -> void{
this->imageComparisonResult= imageComparisonResult;
    
}


    auto ImageComparisonResultFrameCacheable::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(" Frame: ");
    
stringBuffer->appendlong(this->getFrame());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_CPP
