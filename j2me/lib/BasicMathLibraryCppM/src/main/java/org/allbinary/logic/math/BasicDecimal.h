
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/ScaleFactorFactory.h"

class BasicDecimal
            : public Object
         {

    public: static BasicDecimal* ZERO_BIGDECIMAL() { static std::unique_ptr<BasicDecimal> value(new BasicDecimal(0)); return value.get(); }

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

    private: const int32_t factor = ScaleFactorFactory::getInstance()->DEFAULT_SCALE_FACTOR;

    private: const int32_t factorValue = ScaleFactorFactory::getInstance()->DEFAULT_SCALE_VALUE;

    public: int32_t getScaledFactor();

    public: int32_t getScaledFactorValue();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H
