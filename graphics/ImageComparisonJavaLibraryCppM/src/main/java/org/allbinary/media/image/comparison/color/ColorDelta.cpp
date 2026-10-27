
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/color/ColorDelta.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ColorDelta::ColorDelta(int32_t rgb1, int32_t rgb2){
this->setRgb1(rgb1);
    
this->setRgb2(rgb2);
    
this->key= ColorDelta::getKey(rgb1, rgb2);
    
}


    auto ColorDelta::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    auto ColorDelta::getKey(int32_t rgb1, int32_t rgb2) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(std::to_string(rgb1))->append(CommonSeps::getInstance()->UNDERSCORE)->append(std::to_string(rgb2))->toString();;
    
}


    auto ColorDelta::getRgb1() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rgb1;
    
}


    auto ColorDelta::setRgb1(int32_t rgb1) -> void{
this->rgb1= rgb1;
    
}


    auto ColorDelta::getRgb2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rgb2;
    
}


    auto ColorDelta::setRgb2(int32_t rgb2) -> void{
this->rgb2= rgb2;
    
}


    auto ColorDelta::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append("ColorDelta: ")->append(StringUtil::getInstance()->toString(this->getKey()))->append(" RGB1: ")->appendint(this->getRgb1())->append(" RGB2: ")->appendint(this->getRgb2())->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_CPP
