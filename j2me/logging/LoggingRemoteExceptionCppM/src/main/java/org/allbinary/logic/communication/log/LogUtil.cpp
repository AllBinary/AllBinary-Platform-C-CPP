
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
        

    private: static const instance: LogUtil = new LogUtil();

    /*actual*/ public static LogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil.instance;
    
}


    private: const MESSAGE: string = "message";

    private: isFirstException: bool = true;

    private: timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(200000);

    public abeClientInformation: AbeClientInformationInterface;

private constructor (){

            super();
        }


    private: const stringBuffer: StringMaker = new StringMaker();

    /*actual*/ public putL(Log log){

                        if(log == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    specialMessage: string = log.getSpecialMessage()!;;
    

    anyType: any = log.getObject()!;;
    

    functionName: string = log.getFunctionName()!;;
    

    exception: any = log.getThrowable()!;;
    
this.put(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public putF(string specialMessage, any = {} anyType, string functionName){
}


    /*actual*/ public putF(string specialMessage, string className, string functionName){
}


    /*actual*/ public put(string specialMessage, any = {} anyType, string functionName, any = {} exception){

                        if(exception != 
                                    null
                                )
                        
                                    {
                                    
                        if(exception.constructor.name.toString()!.compareTo(XmlRpcException.constructor.toString()!) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(exception.constructor.name.toString()!.compareTo(IOException.constructor.toString()!) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this.isFirstException || this.timeDelayHelper!.isTimeTNT())
                        
                                    {
                                    
    className: string = CommonStrings.getInstance()!.EMPTY;;
    
this.isFirstException= false;
    

                        if(anyType != 
                                    null
                                 && anyType!.constructor.name.toString()! != 
                                    null
                                )
                        
                                    {
                                    className= anyType!.constructor.name.toString()!;
    

                                    }
                                

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    

        try {
            console.log("Eeeek");
    

                        if(this.abeClientInformation == 
                                    null
                                )
                        
                                    {
                                    


                            throw new RuntimeException();
                    

                                    }
                                

    hashtable: Hashtable<any, any> = this.abeClientInformation!.toHashtable()!;;
    
this.stringBuffer!.delete(0, this.stringBuffer!.length());
    
this.stringBuffer!.append(message);
    
this.stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
this.stringBuffer!.append(SpecialMessageUtil.getInstance()!.get());
    
hashtable.put(this.MESSAGE, this.stringBuffer!.toString());
    
new XmlRpcRemoteLogClient(this.abeClientInformation).get(hashtable);
    

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

            

