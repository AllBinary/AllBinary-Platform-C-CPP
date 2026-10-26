
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ABRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoCanvas.h"

class DemoGameStartupRunnable: public ABRunnable {

    public: static const int32_t TYPE = 4;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: DemoCanvas demoCanvas;

public: DemoGameStartupRunnable(DemoCanvas demoCanvas){
this->demoCanvas= demoCanvas;
    
}


    public: void run(){

        try {
            this->setRunning(true);
    
this->demoCanvas.stopGameDemo();
    
this->demoCanvas.create();
    
this->demoCanvas.start();
    
this->setRunning(false);
    

                //: 
} catch(e) 
            {
this->setRunning(false);
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DemoGameStartupRunnable::TYPE;
    
}


};

            

