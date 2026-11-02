
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //NoPlatform
class PreLogUtil
            : public virtual Object
         {

    public: static void put(std::string specialMessage, Object* anyType, std::string functionName);
    public: static void put(std::string specialMessage, const std::string& anyType, std::string functionName) { return put(specialMessage, JavaString::box(anyType), functionName); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static void put(std::string specialMessage, BoxValue anyType, std::string functionName) { return put(specialMessage, JavaBoxes::toObject(anyType), functionName); }

    public: static void putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    public: static void putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception);
    public: static void putSE(std::string specialMessage, std::string className, std::string functionName, const std::string& exception) { return putSE(specialMessage, className, functionName, JavaString::box(exception)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static void putSE(std::string specialMessage, std::string className, std::string functionName, BoxValue exception) { return putSE(specialMessage, className, functionName, JavaBoxes::toObject(exception)); }

public: PreLogUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif

        #endif
    
