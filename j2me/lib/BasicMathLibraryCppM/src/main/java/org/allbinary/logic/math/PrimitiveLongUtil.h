
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H
        #define ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PrimitiveLongSingleton.h"
#include "MathUtil.h"

class PrimitiveLongUtil
            : public Object
         {

    public: static PrimitiveLongUtil createPowerOfTen(int32_t powerOfTen);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: int32_t powerOfTen;

    private: int32_t maxValue;

    private: int32_t maxDigits;

    private: std::vector<char> charArray;

    private: int32_t currentTotalDigits= 0;

    private: const PrimitiveLongSingleton primitiveLongSingleton = PrimitiveLongSingleton::getInstance();

public: PrimitiveLongUtil(int32_t powerOfTen, Object* unused);

    public: std::vector<char> getCharArray(int32_t value);

    private: void setCurrentTotalDigits(int32_t currentTotalDigits);

    public: int32_t getCurrentTotalDigits();

    public: int32_t getMaxDigits();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H
