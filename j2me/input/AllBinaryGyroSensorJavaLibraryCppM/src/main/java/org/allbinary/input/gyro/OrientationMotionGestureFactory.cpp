
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/gyro/OrientationMotionGestureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* OrientationMotionGestureFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto OrientationMotionGestureFactory::getInstance() -> OrientationMotionGestureFactory*{

                        if(OrientationMotionGestureFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    OrientationMotionGestureFactory::instance= new OrientationMotionGestureFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<OrientationMotionGestureFactory*>(OrientationMotionGestureFactory::instance);
    
}


OrientationMotionGestureFactory::OrientationMotionGestureFactory(){

    int32_t MAX = InputFactory::getInstance()->MAX;;
    
this->LEFT= new MotionGestureInput(MAX -20, "Left Orient");
    
this->RIGHT= new MotionGestureInput(MAX -21, "Right Orient");
    
this->UP= new MotionGestureInput(MAX -22, "Up Orient");
    
this->DOWN= new MotionGestureInput(MAX -23, "Down Orient");
    
this->ROLL_LEFT= new MotionGestureInput(MAX -24, "Roll Left");
    
this->ROLL_RIGHT= new MotionGestureInput(MAX -25, "Roll Right");
    
}




        #endif //ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_CPP
