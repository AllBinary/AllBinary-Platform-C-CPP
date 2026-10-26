
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/globals/Globals.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <org/allbinary/thread/ThreadPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryMidlet.h"
#include "MidletExitProcessorFactory.h"
#include "ExitRunnable.h"
//AndroidToJ2ME
class ProgressMidlet: public AllBinaryMidlet {

    public: AbeClientInformationInterface abeClientInformation;

public: ProgressMidlet(ClientInformationFactory clientInformationFactory){
Globals::getInstance().init(TsUtil::getInstance().getClassClassLoader(this), StringUtil::getInstance().EMPTY_STRING);
    
this->preInit();
    
this->abeClientInformation= clientInformationFactory.getInstance();
    
}


    public: void preInit(){
}


    protected: void exitProgress(bool isProgress){

    Processor processor = MidletExitProcessorFactory::getInstance().getExitInstance(this);;
    

        try {
            
    ThreadPool primaryThreadPool = PrimaryThreadPool::getInstance();;
    

    Runnable runnable = ExitRunnable(this, processor, isProgress);;
    
primaryThreadPool.runTask(runnable);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "exit", e);
    

        try {
            processor.process();
    

                //: 
} catch(e2) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "exit", e);
    
}

}

}


};

            

