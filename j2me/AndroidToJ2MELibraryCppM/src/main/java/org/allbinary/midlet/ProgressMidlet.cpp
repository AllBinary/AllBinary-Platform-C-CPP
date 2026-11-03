
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
        



        #ifndef ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_CPP
        #define ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/midlet/ProgressMidlet.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/midlet/AllBinaryMidlet.h"
#include "org/allbinary/midlet/MidletExitProcessorFactory.h"
#include "org/allbinary/midlet/ExitRunnable.h"
//AndroidToJ2ME

ProgressMidlet::ProgressMidlet(ClientInformationFactory* clientInformationFactory){
Globals::getInstance()->init(TsUtil::getInstance()->getClassClassLoader(this), StringUtil::getInstance()->EMPTY_STRING);
    
this->preInit();
    
this->abeClientInformation= clientInformationFactory->getInstance();
    
}


    auto ProgressMidlet::preInit() -> void{
}


    auto ProgressMidlet::exitProgress(bool isProgress) -> void{

    Processor* processor = MidletExitProcessorFactory::getInstance()->getExitInstance(this);;
    

        try {
            
    ThreadPool* primaryThreadPool = PrimaryThreadPool::getInstance();;
    

    Runnable* runnable = new ExitRunnable(this, processor, isProgress);;
    
primaryThreadPool->runTask(runnable);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "exit", &e);
    

        try {
            processor->process();
    

                //: 
} catch(Exception& e2) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "exit", &e);
    
}

}

}




        #endif //ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_CPP
