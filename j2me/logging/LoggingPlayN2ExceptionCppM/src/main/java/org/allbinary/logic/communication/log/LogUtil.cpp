
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Throwable.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <playn/core/PlayN.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
#include "Log.h"
#include "PreLogUtil.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {

    private: static LogUtil instance() { return LogUtil(); }

    /*actual*/ public: static LogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil::instance();
    
}


    private: const LogFormatUtil logFormatUtil = LogFormatUtil::getInstance();

    private: const std::string LOG_SUCCESS = "org.allbinary: ";

private: LogUtil(){
}


    /*actual*/ public: void putL(Log log){

                        if(log == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    std::string specialMessage = log.getSpecialMessage();;
    

    Object* anyType = log.getObject();;
    

    std::string functionName = log.getFunctionName();;
    

    Object* exception = log.getThrowable();;
    
this->put(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public: void putF(std::string specialMessage, Object* anyType, std::string functionName){

    std::string className = PreLogUtil::getClassName(anyType);;
    

                        if(false)
                        
                                    {
                                    className= CommonStrings::getInstance().EMPTY;
    

                                    }
                                

    std::string message = this->logFormatUtil.getS(className, functionName, specialMessage);;
    

    PlayN playN = PlayN::getInstance();;
    
playN.log().debug(this->LOG_SUCCESS +message);
    
}


    /*actual*/ public: void putFS(std::string specialMessage, std::string className, std::string functionName){

    std::string message = this->logFormatUtil.getS(className, functionName, specialMessage);;
    

    PlayN playN = PlayN::getInstance();;
    
playN.log().debug(this->LOG_SUCCESS +message);
    
}


    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){

    std::string className = PreLogUtil::getClassName(anyType);;
    

                        if(false)
                        
                                    {
                                    className= CommonStrings::getInstance().EMPTY;
    

                                    }
                                

    std::string message = this->logFormatUtil.get(className, functionName, specialMessage, exception);;
    

    PlayN playN = PlayN::getInstance();;
    

                        if(exception != 
                                    nullptr
                                )
                        
                                    {
                                    playN.log().error(this->LOG_SUCCESS +message, exception as Throwable);
    

                                    }
                                
                        else {
                            playN.log().debug(this->LOG_SUCCESS +message);
    

                        }
                            
}


};

            

