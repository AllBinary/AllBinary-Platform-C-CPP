
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
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/logging/Level.h>

      
#include <java/util/logging/Logger.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
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


    private: const logger: Logger = Logger.getLogger(LogUtil.constructor.toString()!)!;

    private: const logFormatUtil: LogFormatUtil = LogFormatUtil.getInstance()!;

private constructor (){

            super();
        }


    /*actual*/ public putL(Log log){

    specialMessage: string = log.getSpecialMessage()!;;
    

    anyType: any = log.getObject()!;;
    

    functionName: string = log.getFunctionName()!;;
    

    exception: any = log.getThrowable()!;;
    
this.put(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public putF(string specialMessage, any = {} anyType, string functionName){
this.put(specialMessage, anyType, functionName, NullUtil.getInstance()!.NULL_OBJECT);
    
}


    /*actual*/ public putFS(string specialMessage, string className, string functionName){
this.putS(specialMessage, className, functionName, NullUtil.getInstance()!.NULL_OBJECT);
    
}


    /*actual*/ public put(string specialMessage, any = {} anyType, string functionName, any = {} exception){

        try {
            
    className: string = CommonStrings.getInstance()!.EMPTY;;
    

    clazz: Function = anyType!.constructor!;;
    

                        if(clazz.toString()! != 
                                    null
                                )
                        
                                    {
                                    className= clazz.toString()!;
    

                                    }
                                

    message: string = this.logFormatUtil!.getS(className, functionName, specialMessage)!;;
    

                        if(exception != 
                                    null
                                )
                        
                                    {
                                    this.logger.log(Level.SEVERE, message, exception);
    

                                    }
                                
                        else {
                            this.logger.log(Level.INFO, message);
    

                        }
                            

                //: 
} catch(e) 
            {
}

}


    /*actual*/ public putS(string specialMessage, string className, string functionName, any = {} exception){

        try {
            
    message: string = this.logFormatUtil!.getS(className, functionName, specialMessage)!;;
    

                        if(exception != 
                                    null
                                )
                        
                                    {
                                    this.logger.log(Level.SEVERE, message, exception);
    

                                    }
                                
                        else {
                            this.logger.log(Level.INFO, message);
    

                        }
                            

                //: 
} catch(e) 
            {
}

}


};

            

