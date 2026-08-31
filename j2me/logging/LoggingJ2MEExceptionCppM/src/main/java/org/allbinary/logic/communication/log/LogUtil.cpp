
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
        
            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
#include "LogFactory.h"
#include "Log.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {
        

    private: static const instance: LogUtil = new LogUtil();

    /*actual*/ public static LogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil.instance;
    
}


    private: const logFormatUtil: LogFormatUtil = LogFormatUtil.getInstance()!;

    private: const LOG_SUCCESS: string = "org.allbinary: ";

private constructor (){

            super();
        }


    /*actual*/ public putL(Log log){

                        if(log == LogFactory.LOG)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    exception: any = log.getThrowable()!;;
    

                        if(exception == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    specialMessage: string = log.getSpecialMessage()!;;
    

    anyType: any = log.getObject()!;;
    

    functionName: string = log.getFunctionName()!;;
    
this.put(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public putF(string specialMessage, any = {} anyType, string functionName){
}


    /*actual*/ public putF(string specialMessage, string className, string functionName){
}


    /*actual*/ public put(string specialMessage, any = {} anyType, string functionName, any = {} exception){

    className: string = CommonStrings.getInstance()!.EMPTY;;
    

                        if(anyType!.constructor.name.toString()! != 
                                    null
                                )
                        
                                    {
                                    className= anyType!.constructor.name.toString()!;
    

                                    }
                                

    message: string = this.logFormatUtil!.get(className, functionName, specialMessage, exception)!;;
    
console.log(this.LOG_SUCCESS + message);
    
}


};

            

