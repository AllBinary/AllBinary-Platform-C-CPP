
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
        



            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <org/allbinary/thread/ThreadPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryMidlet.h"
#include "MidletExitProcessorFactory.h"
#include "ExitRunnable.h"
//J2MEForJ2ME
class ProgressMidlet: public AllBinaryMidlet {
        

    public const abeClientInformation: AbeClientInformationInterface;

public constructor (ClientInformationFactory clientInformationFactory){

            super();
        this.preInit();
    
this.abeClientInformation= clientInformationFactory!.getInstance();
    
}


    public preInit(){
}


    exitProgress(bool isProgress){

    processor: Processor = MidletExitProcessorFactory.getInstance()!.getExitInstance(this)!;;
    

        try {
            
    primaryThreadPool: ThreadPool = PrimaryThreadPool.getInstance()!;;
    

    runnable: Runnable = new ExitRunnable(this, processor, isProgress);;
    
primaryThreadPool!.runTask(runnable);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "exit", e);
    

        try {
            processor.process();
    

                //: 
} catch(e2) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "exit", e);
    
}

}

}


};

            

