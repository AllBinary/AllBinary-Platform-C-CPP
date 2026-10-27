
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SmallLongFactory
            : public virtual Object
         {

    private: static SmallLongFactory* instance_owner();
    private: static SmallLongFactory* instance;

    public: static SmallLongFactory* getInstance();

    public: const int32_t NEGATIVE_MAX = 500;

    public: const int32_t POSITIVE_MAX = 0x2D1;

    private: std::vector<int64_t> INTEGER_ARRAY;

    private: std::vector<std::string> STRING_ARRAY;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H_COMPLETE
        
        #endif
    
