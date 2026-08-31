
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
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogUtil.h"
#include "Log.h"

class LogBuffer
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    logEntryVector: Vector;

public constructor (){

            super();
        this.logEntryVector= new Vector();
    
}


    public add(Log log){
this.logEntryVector!.add(log);
    
}


    public logAll(){

    size: int32_t = this.logEntryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    log: Log = this.logEntryVector!.get(index) as Log;;
    
this.logUtil!.putL(log);
    
}

}


};

            

