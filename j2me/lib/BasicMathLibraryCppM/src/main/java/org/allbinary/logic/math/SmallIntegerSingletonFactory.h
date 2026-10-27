
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class AndroidUtil;
class J2MEUtil;
class LogUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SmallIntegerSingletonFactory
            : public virtual Object
         {

    private: static SmallIntegerSingletonFactory* instance_owner();
    private: static SmallIntegerSingletonFactory* instance;

    public: static SmallIntegerSingletonFactory* getInstance();

    public: const int32_t NEGATIVE_MAX = 500;

    public: const int32_t POSITIVE_MAX = 0x2D1;

    private: std::vector<int32_t> INTEGER_ARRAY;

    private: std::vector<std::string> STRING_ARRAY;

    private: int32_t MIN = 0;

    private: int32_t lastMin = 0;

    private: int32_t lastNegativeMin = 0;

    public: int32_t getMin();

    private: int32_t getMinAllowed();

    public: void initWithRange(int32_t value, int32_t negativeValue);

    public: void init();

private: SmallIntegerSingletonFactory();

    public: int32_t getAt(int32_t index);

    public: int32_t getAtNoThrow(int32_t index);

    public: int32_t createInstance(int32_t index);

    public: std::string getString(int32_t index);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
