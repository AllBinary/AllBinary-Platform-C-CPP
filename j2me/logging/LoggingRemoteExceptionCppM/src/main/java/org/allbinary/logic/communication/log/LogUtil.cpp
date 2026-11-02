
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
        #include "org/allbinary/logic/communication/log/Log.h"
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#include "org/allbinary/logic/communication/log/XmlRpcRemoteLogClient.h"
//ActualPlatform
auto LogUtil::instance_owner() -> LogUtil* { static std::unique_ptr<LogUtil> value(new LogUtil()); return value.get(); }
LogUtil* LogUtil::instance = LogUtil::instance_owner();

    /*actual*/ auto LogUtil::getInstance() -> LogUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil::instance;
    
}


LogUtil::LogUtil() : timeDelayHelper(new TimeDelayHelper(200000)), stringBuffer(new StringMaker()){
}


    /*actual*/ auto LogUtil::putL(Log* log) -> void{

                        if(log == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    std::string specialMessage = log->getSpecialMessage();;
    

    Object* anyType = log->getObject();;
    

    std::string functionName = log->getFunctionName();;
    

    Object* exception = log->getThrowable();;
    
this->put(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ auto LogUtil::putF(std::string specialMessage, Object* anyType, std::string functionName) -> void{
}


    /*actual*/ auto LogUtil::putF(std::string specialMessage, std::string className, std::string functionName) -> void{
}


    /*actual*/ auto LogUtil::put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception) -> void{

                        if(exception != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(exception->getClass()->getName().compare(Class::forType(typeid(XmlRpcException))->getName()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(exception->getClass()->getName().compare(Class::forType(typeid(IOException))->getName()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this->isFirstException || this->timeDelayHelper->isTimeTNT())
                        
                                    {
                                    
    std::string className = CommonStrings::getInstance()->EMPTY;;
    
this->isFirstException= false;
    

                        if(anyType != 
                                    nullptr
                                 && true)
                        
                                    {
                                    className= anyType->getClass()->getName();
    

                                    }
                                

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    

        try {
            System.out.println("Eeeek");
    

                        if(this->abeClientInformation == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                

    ABHashtable<Object*, Object*>* hashtable = this->abeClientInformation->toHashtable();;
    
this->stringBuffer->delete_(0, this->stringBuffer->length());
    
this->stringBuffer->append(message);
    
this->stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
this->stringBuffer->append(SpecialMessageUtil::getInstance()->get());
    
hashtable->put(this->MESSAGE, this->stringBuffer->toString());
    
(new XmlRpcRemoteLogClient(this->abeClientInformation))->get(hashtable);
    

                //: 
} catch(Throwable& e) 
            {
System.out.println("Exception");
    
e.printStackTrace();
    
}


                                    }
                                

                                    }
                                
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_CPP
