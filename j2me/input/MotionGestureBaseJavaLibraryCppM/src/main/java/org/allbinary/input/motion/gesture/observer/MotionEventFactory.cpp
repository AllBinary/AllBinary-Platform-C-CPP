
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
        
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionGestureEvent.h"

class MotionEventFactory
            : public Object
        : public AllBinaryEventObjectFactoryInterface {

    private: static int32_t index = 0;

    private: Object* source;

    private: int32_t id;

public: MotionEventFactory(Object* source, int32_t id){
this->source= source;
    
this->id= id;
    
MotionEventFactory::index= TouchMotionGestureFactory::getInstance().LAST_MOTION.getId();
    
}


    public: AllBinaryEventObject getInstance(){

    InputFactory inputFactory = InputFactory::getInstance();;
    

    Input input = inputFactory.getInstanceById(MotionEventFactory::index++);;
    

                        if(input == inputFactory.NO_INPUT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MotionGestureEvent(this->source, this->id, TouchMotionGestureFactory::getInstance().NO_MOTION as MotionGestureInput);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MotionGestureEvent(this->source, this->id, input as MotionGestureInput);
    

                        }
                            
}


};

            

