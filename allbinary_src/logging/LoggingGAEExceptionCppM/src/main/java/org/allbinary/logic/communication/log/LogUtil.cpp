
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/logging/Level.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <java/util/logging/Logger.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {

    private: static LogUtil* instance() { static std::unique_ptr<LogUtil> value(new LogUtil()); return value.get(); }

    /*actual*/ public: static LogUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil::instance();
    
}


    private: Logger* logger = Logger::getLogger(LogUtil.constructor.getName());

    private: LogFormatUtil* logFormatUtil = LogFormatUtil::getInstance();

private: LogUtil(){
}


    /*actual*/ public: void init(){
PreLogUtil::put("Loggin Initialized", this, "init()");
    
}


    /*actual*/ public: void putL(Log* log){

    Object* exception = log->getThrowable();;
    

        try {
            
                        if(exception != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string specialMessage = log->getSpecialMessage();;
    

    Object* anyType = log->getObject();;
    

    std::string functionName = log->getFunctionName();;
    

    std::string className = CommonStrings::getInstance()->EMPTY;;
    

    Class* clazz = anyType->getClass();;
    

                        if(true)
                        
                                    {
                                    className= clazz->getName();
    

                                    }
                                

    std::string message = this->logFormatUtil->get(className, functionName, specialMessage, exception);;
    
this->logger->log(Level::INFO, message);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
}

}


    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){

        try {
            
    std::string className = CommonStrings::getInstance()->EMPTY;;
    

    Class* clazz = anyType->getClass();;
    

                        if(true)
                        
                                    {
                                    className= clazz->getName();
    

                                    }
                                

    std::string message = this->logFormatUtil->getS(className, functionName, specialMessage);;
    

                        if(exception != 
                                    nullptr
                                )
                        
                                    {
                                    this->logger->log(Level::SEVERE, message, exception);
    

                                    }
                                
                        else {
                            this->logger->log(Level::INFO, message);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
}

}


};

            

