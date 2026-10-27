
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H
        #define ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/FrameUtil.h"

class AngleIncrementInfo
            : public Object
         {

    private: static inline const std::string INCREMENT = "Inc: ";

    private: int16_t angleIncrement;

    public: int32_t DOWN_FRAME;

    public: int32_t UP_FRAME;

    public: int32_t LEFT_FRAME;

    public: int32_t RIGHT_FRAME;

public: AngleIncrementInfo(int16_t angleIncrement);

    private: FrameUtil* frameUtil = FrameUtil::getInstance();

    public: int32_t getFrameAngle(int32_t frame);

    public: int16_t getAngleIncrement();

    public: std::string toString();

    public: int32_t getClosestGeneralDirection(int16_t angle);

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H
