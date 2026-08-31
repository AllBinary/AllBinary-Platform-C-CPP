
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
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Log
            : public Object
         {
        

    private: const logFormatUtil: LogFormatUtil = LogFormatUtil.getInstance()!;

    private: const specialMessage: string;

    private: const anyType: any;

    private: const functionName: string;

    private: const exception: any;

public constructor (string specialMessage, any = {} anyType, string functionName, any = {} exception){

            super();
        this.specialMessage= specialMessage;
    
this.anyType= anyType;
    
this.functionName= functionName;
    
this.exception= exception;
    
}


    public string getSpecialMessage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.specialMessage;
    
}


    public any getObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.anyType;
    
}


    public string getFunctionName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.functionName;
    
}


    public any getThrowable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.exception;
    
}


    public string toString(){

    className: string = CommonStrings.getInstance()!.EMPTY;;
    

    clazz: Function = this.anyType!.constructor!;;
    

                        if(clazz.toString()! != 
                                    null
                                )
                        
                                    {
                                    className= clazz.toString()!;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.logFormatUtil!.get(className, this.functionName, this.specialMessage, this.exception);;
    
}


};

            

