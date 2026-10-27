
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFO_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/cache/BufferedImageInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BufferedImageInfo::BufferedImageInfo(int32_t width, int32_t height, int32_t type){
this->width= width;
    
this->height= height;
    
this->type= type;
    
}


    auto BufferedImageInfo::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    auto BufferedImageInfo::setWidth(int32_t width) -> void{
this->width= width;
    
}


    auto BufferedImageInfo::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    auto BufferedImageInfo::setHeight(int32_t height) -> void{
this->height= height;
    
}


    auto BufferedImageInfo::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    auto BufferedImageInfo::setType(int32_t type) -> void{
this->type= type;
    
}


    auto BufferedImageInfo::toString() -> std::string{

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("BufferedImageInfo -");
    
stringBuffer->append(commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(this->getWidth());
    
stringBuffer->append(commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(this->getHeight());
    
stringBuffer->append(" Type: ");
    
stringBuffer->appendint(this->getType());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGEINFO_CPP
