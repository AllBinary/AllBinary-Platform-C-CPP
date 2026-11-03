
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
class FileLog;



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Log;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class LogUtil
            : public virtual Object
         {

    private: static LogUtil* instance_owner();
    private: static LogUtil* instance;

    /*actual*/ public: static LogUtil* getInstance();

private: LogUtil();

    /*actual*/ public: void putL(Log* log);

    /*actual*/ public: void putF(std::string specialMessage, Object* anyType, std::string functionName);
    public: void putF(std::string specialMessage, const std::string& anyType, std::string functionName) { return putF(specialMessage, JavaString::box(anyType), functionName); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void putF(std::string specialMessage, BoxValue anyType, std::string functionName) { return putF(specialMessage, JavaBoxes::toObject(anyType), functionName); }
    public: template<typename BoxElement> void putF(std::string specialMessage, const std::vector<BoxElement>& anyType, std::string functionName) { return putF(specialMessage, JavaBoxes::toObject(anyType), functionName); }

    /*actual*/ public: void putFS(std::string specialMessage, std::string className, std::string functionName);

    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/log/FileLog.h>)
#include <org/allbinary/log/FileLog.h>
#endif



#if __has_include("org/allbinary/logic/communication/log/Log.h")
#include "org/allbinary/logic/communication/log/Log.h"
#endif

        #endif
    
