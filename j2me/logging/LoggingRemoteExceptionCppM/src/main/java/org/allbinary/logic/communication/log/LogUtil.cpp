
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

    private: static LogUtil instance() { return LogUtil(); }

    /*actual*/ public: static LogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil::instance();
    
}


    private: const std::string MESSAGE = "message";

    private: bool isFirstException = true;

    private: TimeDelayHelper timeDelayHelper = TimeDelayHelper(200000);

    public: AbeClientInformationInterface abeClientInformation;

private: LogUtil(){
}


    private: const StringMaker stringBuffer = StringMaker();

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
}


    /*actual*/ public: void putF(std::string specialMessage, std::string className, std::string functionName){
}


    /*actual*/ public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){

                        if(exception != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(exception->constructor.name.toString()!.compareTo(XmlRpcException.constructor.toString()!) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(exception->constructor.name.toString()!.compareTo(IOException.constructor.toString()!) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this->isFirstException || this->timeDelayHelper.isTimeTNT())
                        
                                    {
                                    
    std::string className = CommonStrings::getInstance().EMPTY;;
    
this->isFirstException= false;
    

                        if(anyType != 
                                    nullptr
                                 && anyType->constructor.name.toString()! != 
                                    nullptr
                                )
                        
                                    {
                                    className= anyType->constructor.name.toString()!;
    

                                    }
                                

    std::string message = LogFormatUtil::getInstance().get(className, functionName, specialMessage, exception);;
    

        try {
            console.log("Eeeek");
    

                        if(this->abeClientInformation == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                

    Hashtable<any, any> hashtable = this->abeClientInformation.toHashtable();;
    
this->stringBuffer.delete(0, this->stringBuffer.length());
    
this->stringBuffer.append(message);
    
this->stringBuffer.append(CommonSeps::getInstance().SPACE);
    
this->stringBuffer.append(SpecialMessageUtil::getInstance().get());
    
hashtable.put(this->MESSAGE, this->stringBuffer.toString());
    
XmlRpcRemoteLogClient(this->abeClientInformation).get(hashtable);
    

                //: 
} catch(e) 
            {
console.log("Exception");
    
e.printStackTrace();
    
}


                                    }
                                

                                    }
                                
}


};

            

