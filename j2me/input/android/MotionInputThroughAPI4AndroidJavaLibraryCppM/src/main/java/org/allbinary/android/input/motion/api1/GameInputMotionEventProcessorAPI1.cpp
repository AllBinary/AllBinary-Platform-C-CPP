
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>

      
#include <org/allbinary/input/motion/AllMotionRecognizer.h>

      
#include <org/allbinary/input/motion/MotionRecognizer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputMotionEventProcessorAPI1: public BaseGameInputMotionEventProcessor {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameInputMotionEventProcessorAPI1 getInstance(){

                        if(GameInputMotionEventProcessorAPI1.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    GameInputMotionEventProcessorAPI1.instance= new GameInputMotionEventProcessorAPI1();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInputMotionEventProcessorAPI1.instance as GameInputMotionEventProcessorAPI1;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const motionRecognizer: MotionRecognizer = new AllMotionRecognizer();

private constructor (){

            super();
        }


    public process(MotionEvent motionEvent){

        try {
            
    x: int32_t = static_cast<int32_t>(motionEvent!.getX());;
    

    y: int32_t = static_cast<int32_t>(motionEvent!.getY());;
    

    action: int32_t = motionEvent!.getAction()!;;
    

                        if(action == MotionEvent.ACTION_DOWN)
                        
                                    {
                                    this.motionRecognizer!.processStartMotionEvent(x, y, motionEvent!.getDeviceId(), 0);
    

                                    }
                                
                             else 
                        if(action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL)
                        
                                    {
                                    this.motionRecognizer!.processEndMotionEvent(x, y, motionEvent!.getDeviceId(), 0);
    

                                    }
                                
                             else 
                        if(action == MotionEvent.ACTION_MOVE)
                        
                                    {
                                    this.motionRecognizer!.processDraggedMotionEvent(x, y, motionEvent!.getDeviceId(), 0);
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.PROCESS, e);
    
}

}


};

            

