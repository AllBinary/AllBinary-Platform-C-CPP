
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
        
            #include "java/lang/Throwable.h"
        
class CommonSeps;
class CommonStrings;
class StringMaker;
class StringUtil;
class PlayN;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogFormatUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class PreLogUtil
            : public virtual Object
         {

    /*actual*/ public: static void put(std::string specialMessage, Object* anyType, std::string functionName);
    public: static void put(std::string specialMessage, const std::string& anyType, std::string functionName) { return put(specialMessage, JavaString::box(anyType), functionName); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static void put(std::string specialMessage, BoxValue anyType, std::string functionName) { return put(specialMessage, JavaBoxes::toObject(anyType), functionName); }
    public: template<typename BoxElement> static void put(std::string specialMessage, const std::vector<BoxElement>& anyType, std::string functionName) { return put(specialMessage, JavaBoxes::toObject(anyType), functionName); }

    private: static inline const std::string LOG_SUCCESS = "org.allbinary: ";

    /*actual*/ public: static void putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    /*actual*/ public: static void putS(std::string specialMessage, std::string className, std::string functionName);

    /*actual*/ public: static void putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception);
    public: static void putSE(std::string specialMessage, std::string className, std::string functionName, const std::string& exception) { return putSE(specialMessage, className, functionName, JavaString::box(exception)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static void putSE(std::string specialMessage, std::string className, std::string functionName, BoxValue exception) { return putSE(specialMessage, className, functionName, JavaBoxes::toObject(exception)); }
    public: template<typename BoxElement> static void putSE(std::string specialMessage, std::string className, std::string functionName, const std::vector<BoxElement>& exception) { return putSE(specialMessage, className, functionName, JavaBoxes::toObject(exception)); }

    /*actual*/ public: static std::string getClassName(Object* anyType);
    public: static std::string getClassName(const std::string& anyType) { return getClassName(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static std::string getClassName(BoxValue anyType) { return getClassName(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> static std::string getClassName(const std::vector<BoxElement>& anyType) { return getClassName(JavaBoxes::toObject(anyType)); }

public: PreLogUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<playn/core/PlayN.h>)
#include <playn/core/PlayN.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/LogFormatUtil.h")
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#endif

        #endif
    
