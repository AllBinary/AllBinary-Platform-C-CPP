
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

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/ScalableListener.h>

      
#include <org/allbinary/input/motion/AllMotionRecognizer.h>

      
#include <org/allbinary/input/motion/MotionRecognizer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInputMotionInfoAPI5.h"

class GameInputMotionEventProcessorAPI5: public BaseGameInputMotionEventProcessor {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameInputMotionEventProcessorAPI5 getInstance(){

                        if(GameInputMotionEventProcessorAPI5.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    GameInputMotionEventProcessorAPI5.instance= new GameInputMotionEventProcessorAPI5();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInputMotionEventProcessorAPI5.instance as GameInputMotionEventProcessorAPI5;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const motionRecognizerArray: std::vector<MotionRecognizer>;

    private: const TOTAL_MINUS_ONE: int32_t;

private constructor (){

            super();
        
    size: int32_t = GameInputMotionInfoAPI5.getInstance()!.MAX_POINTERS;;
    
this.motionRecognizerArray= new Array(size);
    
this.TOTAL_MINUS_ONE= size;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.motionRecognizerArray[index]= new AllMotionRecognizer();
    
}

}


    bool isValid(int32_t pointerId){

                        if(pointerId > this.TOTAL_MINUS_ONE)
                        
                                    {
                                    
    message: string = "Log that the pointer Ids are not what would be expected or Android has more than what I set my stuff to support pointerId: ";;
    
ForcedLogUtil.log(message +pointerId, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public process(MotionEvent motionEvent){

        try {
            
    action: int32_t = motionEvent!.getAction()!;;
    

    total: int32_t = this.motionRecognizerArray!.length
                ;;
    

                        if(total > motionEvent!.getPointerCount())
                        
                                    {
                                    total= motionEvent!.getPointerCount();
    

                                    }
                                
                        else {
                            
    message: string = "Log that Android has more pointers than I have expected so increase it motionEvent.getPointerCount(): ";;
    
ForcedLogUtil.log(message +motionEvent!.getPointerCount(), this);
    

                        }
                            

    totalMinusOne: int32_t = total -1;;
    

                        if(action == MotionEvent.ACTION_DOWN)
                        
                                    {
                                    



                        for (
    pointerIndex: int32_t = totalMinusOne;pointerIndex >= 0; pointerIndex--)
        {

    pointerId: int32_t = motionEvent!.getPointerId(pointerIndex)!;;
    

                        if(this.isValid(pointerId))
                        
                                    {
                                    
    scalableListener: ScalableListener = this.displayInfo!.getScalableListener()!;;
    

    x: int32_t = static_cast<int32_t>(((motionEvent!.getX(pointerIndex) -this.displayInfo!.getLeft()) /scalableListener!.getRatio(this.displayInfo!.getRatio())));;
    

    y: int32_t = static_cast<int32_t>(((motionEvent!.getY(pointerIndex) -this.displayInfo!.getTop()) /scalableListener!.getRatio(this.displayInfo!.getRatio())));;
    
this.motionRecognizerArray[pointerId]!.processStartMotionEvent(x, y, motionEvent!.getDeviceId(), 0);
    

                                    }
                                
}


                                    }
                                
                             else 
                        if(action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL)
                        
                                    {
                                    



                        for (
    pointerIndex: int32_t = totalMinusOne;pointerIndex >= 0; pointerIndex--)
        {

    pointerId: int32_t = motionEvent!.getPointerId(pointerIndex)!;;
    

                        if(this.isValid(pointerId))
                        
                                    {
                                    
    scalableListener: ScalableListener = this.displayInfo!.getScalableListener()!;;
    

    x: int32_t = static_cast<int32_t>(((motionEvent!.getX(pointerIndex) -this.displayInfo!.getLeft()) /scalableListener!.getRatio(this.displayInfo!.getRatio())));;
    

    y: int32_t = static_cast<int32_t>(((motionEvent!.getY(pointerIndex) -this.displayInfo!.getTop()) /scalableListener!.getRatio(this.displayInfo!.getRatio())));;
    
this.motionRecognizerArray[pointerId]!.processEndMotionEvent(x, y, motionEvent!.getDeviceId(), 0);
    

                                    }
                                
}


                                    }
                                
                             else 
                        if(action == MotionEvent.ACTION_MOVE)
                        
                                    {
                                    



                        for (
    pointerIndex: int32_t = totalMinusOne;pointerIndex >= 0; pointerIndex--)
        {

    pointerId: int32_t = motionEvent!.getPointerId(pointerIndex)!;;
    

                        if(this.isValid(pointerId))
                        
                                    {
                                    
    scalableListener: ScalableListener = this.displayInfo!.getScalableListener()!;;
    

    x: int32_t = static_cast<int32_t>(((motionEvent!.getX(pointerIndex) -this.displayInfo!.getLeft()) /scalableListener!.getRatio(this.displayInfo!.getRatio())));;
    

    y: int32_t = static_cast<int32_t>(((motionEvent!.getY(pointerIndex) -this.displayInfo!.getTop()) /scalableListener!.getRatio(this.displayInfo!.getRatio())));;
    
this.motionRecognizerArray[pointerId]!.processDraggedMotionEvent(x, y, motionEvent!.getDeviceId(), 0);
    

                                    }
                                
}


                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.PROCESS, e);
    
}

}


};

            

