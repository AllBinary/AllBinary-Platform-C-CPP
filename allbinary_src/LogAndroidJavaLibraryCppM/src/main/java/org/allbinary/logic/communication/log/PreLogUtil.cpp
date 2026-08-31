
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
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"
//ActualPlatform
/*actual*/ class PreLogUtil
            : public Object
         {
        

            static const char* PUBLIC = "%{public}s";
            

    /*actual*/ public static put(string specialMessage, any = {} anyType, string functionName){
PreLogUtil.putOE(specialMessage, anyType, functionName, NullUtil.getInstance()!.NULL_OBJECT);
    
}


    private: static const LABEL: string = "org.allbinary";

    /*actual*/ public static putOE(string specialMessage, any = {} anyType, string functionName, any = {} exception){

    className: string = PreLogUtil.LABEL;;
    

    actualClassName: string = anyType!.constructor.name.toString()!!;;
    

                        if(actualClassName != 
                                    null
                                )
                        
                                    {
                                    className= actualClassName;
    

                                    }
                                

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    
hilog.info(0x0000, className, PreLogUtil.PUBLIC, message);
    
}


    /*actual*/ public static putS(string specialMessage, string className, string functionName){
PreLogUtil.putSE(specialMessage, className, functionName, NullUtil.getInstance()!.NULL_OBJECT);
    
}


    /*actual*/ public static putSE(string specialMessage, string className, string functionName, any = {} exception){

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    
hilog.info(0x0000, className, PreLogUtil.PUBLIC, message);
    
}


public constructor (){

            super();
        }


};

            

