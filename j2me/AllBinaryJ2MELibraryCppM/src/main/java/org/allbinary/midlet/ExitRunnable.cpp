
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
        



        #ifndef ORG_ALLBINARY_MIDLET_EXITRUNNABLE_CPP
        #define ORG_ALLBINARY_MIDLET_EXITRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/midlet/ExitRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/midlet/AllBinaryMidlet.h"


ExitRunnable::ExitRunnable(AllBinaryMidlet* midlet, Processor* processor, bool isProgress) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->midlet= midlet;
    
this->isProgress= isProgress;
    
this->processor= processor;
    
}


    auto ExitRunnable::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
    
this->midlet->destroyAppInRunnable(false, this->isProgress);
    
this->midlet->setDisplay(NullCanvas::NULL_CANVAS);
    
this->midlet->notifyDestroyed();
    
this->logUtil->putF(this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
    
this->processor->process();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    

        try {
            this->processor->process();
    

                //: 
} catch(Exception& e2) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
    
}

}

}




        #endif //ORG_ALLBINARY_MIDLET_EXITRUNNABLE_CPP
