
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
        
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <playn/core/PlayN.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
//ActualPlatform
/*actual*/ class PreLogUtil
            : public Object
         {
        

    /*actual*/ public static put(string specialMessage, any = {} anyType, string functionName){

    className: string = PreLogUtil.getClassName(anyType)!;;
    

                        if(className == 
                                    null
                                )
                        
                                    {
                                    className= CommonStrings.getInstance()!.EMPTY;
    

                                    }
                                
className= new StringMaker().append(className)!.append(CommonSeps.getInstance()!.FORWARD_SLASH)!.append(StringUtil.getInstance()!.toString(anyType))!.toString();
    

    message: string = LogFormatUtil.getInstance()!.getS(className, functionName, specialMessage)!;;
    
PlayN.getInstance()!.log()!.debug(PreLogUtil.LOG_SUCCESS +message);
    
}


    private: static const LOG_SUCCESS: string = "org.allbinary: ";

    /*actual*/ public static putOE(string specialMessage, any = {} anyType, string functionName, any = {} exception){

    className: string = PreLogUtil.getClassName(anyType)!;;
    

                        if(className == 
                                    null
                                )
                        
                                    {
                                    className= CommonStrings.getInstance()!.EMPTY;
    

                                    }
                                
className= new StringMaker().append(className)!.append(CommonSeps.getInstance()!.FORWARD_SLASH)!.append(StringUtil.getInstance()!.toString(anyType))!.toString();
    

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    
PlayN.getInstance()!.log()!.error(PreLogUtil.LOG_SUCCESS +message, exception as Throwable);
    
}


    /*actual*/ public static putS(string specialMessage, string className, string functionName){

    message: string = LogFormatUtil.getInstance()!.getS(className, functionName, specialMessage)!;;
    
PlayN.getInstance()!.log()!.debug(PreLogUtil.LOG_SUCCESS +message);
    
}


    /*actual*/ public static putSE(string specialMessage, string className, string functionName, any = {} exception){

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    
PlayN.getInstance()!.log()!.error(PreLogUtil.LOG_SUCCESS +message, exception as Throwable);
    
}


    /*actual*/ public static string getClassName(any = {} anyType)
                //native - START
                {
                    
                }



                //native - END
                

public constructor (){

            super();
        }


};

            

