
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicMenuInputProcessor: public PlayerGameInput: public BaseMotionGestureEventListener {
        

    public const motionGestureEventList: BasicArrayList = new BasicArrayListD();

    private: canvas: Canvas = NullCanvas.NULL_CANVAS;

protected constructor (BasicArrayList gameKeyEventList, int32_t playerInputId, Canvas gameCanvas){
            super(gameKeyEventList, new BasicArrayListD(), playerInputId);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.canvas= gameCanvas;
    
}


    public onMotionGestureEvent(MotionGestureEvent motionGestureEvent){
this.motionGestureEventList!.add(motionGestureEvent);
    
}


    public onScrolledMotionGestureEvent(MotionGestureEvent motionGestureEvent){
}


    setCanvas(MyCanvas canvas){
this.canvas= canvas;
    
}


    MyCanvas getCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.canvas as MyCanvas;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t processInputList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


};

            

