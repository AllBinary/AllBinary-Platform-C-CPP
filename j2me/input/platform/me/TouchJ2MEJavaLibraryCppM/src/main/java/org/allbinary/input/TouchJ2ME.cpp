
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/input/motion/AllMotionRecognizer.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TouchJ2ME
class TouchJ2ME
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const DEVICE_ID: int32_t = 0;

    private: motionRecognizer: AllMotionRecognizer = new AllMotionRecognizer();

public constructor (){

            super();
        
    motionGesturesHandler: BasicMotionGesturesHandler = this.motionRecognizer!.getMotionGestureRecognizer()!.getMotionGesturesHandler()!;;
    
motionGesturesHandler!.addListenerInterface(new GameMotionGestureListener(MotionGestureReceiveInterfaceFactory.getInstance()));
    
}


    public pointerDragged(int32_t x, int32_t y){

        try {
            this.motionRecognizer!.processDraggedMotionEvent(x, y, DEVICE_ID, 0);
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "pointerDragged", e);
    
}

}


    public pointerPressed(int32_t x, int32_t y){

        try {
            this.motionRecognizer!.processStartMotionEvent(x, y, DEVICE_ID, 0);
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "pointerPressed", e);
    
}

}


    public pointerReleased(int32_t x, int32_t y){

        try {
            this.motionRecognizer!.processEndMotionEvent(x, y, DEVICE_ID, 0);
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "pointerReleased", e);
    
}

}


};

            

