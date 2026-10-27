
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RECTANGLE_CPP
        #define ORG_ALLBINARY_GRAPHICS_RECTANGLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/Rectangle.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/GPoint.h"


Rectangle::Rectangle(GPoint* point, int32_t width, int32_t height){
this->point= point;
    
this->width= width;
    
this->height= height;
    
}


    auto Rectangle::getPoint() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    auto Rectangle::setPoint(GPoint* point) -> void{
this->point= point;
    
}


    auto Rectangle::getMaxX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point->getX() +this->width;
    
}


    auto Rectangle::getMaxY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point->getY() +this->height;
    
}


    auto Rectangle::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    auto Rectangle::setWidth(int32_t width) -> void{
this->width= width;
    
}


    auto Rectangle::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    auto Rectangle::setHeight(int32_t height) -> void{
this->height= height;
    
}


    auto Rectangle::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getPoint()->toString());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(CommonLabels::getInstance()->WIDTH_LABEL);
    
stringBuffer->appendint(this->getWidth());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(CommonLabels::getInstance()->HEIGHT_LABEL);
    
stringBuffer->appendint(this->getHeight());
    
stringBuffer->append(" MaxX: ");
    
stringBuffer->appendint(this->getMaxX());
    
stringBuffer->append(" MaxY: ");
    
stringBuffer->appendint(this->getMaxY());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_RECTANGLE_CPP
