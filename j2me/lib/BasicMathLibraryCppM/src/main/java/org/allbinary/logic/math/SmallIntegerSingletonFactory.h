
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H
        #define ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallIntegerSingletonFactory
            : public Object
         {
        

    private: static const instance: SmallIntegerSingletonFactory = new SmallIntegerSingletonFactory();

    public static SmallIntegerSingletonFactory getInstance();

    public const NEGATIVE_MAX: int32_t = 500;

    public const POSITIVE_MAX: int32_t = 0x2D1;

    private: const INTEGER_ARRAY: std::vector<Integer> = new Array(this.NEGATIVE_MAX +this.POSITIVE_MAX);

    private: const STRING_ARRAY: std::vector<string> = new Array(this.NEGATIVE_MAX +this.POSITIVE_MAX);

    private: MIN: int32_t = 0;

    private: lastMin: int32_t = 0;

    private: lastNegativeMin: int32_t = 0;

    public int32_t getMin();

    public initWithRange(int32_t value, int32_t negativeValue);

    public init();

private constructor ();

    public Integer getAt(int32_t index);

    public Integer getAtNoThrow(int32_t index);

    public Integer createInstance(int32_t index);

    public string getString(int32_t index);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H
