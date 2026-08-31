
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>

      
#include <org/allbinary/input/motion/touch/action/DiagonalDownLeftTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/DiagonalDownRightTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/DiagonalUpLeftTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/DiagonalUpRightTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/DownTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/LeftTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/ReleaseTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/RightTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/UpTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CompleteMotionGestureInputToGameMotionGestureInput
            : public Object
         {
        

    private: static const instance: CompleteMotionGestureInputToGameMotionGestureInput = new CompleteMotionGestureInputToGameMotionGestureInput();

    public static CompleteMotionGestureInputToGameMotionGestureInput getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CompleteMotionGestureInputToGameMotionGestureInput.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public init(){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            PreLogUtil.put("Compound Motion Gestures", this, commonStrings!.INIT);
    

    motionGestureConfiguration: MotionGestureConfiguration = MotionGestureConfigurationFactory.getInstance()!;;
    

    touchMotionGestureFactory: TouchMotionGestureFactory = TouchMotionGestureFactory.getInstance()!;;
    

    list: BasicArrayList = new BasicArrayListD();;
    
list.add(touchMotionGestureFactory!.DIAGONAL_DOWN_LEFT);
    
motionGestureConfiguration!.addMotionGestureAction(list, DiagonalDownLeftTouchInputToGameKeyEventAction.getInstance());
    
list= new BasicArrayListD();
    
list.add(touchMotionGestureFactory!.DIAGONAL_DOWN_RIGHT);
    
motionGestureConfiguration!.addMotionGestureAction(list, DiagonalDownRightTouchInputToGameKeyEventAction.getInstance());
    
list= new BasicArrayListD();
    
list.add(touchMotionGestureFactory!.DIAGONAL_UP_LEFT);
    
motionGestureConfiguration!.addMotionGestureAction(list, DiagonalUpLeftTouchInputToGameKeyEventAction.getInstance());
    
list= new BasicArrayListD();
    
list.add(touchMotionGestureFactory!.DIAGONAL_UP_RIGHT);
    
motionGestureConfiguration!.addMotionGestureAction(list, DiagonalUpRightTouchInputToGameKeyEventAction.getInstance());
    
list= new BasicArrayListD();
    
list.add(touchMotionGestureFactory!.LEFT);
    
motionGestureConfiguration!.addMotionGestureAction(list, LeftTouchInputToGameKeyEventAction.getInstance());
    
list= new BasicArrayListD();
    
list.add(touchMotionGestureFactory!.RIGHT);
    
motionGestureConfiguration!.addMotionGestureAction(list, RightTouchInputToGameKeyEventAction.getInstance());
    
list= new BasicArrayListD();
    
list.add(touchMotionGestureFactory!.DOWN);
    
motionGestureConfiguration!.addMotionGestureAction(list, DownTouchInputToGameKeyEventAction.getInstance());
    
list= new BasicArrayListD();
    
list.add(touchMotionGestureFactory!.UP);
    
motionGestureConfiguration!.addMotionGestureAction(list, UpTouchInputToGameKeyEventAction.getInstance());
    
list= new BasicArrayListD();
    
list.add(touchMotionGestureFactory!.RELEASED);
    
motionGestureConfiguration!.addMotionGestureAction(list, ReleaseTouchInputToGameKeyEventAction.getInstance());
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.INIT, e);
    
}

}


};

            

