
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Throwable.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/io/IOException.h>

      
#include <java/util/Hashtable.h>

      
#include <org/apache/xmlrpc/XmlRpcException.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/canvas/SpecialMessageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"
#include "LogFormatUtil.h"
#include "XmlRpcRemoteLogClient.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {
        

    private: static const instance: LogUtil = new LogUtil();

    /*actual*/ public static LogUtil getInstance();

    private: const MESSAGE: string = "message";

    private: isFirstException: bool = true;

    private: timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(200000);

    public abeClientInformation: AbeClientInformationInterface;

private constructor ();

    private: const stringBuffer: StringMaker = new StringMaker();

    /*actual*/ public putL(Log log);

    /*actual*/ public putF(string specialMessage, any = {} anyType, string functionName);

    /*actual*/ public putF(string specialMessage, string className, string functionName);

    /*actual*/ public put(string specialMessage, any = {} anyType, string functionName, any = {} exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
