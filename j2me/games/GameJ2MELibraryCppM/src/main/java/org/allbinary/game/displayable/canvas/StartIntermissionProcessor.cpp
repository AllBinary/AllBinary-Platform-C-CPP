
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
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class StartIntermissionProcessor: public Processor {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: AllBinaryGameCanvas gameCanvas;

    private: const int64_t WAIT = 5000;

public: StartIntermissionProcessor(AllBinaryGameCanvas gameCanvas){
this->gameCanvas= gameCanvas;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){

                        if(this->gameCanvas.getStartIntermissionInterface().getTimeDelayHelper().isElapsedTNT(this->WAIT))
                        
                                    {
                                    this->logUtil.putF("Intermission End", this, this->commonStrings.PROCESS);
    
this->gameCanvas.getStartIntermissionInterface().setEnabled(false);
    

                                    }
                                
}


};

            

