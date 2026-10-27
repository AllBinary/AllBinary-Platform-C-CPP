
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class NullUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PrimitiveLongSingleton;
class MathUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PrimitiveLongUtil
            : public virtual Object
         {

    public: static PrimitiveLongUtil* createPowerOfTen(int32_t powerOfTen);

    /*protected*/ public: LogUtil* logUtil;

    private: int32_t powerOfTen;

    private: int32_t maxValue;

    private: int32_t maxDigits;

    private: std::vector<char> charArray;

    private: int32_t currentTotalDigits= 0;

    private: PrimitiveLongSingleton* primitiveLongSingleton;

public: PrimitiveLongUtil(int32_t powerOfTen, Object* unused);

    public: std::vector<char> getCharArray(int32_t value);

    private: void setCurrentTotalDigits(int32_t currentTotalDigits);

    public: int32_t getCurrentTotalDigits();

    public: int32_t getMaxDigits();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/math/PrimitiveLongSingleton.h")
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#endif
#if __has_include("org/allbinary/logic/math/MathUtil.h")
#include "org/allbinary/logic/math/MathUtil.h"
#endif

        #endif
    
