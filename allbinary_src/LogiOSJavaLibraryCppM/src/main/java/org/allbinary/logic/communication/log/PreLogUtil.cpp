
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
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
//ActualPlatform
/*actual*/ class PreLogUtil
            : public Object
         {
        

    /*actual*/ public static put(string specialMessage, any = {} anyType, string functionName){
PreLogUtil.putOE(specialMessage, anyType, functionName, NullUtil.getInstance()!.NULL_OBJECT);
    
}


    private: static const LOG_SUCCESS: string = "org.allbinary: ";

    /*actual*/ public static putOE(string specialMessage, any = {} anyType, string functionName, any = {} exception){

    className: string = CommonStrings.getInstance()!.EMPTY;;
    

                        if(anyType!.constructor.name.toString()! != 
                                    null
                                )
                        
                                    {
                                    className= anyType!.constructor.name.toString()!;
    

                                    }
                                

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    
console.log(LOG_SUCCESS + message);
    
}


    /*actual*/ public static putSE(string specialMessage, string className, string functionName, any = {} exception){

    message: string = LogFormatUtil.getInstance()!.get(className, functionName, specialMessage, exception)!;;
    
console.log(LOG_SUCCESS + message);
    
}


public constructor (){

            super();
        }


};

            

