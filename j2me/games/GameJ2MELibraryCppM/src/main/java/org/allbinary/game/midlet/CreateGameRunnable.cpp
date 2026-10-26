
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
        #include "DemoGameMidlet.h"
#include "DemoGameMidletEvent.h"
#include "DemoGameMidletStateFactory.h"
#include "DemoGameMidletEventHandler.h"

class CreateGameRunnable
            : public Object
        : public Runnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: DemoGameMidlet demoGameMidlet;

    private: ABHashtable<Object*, Object*> hashtable;

    private: DemoGameMidletEvent startGameMidletEvent;

public: CreateGameRunnable(DemoGameMidlet demoGameMidlet, ABHashtable<Object*, Object*> hashtable){
this->demoGameMidlet= demoGameMidlet;
    
this->hashtable= hashtable;
    
this->startGameMidletEvent= DemoGameMidletEvent(this, DemoGameMidletStateFactory::getInstance().START_GAME);
    
}


    public: void run(){

        try {
            this->logUtil.putF(this->commonStrings.START_RUNNABLE, this, this->commonStrings.RUN);
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
this->demoGameMidlet.commandAction(MyCommandsFactory::getInstance().SET_DISPLAYABLE, progressCanvas);
    
this->demoGameMidlet.stopGameCanvasRunnableInterface();
    
this->demoGameMidlet.setGameCanvasRunnableInterface(this->demoGameMidlet.createGameCanvasRunnableInterface());
    
this->demoGameMidlet.getGameCanvasRunnableInterface().setLoadStateHashtable(this->hashtable);
    
this->demoGameMidlet.startGameCanvasRunnableInterface();
    
DemoGameMidletEventHandler::getInstance().fireEvent(this->startGameMidletEvent);
    
this->logUtil.putF(this->commonStrings.END_RUNNABLE, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


};

            

