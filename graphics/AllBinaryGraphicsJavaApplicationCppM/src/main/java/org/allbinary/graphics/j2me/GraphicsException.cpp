
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/GuiLog.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GraphicsException: public java.lang.Exception {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const guiLog: GuiLog = GuiLog.getInstance()!;

public constructor (string msg, any = {} obj, string method){
            super(msg);
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            this.guiLog!.showDialog(msg);
    
this.logUtil!.put(msg, obj, method, this);
    

                //: 
} catch(e) 
            {
}

}


public constructor (string msg, string className, string method){
            super(msg);
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            this.guiLog!.showDialog(msg);
    
this.logUtil!.put(msg, className, method, this);
    

                //: 
} catch(e) 
            {
}

}


};

            

