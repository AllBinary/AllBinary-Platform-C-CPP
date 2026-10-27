
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
        



            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {

            static const char* PUBLIC = "%{public}s";
            

    private: static LogUtil* instance() { static std::unique_ptr<LogUtil> value(new LogUtil()); return value.get(); }

    /*actual*/ public: static LogUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil::instance();
    
}


    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: LogFormatUtil* logFormatUtil = LogFormatUtil::getInstance();

    private: const std::string LABEL = "org.allbinary";

private: LogUtil(){
}


    /*actual*/ public: void putL(Log* log){

    std::string specialMessage = log->getSpecialMessage();;
    

    Object* anyType = log->getObject();;
    

    std::string functionName = log->getFunctionName();;
    

    Object* exception = log->getThrowable();;
    
this->put(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public: void putF(std::string specialMessage, Object* anyType, std::string functionName){
this->put(specialMessage, anyType, functionName, NullUtil::getInstance()->NULL_OBJECT);
    
}


    public: void putFS(std::string specialMessage, std::string string, std::string functionName){
this->putS(specialMessage, string, functionName, NullUtil::getInstance()->NULL_OBJECT);
    
}


    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){

    std::string className = this->LABEL;;
    
className= (new StringMaker())->append(anyType->getClass()->getName())->append(this->commonSeps->COLON)->append(Integer.toHexString(TsUtil::getInstance()->hashCode(anyType)))->toString();
    

    std::string message = this->logFormatUtil->get(className, functionName, specialMessage, exception);;
    
android.util.Log.i(this->LABEL, message);
    
}


    /*actual*/ public: void putS(std::string specialMessage, std::string string, std::string functionName, Object* exception){

    std::string className = this->LABEL;;
    
className= (new StringMaker())->append(string)->append(this->commonSeps->COLON)->append(Integer.toHexString(TsUtil::getInstance()->hashCode(string)))->toString();
    

    std::string message = this->logFormatUtil->get(className, functionName, specialMessage, exception);;
    
android.util.Log.i(this->LABEL, message);
    
}


};

            

