
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
#include "Log.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {

    private: static LogUtil instance() { return LogUtil(); }

    /*actual*/ public: static LogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil::instance();
    
}


private: LogUtil(){
}


    private: const LogFormatUtil logFormatUtil = LogFormatUtil::getInstance();

    /*actual*/ public: void putL(Log log){

    std::string specialMessage = log.getSpecialMessage();;
    

    Object* anyType = log.getObject();;
    

    std::string functionName = log.getFunctionName();;
    

    Object* exception = log.getThrowable();;
    
this->put(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public: void putF(std::string specialMessage, Object* anyType, std::string functionName){

    std::string className = CommonStrings::getInstance().EMPTY;;
    

                        if(anyType->constructor.name.toString() != 
                                    nullptr
                                )
                        
                                    {
                                    className= StringMaker().append(anyType->constructor.name.toString()).append(CommonSeps::getInstance().COLON).append(Integer::toHexString(TsUtil::getInstance().hashCode(anyType))).toString();
    

                                    }
                                

    std::string message = this->logFormatUtil.getS(className, functionName, specialMessage);;
    
console.log(this->LOG_SUCCESS + message);
    
}


    /*actual*/ public: void putFS(std::string specialMessage, std::string className, std::string functionName){

    std::string message = this->logFormatUtil.getS(className, functionName, specialMessage);;
    
console.log(this->LOG_SUCCESS + message);
    
}


    private: const std::string LOG_SUCCESS = "org.allbinary: ";

    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){

    std::string className = CommonStrings::getInstance().EMPTY;;
    

                        if(anyType->constructor.name.toString() != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t hashCodeValue = TsUtil::getInstance().hashCode(anyType);;
    

    std::string hexString = Integer::toHexString(hashCodeValue);;
    
className= StringMaker().append(anyType->constructor.name.toString()).append(CommonSeps::getInstance().COLON).append(hexString).toString();
    

                                    }
                                

    std::string message = this->logFormatUtil.get(className, functionName, specialMessage, exception);;
    
console.log(this->LOG_SUCCESS + message);
    
}


};

            

