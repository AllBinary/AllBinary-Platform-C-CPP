
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/canvas/RunnableCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameRunnable.h"

class RunnableCanvasSingleThreadStartRunnable: public GameRunnable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const runnableCanvas: RunnableCanvas;

public constructor (RunnableCanvas demoCanvas){

            super();
        this.runnableCanvas= demoCanvas;
    
}


    public run(){

        try {
            this.runnableCanvas!.run();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public processLoopSleep(){
this.runnableCanvas!.processLoopSleep();
    
}


};

            

