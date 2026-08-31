
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
        
            #include "../../../../../java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"

class LogUtil
            : public Object
         {
        

    private: static const instance: LogUtil = new LogUtil();

    public static LogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil.instance;
    
}


private constructor (){

            super();
        }


    public putL(Log log){

    specialMessage: string = log.getSpecialMessage()!;;
    

    anyType: any = log.getObject()!;;
    

    functionName: string = log.getFunctionName()!;;
    

    exception: any = log.getThrowable()!;;
    



                            throw new RuntimeException();
                    
}


    public putF(string specialMessage, any = {} anyType, string functionName){



                            throw new RuntimeException();
                    
}


    public putF(string specialMessage, string className, string functionName){



                            throw new RuntimeException();
                    
}


    public put(string specialMessage, any = {} anyType, string functionName, any = {} exception){



                            throw new RuntimeException();
                    
}


};

            

