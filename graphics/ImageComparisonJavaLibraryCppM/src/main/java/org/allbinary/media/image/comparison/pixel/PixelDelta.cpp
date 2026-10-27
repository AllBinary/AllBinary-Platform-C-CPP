
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/pixel/PixelDelta.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/media/image/comparison/color/ColorDelta.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PixelDelta::PixelDelta(GPoint* point, ColorDelta* colorDelta){
this->setPoint(point);
    
this->setColorDelta(colorDelta);
    
this->key= PixelDelta::getKey(this->getPoint(), this->getColorDelta());
    
}


    auto PixelDelta::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    auto PixelDelta::getKey(GPoint* point, ColorDelta* colorDelta) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->appendint(TsUtil::getInstance()->hashCode(point))->append(CommonSeps::getInstance()->UNDERSCORE)->append(colorDelta->getKey()->toString())->toString();;
    
}


    auto PixelDelta::getPoint() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    auto PixelDelta::setPoint(GPoint* point) -> void{
this->point= point;
    
}


    auto PixelDelta::getColorDelta() -> ColorDelta*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorDelta;
    
}


    auto PixelDelta::setColorDelta(ColorDelta* colorDelta) -> void{
this->colorDelta= colorDelta;
    
}


    auto PixelDelta::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append("PixelDelta: Point: ")->append(this->point->toString())->append(CommonSeps::getInstance()->SPACE)->append(this->colorDelta->toString())->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_CPP
