
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform
auto LogUtil::instance_owner() -> LogUtil* { static std::unique_ptr<LogUtil> value(new LogUtil()); return value.get(); }
LogUtil* LogUtil::instance = LogUtil::instance_owner();

    /*actual*/ auto LogUtil::getInstance() -> LogUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LogUtil::instance;
    
}


LogUtil::LogUtil() : logFormatUtil(LogFormatUtil::getInstance()){
}


    /*actual*/ auto LogUtil::putL(Log* log) -> void{

    std::string specialMessage = log->getSpecialMessage();;
    

    Object* anyType = JavaBoxes::toObject(log->getObject());;
    

    std::string functionName = log->getFunctionName();;
    

    Object* exception = JavaBoxes::toObject(log->getThrowable());;
    

                        if(log != 
                                    nullptr
                                )
                        
                                    {
                                    this->put(specialMessage, anyType, functionName, exception);
    

                                    }
                                
}


    /*actual*/ auto LogUtil::putF(std::string specialMessage, Object* anyType, std::string functionName) -> void{
}


    /*actual*/ auto LogUtil::putFS(std::string specialMessage, std::string className, std::string functionName) -> void{
}


    /*actual*/ auto LogUtil::put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception) -> void{

    std::string className = this->LABEL;;
    
className= anyType->getClass()->getName();
    

    std::string message = this->logFormatUtil->get(className, functionName, specialMessage, exception);;
    
android.util->Log->i(this->LABEL, JavaString::valueOf(this->LOG_SUCCESS) +JavaString::valueOf(message));
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_CPP
