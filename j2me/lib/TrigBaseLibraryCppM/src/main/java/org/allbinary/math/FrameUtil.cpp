
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
        



        #ifndef ORG_ALLBINARY_MATH_FRAMEUTIL_CPP
        #define ORG_ALLBINARY_MATH_FRAMEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/math/FrameUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/math/AngleFactory.h"

auto FrameUtil::instance_owner() -> FrameUtil* { static std::unique_ptr<FrameUtil> value(new FrameUtil()); return value.get(); }
FrameUtil* FrameUtil::instance = FrameUtil::instance_owner();

    auto FrameUtil::getInstance() -> FrameUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FrameUtil::instance;
    
}


FrameUtil::FrameUtil(){
}


    auto FrameUtil::getFrameForAngle(int16_t angle, int32_t angleIncrement) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adjustAngleToFrameAngle(static_cast<int32_t>(angle)) /angleIncrement;
    
}


    auto FrameUtil::getFrameAngle(int32_t frame, int32_t angleIncrement) -> int32_t{

    int32_t frameAngle = angleIncrement *frame -90;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adjustAngleToFrameAngle(frameAngle);;
    
}


    auto FrameUtil::adjustAngleToFrameAngle(int32_t currentAngle) -> int32_t{

    AngleFactory* angleFactory = AngleFactory::getInstance();;
    

                        if(currentAngle > 359)
                        
                                    {
                                    currentAngle= (currentAngle -angleFactory->TOTAL_ANGLE);
    

        while(currentAngle > 359)
        {
currentAngle= (currentAngle -angleFactory->TOTAL_ANGLE);
    
}


                                    }
                                

                        if(currentAngle < 0)
                        
                                    {
                                    currentAngle= (currentAngle +angleFactory->TOTAL_ANGLE);
    

        while(currentAngle < 0)
        {
currentAngle= (currentAngle +angleFactory->TOTAL_ANGLE);
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return currentAngle;
    
}




        #endif //ORG_ALLBINARY_MATH_FRAMEUTIL_CPP
