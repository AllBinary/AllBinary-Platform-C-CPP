
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/logging/Level.h>

      
#include <java/util/logging/Logger.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
#include "Log.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {

    private: static LogUtil instance() { return LogUtil(); }

    /*actual*/ public: static LogUtil getInstance();

    private: const Logger logger = Logger::getLogger(LogUtil.constructor.toString());

    private: const LogFormatUtil logFormatUtil = LogFormatUtil::getInstance();

private: LogUtil();

    /*actual*/ public: void putL(Log log);

    /*actual*/ public: void putF(std::string specialMessage, Object* anyType, std::string functionName);

    /*actual*/ public: void putFS(std::string specialMessage, std::string className, std::string functionName);

    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    /*actual*/ public: void putS(std::string specialMessage, std::string className, std::string functionName, Object* exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
