
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEINFO_H
        #define ORG_ALLBINARY_MATH_ANGLEINFO_H

            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AngleIncrementInfo.h"
#include "AngleIncrementInfoFactory.h"
#include "FrameUtil.h"

class AngleInfo
            : public Object
         {

    public: static AngleInfo getInstance(int16_t angleIncrement);

    private: static const std::string ANGLE = "Angle: ";

    private: AngleIncrementInfo angleIncrementInfo;

    private: int16_t angle = 0;

private: AngleInfo(AngleIncrementInfo angleIncrementInfo);

    private: const FrameUtil frameUtil = FrameUtil::getInstance();

    public: void adjustAngle(int32_t frame);

    public: int16_t getAngle();

    public: void setAngle(int16_t angle);

    public: AngleIncrementInfo getAngleIncrementInfo();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEINFO_H
