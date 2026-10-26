
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallIntegerSingletonFactory
            : public Object
         {

    private: static SmallIntegerSingletonFactory instance() { return SmallIntegerSingletonFactory(); }

    public: static SmallIntegerSingletonFactory getInstance();

    public: const int32_t NEGATIVE_MAX = 500;

    public: const int32_t POSITIVE_MAX = 0x2D1;

    private: const std::vector<Integer> INTEGER_ARRAY = std::vector<Integer>(this->NEGATIVE_MAX +this->POSITIVE_MAX);

    private: const std::vector<std::string> STRING_ARRAY = std::vector<std::string>(this->NEGATIVE_MAX +this->POSITIVE_MAX);

    private: int32_t MIN = 0;

    private: int32_t lastMin = 0;

    private: int32_t lastNegativeMin = 0;

    public: int32_t getMin();

    private: int32_t getMinAllowed();

    public: void initWithRange(int32_t value, int32_t negativeValue);

    public: void init();

private: SmallIntegerSingletonFactory();

    public: Integer getAt(int32_t index);

    public: Integer getAtNoThrow(int32_t index);

    public: Integer createInstance(int32_t index);

    public: std::string getString(int32_t index);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H
