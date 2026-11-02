
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
class NullUtil;
class ExceptionUtil;
class StringMaker;
class StringUtil;
class CommonLabels;
class CommonSeps;
class TimeStampUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class LogFormatUtil
            : public virtual Object
         {

    private: static LogFormatUtil* instance_owner();
    private: static LogFormatUtil* instance;

    /*actual*/ public: static LogFormatUtil* getInstance();

    private: TimeStampUtil* timeStampUtil;

    private: CommonSeps* commonSeps;

    private: const std::string NONE = "None";

    private: const std::string LOG_ERROR = "\nLog-Error: ";

    private: const std::string EMPTY = "Empty";

    private: const std::string STACK_TRACE = "\nStack Trace: ";

    private: const std::string TIME = "Time: ";

    private: const std::string CLASS_NAME;

    private: const std::string FUNCTION_CALL;

    private: const std::string SPECIAL_MESSAGE = "> ";

private: LogFormatUtil();

    /*actual*/ public: std::string get(std::string className, std::string functionName, std::string specialMessage, Object* exception);
    public: std::string get(std::string className, std::string functionName, std::string specialMessage, const std::string& exception) { return get(className, functionName, specialMessage, JavaString::box(exception)); }

    /*actual*/ public: std::string getS(std::string className, std::string functionName, std::string specialMessage);

    private: StringMaker* getF(std::string className, std::string functionName);

    private: StringUtil* stringUtil;

    private: ExceptionUtil* exceptionUtil;

    private: NullUtil* nullUtil;

    /*actual*/ public: std::string getO(Object* exception);
    public: std::string getO(const std::string& exception) { return getO(JavaString::box(exception)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/exception/ExceptionUtil.h>)
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/time/TimeStampUtil.h>)
#include <org/allbinary/time/TimeStampUtil.h>
#endif

        #endif
    
