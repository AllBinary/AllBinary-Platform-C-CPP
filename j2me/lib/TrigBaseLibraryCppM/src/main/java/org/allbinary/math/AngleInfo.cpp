
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEINFO_CPP
        #define ORG_ALLBINARY_MATH_ANGLEINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/math/AngleInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/math/AngleIncrementInfo.h"
#include "org/allbinary/math/AngleIncrementInfoFactory.h"
#include "org/allbinary/math/FrameUtil.h"


    auto AngleInfo::getInstance(int16_t angleIncrement) -> AngleInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AngleInfo(AngleIncrementInfoFactory::getInstance()->getAt(angleIncrement));
    
}


AngleInfo::AngleInfo(AngleIncrementInfo* angleIncrementInfo) : frameUtil(FrameUtil::getInstance()){
this->angleIncrementInfo= angleIncrementInfo;
    
}


    auto AngleInfo::adjustAngle(int32_t frame) -> void{

    int32_t newAngle = this->angleIncrementInfo->getAngleIncrement() *frame -90;;
    
this->setAngle(this->frameUtil->adjustAngleToFrameAngle(newAngle));
    
}


    auto AngleInfo::getAngle() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angle;
    
}


    auto AngleInfo::setAngle(int16_t angle) -> void{
this->angle= angle;
    
}


    auto AngleInfo::getAngleIncrementInfo() -> AngleIncrementInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angleIncrementInfo;
    
}


    auto AngleInfo::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(AngleInfo::ANGLE);
    
stringBuffer->appendshort(this->angle);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(StringUtil::getInstance()->toString(this->getAngleIncrementInfo()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_MATH_ANGLEINFO_CPP
