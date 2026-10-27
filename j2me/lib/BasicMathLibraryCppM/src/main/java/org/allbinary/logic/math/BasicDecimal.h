
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ScaleFactorFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicDecimal
            : public virtual Object
         {

    private: static BasicDecimal* ZERO_BIGDECIMAL_owner();
    public: static BasicDecimal* ZERO_BIGDECIMAL;

    public: static BasicDecimal* createBigDecimal(BasicDecimal* bigDecimal);

    private: int64_t units;

public: BasicDecimal(int64_t units);

    public: void setint(int32_t value);

    public: void setlong(int64_t value);

    public: void set(BasicDecimal* bigDecimal);

    public: void addint(int32_t value);

    public: void addlong(int64_t value);

    public: void add(BasicDecimal* bigDecimal);

    public: void subtractint(int32_t value);

    public: void subtractlong(int64_t value);

    public: void subtract(BasicDecimal* bigDecimal);

    public: void multiplyint(int32_t value);

    public: void multiplylong(int64_t value);

    public: void multiply(BasicDecimal* bigDecimal);

    public: void divideint(int32_t value);

    public: void dividelong(int64_t value);

    public: void divide(BasicDecimal* bigDecimal);

    public: int64_t getUnscaled();

    private: int32_t scaled= 0;

    private: void updateScaled();

    public: int32_t getScaled();

    public: std::string toString();

    private: const int32_t factor;

    private: const int32_t factorValue;

    public: int32_t getScaledFactor();

    public: int32_t getScaledFactorValue();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H_COMPLETE
        #if __has_include("org/allbinary/logic/math/ScaleFactorFactory.h")
#include "org/allbinary/logic/math/ScaleFactorFactory.h"
#endif

        #endif
    
