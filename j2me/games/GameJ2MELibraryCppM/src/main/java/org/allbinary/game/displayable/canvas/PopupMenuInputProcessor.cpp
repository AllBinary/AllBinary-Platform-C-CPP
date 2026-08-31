
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

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicMenuInputProcessor.h"
#include "AllBinaryGameCanvas.h"

class PopupMenuInputProcessor: public BasicMenuInputProcessor {
        

    private: const rectangleCollisionUtil: RectangleCollisionUtil = RectangleCollisionUtil.getInstance()!;

    private: const CLICK_DELAY: int32_t = 120;

    private: const clickTimeHelper: TimeDelayHelper = new TimeDelayHelper(this.CLICK_DELAY);

    private: rectangle: Rectangle;

public constructor (BasicArrayList gameKeyEventList, int32_t playerInputId, MyCanvas gameCanvas, Rectangle rectangle){
            super(gameKeyEventList, playerInputId, gameCanvas);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.rectangle= rectangle;
    
}


    public init(Rectangle rectangle){
this.rectangle= rectangle;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t processInput(int32_t key){

                        if(key == Canvas.KEY_STAR)
                        
                                    {
                                    
    gameCanvas: AllBinaryGameCanvas = this.getCanvas() as AllBinaryGameCanvas;;
    
gameCanvas!.toggleMenu();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t processInputList(){

        try {
            
    motionInputsIndex: int32_t = this.processMotionInputs()!;;
    

    list: BasicArrayList = this.getGameKeyEventList()!;;
    

    size: int32_t = list.size()!;;
    

    key: int32_t = 0;;
    

    gameKeyEvent: GameKeyEvent;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
gameKeyEvent= list.objectArray[index]! as GameKeyEvent;
    

                        if(gameKeyEvent != 
                                    null
                                )
                        
                                    {
                                    key= gameKeyEvent!.getKey();
    

                        if(this.processInput(key) == 1)
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
}

this.clear();
    

                        if(size > 0 || motionInputsIndex >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, GameInputStrings.getInstance()!.PROCESS_INPUT, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

}


                //@Throws(Exception.constructor)
            
    public int32_t processMotionInputs(){

    lastIndex: int32_t = this.motionGestureEventList!.size() -1;;
    

                        if(lastIndex >= 0)
                        
                                    {
                                    
    motionGestureEvent: MotionGestureEvent = this.motionGestureEventList!.objectArray[lastIndex]! as MotionGestureEvent;;
    
this.processMotionInput(motionGestureEvent);
    

                                    }
                                
this.motionGestureEventList!.clear();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return lastIndex;
    
}


                //@Throws(Exception.constructor)
            
    processMotionInput(MotionGestureEvent motionGestureEvent){

                        if(motionGestureEvent == 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.putF("Exception: Bug", this, this.gameInputStrings!.PROCESS_MOTION_INPUT);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    touchMotionGestureFactory: TouchMotionGestureFactory = TouchMotionGestureFactory.getInstance()!;;
    

    motionGestureInput: MotionGestureInput = motionGestureEvent!.getMotionGesture()!;;
    

                        if(motionGestureInput == touchMotionGestureFactory!.RELEASED)
                        
                                    {
                                    
    point: GPoint = motionGestureEvent!.getCurrentPoint()!;;
    

    rectPoint: GPoint = this.rectangle.getPoint()!;;
    

                        if(this.rectangleCollisionUtil!.isInside(rectPoint!.getX(), rectPoint!.getY(), this.rectangle.getMaxX() +20, this.rectangle.getMaxY(), point.getX(), point.getY()))
                        
                                    {
                                    
                        if(this.clickTimeHelper!.isTimeTNT())
                        
                                    {
                                    
    gameCanvas: AllBinaryGameCanvas = this.getCanvas() as AllBinaryGameCanvas;;
    
gameCanvas!.toggleMenu();
    

                                    }
                                

                                    }
                                

                                    }
                                
}


};

            

