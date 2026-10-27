
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicMenuInputProcessor: public PlayerGameInput, public BaseMotionGestureEventListener {

    public: BasicArrayList* motionGestureEventList = new BasicArrayListD();

    private: Canvas* canvas = NullCanvas::NULL_CANVAS;

protected: BasicMenuInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas) : PlayerGameInput(gameKeyEventList, new BasicArrayListD(), playerInputId){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->canvas= gameCanvas;
    
}


    public: void onMotionGestureEvent(MotionGestureEvent* motionGestureEvent){
this->motionGestureEventList->add(motionGestureEvent);
    
}


    public: void onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent){
}


    private: void setCanvas(MyCanvas* canvas){
this->canvas= canvas;
    
}


    protected: MyCanvas* getCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<MyCanvas*>(this->canvas);
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t processInputList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


};

            

