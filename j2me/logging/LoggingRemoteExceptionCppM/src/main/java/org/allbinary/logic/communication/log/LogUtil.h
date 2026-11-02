
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
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/System.h"
        
#include <java/io/IOException.h>
class XmlRpcException;
class CommonSeps;
class StringMaker;
class AbeClientInformationInterface;
class SpecialMessageUtil;
class CommonStrings;
class TimeDelayHelper;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Log;
class LogFormatUtil;
class XmlRpcRemoteLogClient;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class LogUtil
            : public virtual Object
         {

    private: static LogUtil* instance_owner();
    private: static LogUtil* instance;

    /*actual*/ public: static LogUtil* getInstance();

    private: const std::string MESSAGE = "message";

    private: bool isFirstException = true;

    private: TimeDelayHelper* timeDelayHelper;

    public: AbeClientInformationInterface* abeClientInformation;

private: LogUtil();

    private: StringMaker* stringBuffer;

    /*actual*/ public: void putL(Log* log);

    /*actual*/ public: void putF(std::string specialMessage, Object* anyType, std::string functionName);
    public: void putF(std::string specialMessage, const std::string& anyType, std::string functionName) { return putF(specialMessage, JavaString::box(anyType), functionName); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void putF(std::string specialMessage, BoxValue anyType, std::string functionName) { return putF(specialMessage, JavaBoxes::toObject(anyType), functionName); }

    /*actual*/ public: void putFS(std::string specialMessage, std::string className, std::string functionName);

    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<org/apache/xmlrpc/XmlRpcException.h>)
#include <org/apache/xmlrpc/XmlRpcException.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/canvas/SpecialMessageUtil.h>)
#include <org/allbinary/canvas/SpecialMessageUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/Log.h")
#include "org/allbinary/logic/communication/log/Log.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogFormatUtil.h")
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/XmlRpcRemoteLogClient.h")
#include "org/allbinary/logic/communication/log/XmlRpcRemoteLogClient.h"
#endif

        #endif
    
