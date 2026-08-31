
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
        



            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/android/input/motion/AnalogLocationInputProcessor.h>

      
#include <org/allbinary/game/input/GameInputProcessor.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/analog/AnalogLocationInput.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DirectionalAnalogLocationInputProcessor: public AnalogLocationInputProcessor: public GameKeyEventSourceInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const inputProcessorArray: std::vector<GameInputProcessor>;

    private: const gameKeyFactory: GameKeyFactory = GameKeyFactory.getInstance()!;

    private: leftGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: rightGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: upGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: downGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: leftTriggerGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: rightTriggerGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

public constructor (std::vector<GameInputProcessor> inputProcessorArray){

            super();
        this.inputProcessorArray= inputProcessorArray;
    

        try {
            this.leftGameKeyEvent= GameKeyEventFactory.getInstance()!.getInstanceForInput(this, this.gameKeyFactory!.LEFT);
    
this.rightGameKeyEvent= GameKeyEventFactory.getInstance()!.getInstanceForInput(this, this.gameKeyFactory!.RIGHT);
    
this.upGameKeyEvent= GameKeyEventFactory.getInstance()!.getInstanceForInput(this, this.gameKeyFactory!.UP);
    
this.downGameKeyEvent= GameKeyEventFactory.getInstance()!.getInstanceForInput(this, this.gameKeyFactory!.DOWN);
    
this.leftTriggerGameKeyEvent= GameKeyEventFactory.getInstance()!.getInstanceForInput(this, this.gameKeyFactory!.KEY_NUM0);
    
this.rightTriggerGameKeyEvent= GameKeyEventFactory.getInstance()!.getInstanceForInput(this, this.gameKeyFactory!.KEY_NUM5);
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.CONSTRUCTOR, e);
    
}

}


    public process(AllBinaryLayerManager allbinaryLayerManager, AnalogLocationInput analogLocationInput){

        try {
            
    customGPoint: CustomGPoint;;
    
customGPoint= analogLocationInput!.getCustomGPoint();
    

    x: int32_t = customGPoint!.getX()!;;
    

    y: int32_t = customGPoint!.getY()!;;
    

    leftTrigger: int32_t = analogLocationInput!.getLeftTrigger()!;;
    

    rightTrigger: int32_t = analogLocationInput!.getRightTrigger()!;;
    

                        if(x < 0)
                        
                                    {
                                    this.inputProcessorArray[this.leftGameKeyEvent!.getKey()]!.processAnalog(allbinaryLayerManager, this.leftGameKeyEvent, x);
    

                                    }
                                
                             else 
                        if(x > 0)
                        
                                    {
                                    this.inputProcessorArray[this.rightGameKeyEvent!.getKey()]!.processAnalog(allbinaryLayerManager, this.rightGameKeyEvent, x);
    

                                    }
                                

                        if(y < 0)
                        
                                    {
                                    this.inputProcessorArray[this.downGameKeyEvent!.getKey()]!.processAnalog(allbinaryLayerManager, this.downGameKeyEvent, y);
    

                                    }
                                
                             else 
                        if(y > 0)
                        
                                    {
                                    this.inputProcessorArray[this.upGameKeyEvent!.getKey()]!.processAnalog(allbinaryLayerManager, this.upGameKeyEvent, y);
    

                                    }
                                

                        if(leftTrigger > 0)
                        
                                    {
                                    this.inputProcessorArray[this.leftTriggerGameKeyEvent!.getKey()]!.processAnalog(allbinaryLayerManager, this.leftTriggerGameKeyEvent, leftTrigger);
    

                                    }
                                

                        if(rightTrigger > 0)
                        
                                    {
                                    this.inputProcessorArray[this.rightTriggerGameKeyEvent!.getKey()]!.processAnalog(allbinaryLayerManager, this.rightTriggerGameKeyEvent, rightTrigger);
    

                                    }
                                

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put("Unable to process analog input", this, commonStrings!.PROCESS, e);
    
}

}


    public int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


};

            

