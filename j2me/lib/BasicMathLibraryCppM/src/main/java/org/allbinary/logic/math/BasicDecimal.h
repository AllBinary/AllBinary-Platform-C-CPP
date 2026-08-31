
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
        

    public static const ZERO_BIGDECIMAL: BasicDecimal = new BasicDecimal(0);

    public static BasicDecimal createBigDecimal(BasicDecimal bigDecimal);

    private: units: int64_t;

public constructor (int64_t units);

    public setint(int32_t value);

    public setlong(int64_t value);

    public set(BasicDecimal bigDecimal);

    public addint(int32_t value);

    public addlong(int64_t value);

    public add(BasicDecimal bigDecimal);

    public subtractint(int32_t value);

    public subtractlong(int64_t value);

    public subtract(BasicDecimal bigDecimal);

    public multiplyint(int32_t value);

    public multiplylong(int64_t value);

    public multiply(BasicDecimal bigDecimal);

    public divideint(int32_t value);

    public dividelong(int64_t value);

    public divide(BasicDecimal bigDecimal);

    public int64_t getUnscaled();

    private: scaled: int32_t= 0;

    updateScaled();

    public int32_t getScaled();

    public string toString();

    private: const factor: int32_t = ScaleFactorFactory.getInstance()!.DEFAULT_SCALE_FACTOR;

    private: const factorValue: int32_t = ScaleFactorFactory.getInstance()!.DEFAULT_SCALE_VALUE;

    public int32_t getScaledFactor();

    public int32_t getScaledFactorValue();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H
