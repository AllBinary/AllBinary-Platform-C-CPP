
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallLongFactory
            : public Object
         {

    private: static SmallLongFactory* instance() { static std::unique_ptr<SmallLongFactory> value(new SmallLongFactory()); return value.get(); }

    public: static SmallLongFactory* getInstance();

    public: const int32_t NEGATIVE_MAX = 500;

    public: const int32_t POSITIVE_MAX = 0x2D1;

    private: const std::vector<int64_t> INTEGER_ARRAY = std::vector<int64_t>(this->NEGATIVE_MAX +this->POSITIVE_MAX);

    private: const std::vector<std::string> STRING_ARRAY = std::vector<std::string>(this->NEGATIVE_MAX +this->POSITIVE_MAX);

    public: int32_t MIN = 0;

    public: int32_t lastMin = 0;

    public: int32_t lastNegativeMin = 0;

    public: void initWithRange(int32_t value, int32_t negativeValue);

    public: void init();

private: SmallLongFactory();

    public: int64_t getInstanceNoThrow(int64_t index);

    public: std::string getString(int32_t index);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H
