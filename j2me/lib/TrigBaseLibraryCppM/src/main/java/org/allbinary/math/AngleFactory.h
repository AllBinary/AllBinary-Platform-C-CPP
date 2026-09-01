
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEFACTORY_H
        #define ORG_ALLBINARY_MATH_ANGLEFACTORY_H

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Angle.h"
#include "NamedAngle.h"
#include "FrameUtil.h"

class AngleFactory
            : public Object
         {

    private: static AngleFactory instance() { return AngleFactory(); }

    public: static AngleFactory getInstance();

    public: static void main(std::vector<std::string> args);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const int16_t TOTAL_ANGLE = 360;

    public: const int16_t QUARTER_TOTAL_ANGLE = 90;

    private: const std::vector<Angle> angleArray = new Array(static_cast<int32_t>(this->TOTAL_ANGLE));

    private: const int16_t NEGATIVE_ONE =  -1;

    public: const NamedAngle NOT_ANGLE = NamedAngle(this->NEGATIVE_ONE, CommonStrings::getInstance().EMPTY);

    public: NamedAngle DOWN;

    public: NamedAngle UP;

    public: NamedAngle LEFT;

    public: NamedAngle RIGHT;

public: AngleFactory();

    private: const FrameUtil frameUtil = FrameUtil::getInstance();

    public: Angle getAt(int32_t index);

    public: Angle getClosestDirection(int32_t angle);

    public: Angle getGeneralDirection();

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEFACTORY_H
