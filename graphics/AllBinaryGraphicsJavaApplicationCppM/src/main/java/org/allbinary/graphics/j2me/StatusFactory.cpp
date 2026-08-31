
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MyFrame.h"

class StatusFactory
            : public Object
         {
        

    private: static const instance: StatusFactory = new StatusFactory();

    public static StatusFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StatusFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const SETSTATUS: string = "setStatus";

    private: const STATUS_LABEL: string = "Status: ";

    public setStatusNoLog(string status){
MyFrame.statusJLabel!.setText(status);
    
}


    public setStatus(string status){
this.setStatusNoLog(status);
    
this.logUtil!.putF(this.STATUS_LABEL +status, this, this.SETSTATUS);
    
}


};

            

