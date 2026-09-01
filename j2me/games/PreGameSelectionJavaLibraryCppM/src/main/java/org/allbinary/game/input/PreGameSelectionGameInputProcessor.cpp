
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/PreGameSelectorPaintable.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/thread/ABRunnable.h>

      
#include <org/allbinary/thread/ThreadObjectUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInputProcessorInterface.h"
#include "PlayerGameInputCompositeInterface.h"
#include "PlayerGameInput.h"
#include "GameInputProcessorComposite.h"

class PreGameSelectionGameInputProcessor: public Processor, public GameInputProcessorInterface, public PlayerGameInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AllBinaryGameCanvas gameCanvas;

    private: PreGameSelectorPaintable preGameSelectorPaintable;

    private: const TimeDelayHelper inputTimeHelper = TimeDelayHelper(650);

    private: GameState nextGameState;

    private: PlayerGameInput playerGameInput;

    private: int32_t lockedIndex;

    private: const ABRunnable abRunnable = class extends ABRunnable
                                {
                                
    public: void run(){

        try {
            this->setRunning(true);
    
SecondaryPlayerQueueFactory::getInstance().add(SelectSound::getInstance());
    
gameCanvas.setGameState(nextGameState);
    
GameKeyEventHandler::getInstance().removeListener(getPlayerGameInput());
    
this->setRunning(false);
    

                //: 
} catch(e) 
            {
this->setRunning(false);
    

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}

                                }
                            ;

public: PreGameSelectionGameInputProcessor(AllBinaryGameCanvas gameCanvas, PreGameSelectorPaintable preGameSelectorPaintable, GameState nextGameState, int32_t lockedIndex){
this->gameCanvas= gameCanvas;
    
this->preGameSelectorPaintable= preGameSelectorPaintable;
    
this->nextGameState= nextGameState;
    
this->playerGameInput= GameInputProcessorComposite("Pre Game Selection", this);
    
this->lockedIndex= lockedIndex;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->getPlayerGameInput().update();
    
}


                //@Throws(Exception.constructor)
            
    public: void onInput(BasicArrayList list){

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = list.get(index);;
    

    int32_t key = GameKeyEventUtil::getKey(anyType);;
    

                        if(key == Canvas::LEFT || key == Canvas::RIGHT || key == Canvas::UP || key == Canvas::DOWN)
                        
                                    {
                                    
                        if(this->inputTimeHelper.isTimeTNT())
                        
                                    {
                                    SecondaryPlayerQueueFactory::getInstance().add(SelectSound::getInstance());
    
this->getPreGameSelectorPaintable().getPreGameSelectionForm().processInputKey(key);
    
break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(key == Canvas::KEY_NUM0)
                        
                                    {
                                    
    int32_t selectedIndex = this->preGameSelectorPaintable.getPreGameSelectionForm().getSelectedIndex();;
    

                        if(selectedIndex < this->lockedIndex || !LockedUtil::getInstance().isLocked())
                        
                                    {
                                    
                        if(!abRunnable.isRunning())
                        
                                    {
                                    abRunnable.setRunning(true);
    
ThreadObjectUtil::getInstance().processThread(abRunnable);
    

                                    }
                                
break;

                    

                                    }
                                
                        else {
                            LockedFeatureNotificationUtil::getInstance().fire();
    

                        }
                            

                                    }
                                
}

list.clear();
    
}


    public: PreGameSelectorPaintable getPreGameSelectorPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->preGameSelectorPaintable;
    
}


                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager layerManager){
}


    public: void initInputProcessors(){
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->toString();;
    
}


    public: PlayerGameInput getPlayerGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playerGameInput;
    
}


};

            

