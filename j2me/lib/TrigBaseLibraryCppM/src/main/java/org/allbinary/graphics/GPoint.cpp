
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_GPOINT_CPP
        #define ORG_ALLBINARY_GRAPHICS_GPOINT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/GPoint.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

    auto GPoint::getInstance(GPoint* point) -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new GPoint(point->getX(), point->getY(), point->getZ());
    
}


GPoint::GPoint(int32_t x, int32_t y, int32_t z){
this->x= x;
    
this->y= y;
    
this->z= z;
    
}


    auto GPoint::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->x;
    
}


    auto GPoint::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->y;
    
}


    auto GPoint::getZ() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->z;
    
}


    auto GPoint::getRawX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->x;
    
}


    auto GPoint::getRawY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->y;
    
}


    auto GPoint::getRawZ() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->z;
    
}


    auto GPoint::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GPoint::toStringStatic(this->getX(), this->getY(), this->getZ());;
    
}


    auto GPoint::toStringStatic(int32_t x, int32_t y, int32_t z) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    PositionStrings* positionStrings = PositionStrings::getInstance();;
    
stringBuffer->append(GPoint::POINT_LABEL);
    
stringBuffer->append(positionStrings->X_LABEL);
    
stringBuffer->appendint(x);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(positionStrings->Y_LABEL);
    
stringBuffer->appendint(y);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(positionStrings->Z_LABEL);
    
stringBuffer->appendint(z);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_GPOINT_CPP
