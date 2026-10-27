
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

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"

class MotionEventFactory
            : public Object
        , public AllBinaryEventObjectFactoryInterface {

    private: static inline int32_t index = 0;

    private: Object* source;

    private: int32_t id;

public: MotionEventFactory(Object* source, int32_t id){
this->source= source;
    
this->id= id;
    
MotionEventFactory::index= TouchMotionGestureFactory::getInstance()->LAST_MOTION.getId();
    
}


    public: AllBinaryEventObject* getInstance(){

    InputFactory* inputFactory = InputFactory::getInstance();;
    

    Input* input = inputFactory->getInstanceById(MotionEventFactory::index++);;
    

                        if(input == inputFactory->NO_INPUT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new MotionGestureEvent(this->source, this->id, dynamic_cast<MotionGestureInput*>(TouchMotionGestureFactory::getInstance()->NO_MOTION));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new MotionGestureEvent(this->source, this->id, dynamic_cast<MotionGestureInput*>(input));
    

                        }
                            
}


};

            

