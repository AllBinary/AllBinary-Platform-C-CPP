
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H
        #define ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallLongFactory
            : public Object
         {
        

    private: static const instance: SmallLongFactory = new SmallLongFactory();

    public static SmallLongFactory getInstance();

    public const NEGATIVE_MAX: int32_t = 500;

    public const POSITIVE_MAX: int32_t = 0x2D1;

    private: const INTEGER_ARRAY: std::vector<Long> = new Array(this.NEGATIVE_MAX +this.POSITIVE_MAX);

    private: const STRING_ARRAY: std::vector<string> = new Array(this.NEGATIVE_MAX +this.POSITIVE_MAX);

    public MIN: int32_t = 0;

    public lastMin: int32_t = 0;

    public lastNegativeMin: int32_t = 0;

    public initWithRange(int32_t value, int32_t negativeValue);

    public init();

private constructor ();

    public Long getInstanceNoThrow(int64_t index);

    public string getString(int32_t index);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H
