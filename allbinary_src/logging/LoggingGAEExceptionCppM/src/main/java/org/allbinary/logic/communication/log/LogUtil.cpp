
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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <java/util/logging/Logger.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
#include "PreLogUtil.h"
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


    /*actual*/ public init(){
PreLogUtil.put("Loggin Initialized", this, "init()");
    
}


    /*actual*/ public putL(Log log){

    exception: any = log.getThrowable()!;;
    

        try {
            
                        if(exception != 
                                    null
                                )
                        
                                    {
                                    
    specialMessage: string = log.getSpecialMessage()!;;
    

    anyType: any = log.getObject()!;;
    

    functionName: string = log.getFunctionName()!;;
    

    className: string = CommonStrings.getInstance()!.EMPTY;;
    

    clazz: Function = anyType!.constructor!;;
    

                        if(clazz.toString()! != 
                                    null
                                )
                        
                                    {
                                    className= clazz.toString()!;
    

                                    }
                                

    message: string = this.logFormatUtil!.get(className, functionName, specialMessage, exception)!;;
    
this.logger.log(Level.INFO, message);
    

                                    }
                                

                //: 
} catch(e) 
            {
}

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


};

            

