
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

class PreGameSelectionGameInputProcessor: public Processor: public GameInputProcessorInterface, public PlayerGameInputCompositeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const gameCanvas: AllBinaryGameCanvas;

    private: const preGameSelectorPaintable: PreGameSelectorPaintable;

    private: const inputTimeHelper: TimeDelayHelper = new TimeDelayHelper(650);

    private: const nextGameState: GameState;

    private: const playerGameInput: PlayerGameInput;

    private: const lockedIndex: int32_t;

    private: const abRunnable: ABRunnable = new class extends ABRunnable
                                {
                                
    public run(){

        try {
            this.setRunning(true);
    
SecondaryPlayerQueueFactory.getInstance()!.add(SelectSound.getInstance());
    
gameCanvas!.setGameState(nextGameState);
    
GameKeyEventHandler.getInstance()!.removeListener(getPlayerGameInput());
    
this.setRunning(false);
    

                //: 
} catch(e) 
            {
this.setRunning(false);
    

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}

                                }
                            ;

public constructor (AllBinaryGameCanvas gameCanvas, PreGameSelectorPaintable preGameSelectorPaintable, GameState nextGameState, int32_t lockedIndex){

            super();
        this.gameCanvas= gameCanvas;
    
this.preGameSelectorPaintable= preGameSelectorPaintable;
    
this.nextGameState= nextGameState;
    
this.playerGameInput= new GameInputProcessorComposite("Pre Game Selection", this);
    
this.lockedIndex= lockedIndex;
    
}


                //@Throws(Exception.constructor)
            
    public process(){
this.getPlayerGameInput()!.update();
    
}


                //@Throws(Exception.constructor)
            
    public onInput(BasicArrayList list){

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    anyType: any = list.get(index)!;;
    

    key: int32_t = GameKeyEventUtil.getKey(anyType)!;;
    

                        if(key == Canvas.LEFT || key == Canvas.RIGHT || key == Canvas.UP || key == Canvas.DOWN)
                        
                                    {
                                    
                        if(this.inputTimeHelper!.isTimeTNT())
                        
                                    {
                                    SecondaryPlayerQueueFactory.getInstance()!.add(SelectSound.getInstance());
    
this.getPreGameSelectorPaintable()!.getPreGameSelectionForm()!.processInputKey(key);
    
break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(key == Canvas.KEY_NUM0)
                        
                                    {
                                    
    selectedIndex: int32_t = this.preGameSelectorPaintable!.getPreGameSelectionForm()!.getSelectedIndex()!;;
    

                        if(selectedIndex < this.lockedIndex || !LockedUtil.getInstance()!.isLocked())
                        
                                    {
                                    
                        if(!abRunnable!.isRunning())
                        
                                    {
                                    abRunnable!.setRunning(true);
    
ThreadObjectUtil.getInstance()!.processThread(abRunnable);
    

                                    }
                                
break;

                    

                                    }
                                
                        else {
                            LockedFeatureNotificationUtil.getInstance()!.fire();
    

                        }
                            

                                    }
                                
}

list.clear();
    
}


    public PreGameSelectorPaintable getPreGameSelectorPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.preGameSelectorPaintable;
    
}


                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager){
}


    public initInputProcessors(){
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.toString();;
    
}


    public PlayerGameInput getPlayerGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.playerGameInput;
    
}


};

            

