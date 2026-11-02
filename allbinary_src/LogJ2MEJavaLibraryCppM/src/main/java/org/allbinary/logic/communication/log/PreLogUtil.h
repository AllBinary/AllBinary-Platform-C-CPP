
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
        
            #include "java/lang/System.h"
        
class NullUtil;

class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogFormatUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class PreLogUtil
            : public virtual Object
         {

    /*actual*/ public: static void put(std::string specialMessage, Object* anyType, std::string functionName);
    public: static void put(std::string specialMessage, const std::string& anyType, std::string functionName) { return put(specialMessage, JavaString::box(anyType), functionName); }

    private: static inline const std::string LOG_SUCCESS = "org.allbinary: ";

    /*actual*/ public: static void putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    /*actual*/ public: static void putS(std::string specialMessage, std::string className, std::string functionName);

    /*actual*/ public: static void putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception);
    public: static void putSE(std::string specialMessage, std::string className, std::string functionName, const std::string& exception) { return putSE(specialMessage, className, functionName, JavaString::box(exception)); }

    public: static std::string getClassName(Object* anyType);
    public: static std::string getClassName(const std::string& anyType) { return getClassName(JavaString::box(anyType)); }

public: PreLogUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif

#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/LogFormatUtil.h")
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#endif

        #endif
    
