
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
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WorkFlowInterface.h"

class WorkFlowWrapper
            : public Object
        : public WorkFlowInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: anyType: any;

public constructor (any = {} anyType){

            super();
        this.anyType= anyType;
    
}


    any getWorkFlowObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.anyType;
    
}


                //@Throws(Exception.constructor)
            
    public string getName(){

        try {
            
    helperClass: Function = this.anyType!.constructor!;;
    

    method: Method = helperClass!.getMethod("getName", 
                            nullptr)!;;
    

    result: string = method.invoke(this.anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getName()", e);
    

                                    }
                                



                            throw new Exception(error);
                    
}

}


                //@Throws(Exception.constructor)
            
    public string getStoreName(){

        try {
            
    helperClass: Function = this.anyType!.constructor!;;
    

    method: Method = helperClass!.getMethod("getStoreName", 
                            nullptr)!;;
    

    result: string = method.invoke(this.anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getStoreName()", e);
    

                                    }
                                



                            throw new Exception(error);
                    
}

}


                //@Throws(Exception.constructor)
            
    public Integer process(){

        try {
            
    helperClass: Function = this.anyType!.constructor!;;
    

    method: Method = helperClass!.getMethod(this.commonStrings!.PROCESS, 
                            nullptr)!;;
    

    result: Integer = method.invoke(this.anyType, 
                            nullptr) as Integer;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Reflection Exception";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.PROCESS, e);
    

                                    }
                                



                            throw new Exception(error);
                    
}

}


};

            

