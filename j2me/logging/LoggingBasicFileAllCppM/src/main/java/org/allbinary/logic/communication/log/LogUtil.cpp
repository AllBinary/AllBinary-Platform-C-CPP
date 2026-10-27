
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/LogUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
#include <org/allbinary/log/FileLog.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform
auto LogUtil::instance_owner() -> LogUtil* { static std::unique_ptr<LogUtil> value(new LogUtil()); return value.get(); }
LogUtil* LogUtil::instance = LogUtil::instance_owner();

    /*actual*/ auto LogUtil::getInstance() -> LogUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil::instance;
    
}


LogUtil::LogUtil(){
}


    /*actual*/ auto LogUtil::putL(Log* log) -> void{

    std::string specialMessage = log->getSpecialMessage();;
    

    Object* anyType = log->getObject();;
    

    std::string functionName = log->getFunctionName();;
    

    Object* exception = log->getThrowable();;
    
this->put(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ auto LogUtil::putF(std::string specialMessage, Object* anyType, std::string functionName) -> void{
FileLog::put(specialMessage, anyType, functionName);
    
}


    /*actual*/ auto LogUtil::putFS(std::string specialMessage, std::string className, std::string functionName) -> void{
FileLog::put(specialMessage, className, functionName);
    
}


    /*actual*/ auto LogUtil::put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception) -> void{
FileLog::put(specialMessage, anyType, functionName, dynamic_cast<Throwable*>(exception));
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_CPP
