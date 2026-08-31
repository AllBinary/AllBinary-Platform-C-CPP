
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
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
#include "Log.h"
//ActualPlatform
/*actual*/ class LogUtil
            : public Object
         {
        

            static const char* PUBLIC = "%{public}s";
            

    private: static const instance: LogUtil = new LogUtil();

    /*actual*/ public static LogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil.instance;
    
}


    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const logFormatUtil: LogFormatUtil = LogFormatUtil.getInstance()!;

    private: const LABEL: string = "org.allbinary";

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


    public putFS(string specialMessage, string string, string functionName){
this.putS(specialMessage, string, functionName, NullUtil.getInstance()!.NULL_OBJECT);
    
}


    /*actual*/ public put(string specialMessage, any = {} anyType, string functionName, any = {} exception){

    className: string = this.LABEL;;
    
className= new StringMaker().append(anyType!.constructor.name.toString()!)!.append(this.commonSeps!.COLON)!.append(Integer.toHexString(TsUtil.getInstance()!.hashCode(anyType)))!.toString();
    

    message: string = this.logFormatUtil!.get(className, functionName, specialMessage, exception)!;;
    
hilog.info(0x0000, className, LogUtil.PUBLIC, message);
    
}


    /*actual*/ public putS(string specialMessage, string string, string functionName, any = {} exception){

    className: string = this.LABEL;;
    
className= new StringMaker().append(string)!.append(this.commonSeps!.COLON)!.append(Integer.toHexString(TsUtil.getInstance()!.hashCode(string)))!.toString();
    

    message: string = this.logFormatUtil!.get(className, functionName, specialMessage, exception)!;;
    
hilog.info(0x0000, className, LogUtil.PUBLIC, message);
    
}


};

            

