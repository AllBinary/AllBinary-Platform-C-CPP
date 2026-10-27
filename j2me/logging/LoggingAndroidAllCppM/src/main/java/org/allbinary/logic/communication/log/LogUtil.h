
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
        

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class NullUtil;
class TsUtil;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogFormatUtil;
class Log;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class LogUtil
            : public virtual Object
         {

            static const char* PUBLIC = "%{public}s";
            

    private: static LogUtil* instance_owner();
    private: static LogUtil* instance;

    /*actual*/ public: static LogUtil* getInstance();

    private: CommonSeps* commonSeps;

    private: LogFormatUtil* logFormatUtil;

    private: const std::string LABEL = "org.allbinary";

private: LogUtil();

    /*actual*/ public: void putL(Log* log);

    /*actual*/ public: void putF(std::string specialMessage, Object* anyType, std::string functionName);

    public: void putFS(std::string specialMessage, std::string string, std::string functionName);

    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    /*actual*/ public: void putS(std::string specialMessage, std::string string, std::string functionName, Object* exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/LogFormatUtil.h")
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Log.h")
#include "org/allbinary/logic/communication/log/Log.h"
#endif

        #endif
    
