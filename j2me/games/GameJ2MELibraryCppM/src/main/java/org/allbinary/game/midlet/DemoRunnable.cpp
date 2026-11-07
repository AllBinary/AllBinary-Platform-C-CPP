
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMORUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_DEMORUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/DemoRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
#include "org/allbinary/game/midlet/DemoGameMidletEventHandler.h"


DemoRunnable::DemoRunnable(DemoGameMidlet* demoGameMidlet) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->demoGameMidlet= demoGameMidlet;
    
this->startDemoGameMidletEvent= new DemoGameMidletEvent(this->demoGameMidlet, DemoGameMidletStateFactory::getInstance()->START_DEMO);
    
}


    auto DemoRunnable::run() -> void{

        try {
            this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append("GameCanvasRunnableInterface")), this, this->commonStrings->RUN);
    
this->demoGameMidlet->commandAction(MyCommandsFactory::getInstance()->SET_DISPLAYABLE, ProgressCanvasFactory::getInstance());
    
this->demoGameMidlet->setGameCanvasRunnableInterface(this->demoGameMidlet->createDemoGameCanvasRunnableInterface());
    
this->demoGameMidlet->demoSetup();
    
DemoGameMidletEventHandler::getInstance()->fireEvent(this->startDemoGameMidletEvent);
    
this->demoGameMidlet->startGameCanvasRunnableInterface();
    
this->demoGameMidlet->postDemoSetup();
    
this->logUtil->putF(this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMORUNNABLE_CPP
