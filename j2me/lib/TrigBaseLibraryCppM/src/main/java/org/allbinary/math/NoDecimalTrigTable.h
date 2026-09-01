
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
        



        #ifndef ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H
        #define ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AngleFactory.h"
#include "PositionStrings.h"
#include "Angle.h"

class NoDecimalTrigTable
            : public Object
         {

    private: static NoDecimalTrigTable instance() { return NoDecimalTrigTable(); }

    public: static NoDecimalTrigTable getInstance();

    private: const MathUtil mathUtil = MathUtil::getInstance();

    private: std::vector<int64_t> noDecimalSin;

    private: std::vector<int64_t> noDecimalCos;

    private: std::vector<int64_t> noDecimalTan;

private: NoDecimalTrigTable();

    public: int64_t sin(int32_t angle);

    public: int64_t cos(int32_t angle);

    public: int64_t tan(int32_t angle);

    public: int32_t SCALE = 10000;

                //@Throws(Exception.constructor)
            
    public: int16_t antiTan(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public: int16_t antiTanDebug(int32_t screenX, int32_t screenY, int32_t targetX, int32_t targetY);

};

            


        #endif //ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H
