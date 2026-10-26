
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/time/TimeStampUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class LogFormatUtil
            : public Object
         {

    private: static LogFormatUtil instance() { return LogFormatUtil(); }

    /*actual*/ public: static LogFormatUtil getInstance();

    private: const TimeStampUtil timeStampUtil = TimeStampUtil::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const std::string LOG_ERROR = "\nLog-Error: ";

    private: const std::string EMPTY = "Empty";

    private: const std::string STACK_TRACE = "\nStack Trace: ";

    private: const std::string TIME = "Time: ";

    private: const std::string CLASS_NAME = this->commonSeps.SPACE;

    private: const std::string FUNCTION_CALL = CommonLabels::getInstance().COLON_SEP;

    private: const std::string SPECIAL_MESSAGE = "> ";

private: LogFormatUtil();

    /*actual*/ public: std::string get(std::string className, std::string functionName, std::string specialMessage, Object* exception);

    /*actual*/ public: std::string getS(std::string className, std::string functionName, std::string specialMessage);

    private: StringMaker getF(std::string className, std::string functionName);

    private: const StringUtil stringUtil = StringUtil::getInstance();

    private: const ExceptionUtil exceptionUtil = ExceptionUtil::getInstance();

    private: const NullUtil nullUtil = NullUtil::getInstance();

    /*actual*/ public: std::string getO(Object* exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H
