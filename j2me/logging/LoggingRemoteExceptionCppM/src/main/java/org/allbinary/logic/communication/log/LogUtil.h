
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
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/System.h"
        
#include <java/io/IOException.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/canvas/SpecialMessageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"
#include "LogFormatUtil.h"
#include "XmlRpcRemoteLogClient.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {

    private: static LogUtil instance() { return LogUtil(); }

    /*actual*/ public: static LogUtil getInstance();

    private: const std::string MESSAGE = "message";

    private: bool isFirstException = true;

    private: TimeDelayHelper timeDelayHelper = TimeDelayHelper(200000);

    public: AbeClientInformationInterface abeClientInformation;

private: LogUtil();

    private: const StringMaker stringBuffer = StringMaker();

    /*actual*/ public: void putL(Log log);

    /*actual*/ public: void putF(std::string specialMessage, Object* anyType, std::string functionName);

    /*actual*/ public: void putF(std::string specialMessage, std::string className, std::string functionName);

    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
