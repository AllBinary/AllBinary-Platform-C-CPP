
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionEventFactory.h"
#include "MotionGestureEvent.h"

class MotionEventCircularPool
            : public Object
         {
        

    public static MotionEventCircularPool createPool(int32_t id){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new MotionEventCircularPool(id);
    
}


    private: const MIN: int32_t = TouchMotionGestureFactory.getInstance()!.LAST_MOTION.getId()!;

    private: eventPool: AllBinaryEventCircularPool = new AllBinaryEventCircularPool((InputFactory.getInstance()!.MAX -1) -this.MIN);

private constructor (int32_t id){

            super();
        this.eventPool!.initAllBinaryEventCircularPool(new MotionEventFactory(this.eventPool, id));
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public MotionGestureEvent getInstance(MotionGestureInput motionGestureInput){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.eventPool!.getInstance(motionGestureInput!.getId() -this.MIN) as MotionGestureEvent;
    
}


};

            

