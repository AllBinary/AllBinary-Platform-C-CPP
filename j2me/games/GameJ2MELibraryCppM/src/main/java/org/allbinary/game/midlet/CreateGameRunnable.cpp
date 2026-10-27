
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_CREATEGAMERUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_CREATEGAMERUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/CreateGameRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/DemoGameMidlet.h"
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
#include "org/allbinary/game/midlet/DemoGameMidletEventHandler.h"


CreateGameRunnable::CreateGameRunnable(DemoGameMidlet* demoGameMidlet, ABHashtable<Object*, Object*>* hashtable) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->demoGameMidlet= demoGameMidlet;
    
this->hashtable= hashtable;
    
this->startGameMidletEvent= new DemoGameMidletEvent(this, DemoGameMidletStateFactory::getInstance()->START_GAME);
    
}


    auto CreateGameRunnable::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
this->demoGameMidlet->commandAction(MyCommandsFactory::getInstance()->SET_DISPLAYABLE, progressCanvas);
    
this->demoGameMidlet->stopGameCanvasRunnableInterface();
    
this->demoGameMidlet->setGameCanvasRunnableInterface(this->demoGameMidlet->createGameCanvasRunnableInterface());
    
this->demoGameMidlet->getGameCanvasRunnableInterface()->setLoadStateHashtable(this->hashtable);
    
this->demoGameMidlet->startGameCanvasRunnableInterface();
    
DemoGameMidletEventHandler::getInstance()->fireEvent(this->startGameMidletEvent);
    
this->logUtil->putF(this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_MIDLET_CREATEGAMERUNNABLE_CPP
