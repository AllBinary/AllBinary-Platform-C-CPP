
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H
        #define ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScaleFactorFactory.h"

class BasicDecimal
            : public Object
         {

    public: static const BasicDecimal ZERO_BIGDECIMAL = BasicDecimal(0);

    public: static BasicDecimal createBigDecimal(BasicDecimal bigDecimal);

    private: int64_t units;

public: BasicDecimal(int64_t units);

    public: void setint(int32_t value);

    public: void setlong(int64_t value);

    public: void set(BasicDecimal bigDecimal);

    public: void addint(int32_t value);

    public: void addlong(int64_t value);

    public: void add(BasicDecimal bigDecimal);

    public: void subtractint(int32_t value);

    public: void subtractlong(int64_t value);

    public: void subtract(BasicDecimal bigDecimal);

    public: void multiplyint(int32_t value);

    public: void multiplylong(int64_t value);

    public: void multiply(BasicDecimal bigDecimal);

    public: void divideint(int32_t value);

    public: void dividelong(int64_t value);

    public: void divide(BasicDecimal bigDecimal);

    public: int64_t getUnscaled();

    private: int32_t scaled= 0;

    private: void updateScaled();

    public: int32_t getScaled();

    public: std::string toString();

    private: const int32_t factor = ScaleFactorFactory::getInstance().DEFAULT_SCALE_FACTOR;

    private: const int32_t factorValue = ScaleFactorFactory::getInstance().DEFAULT_SCALE_VALUE;

    public: int32_t getScaledFactor();

    public: int32_t getScaledFactorValue();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H
