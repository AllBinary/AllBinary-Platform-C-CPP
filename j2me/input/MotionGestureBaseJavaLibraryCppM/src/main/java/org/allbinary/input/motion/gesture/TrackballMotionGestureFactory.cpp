
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/TrackballMotionGestureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/MotionGestureInput.h"

Object* TrackballMotionGestureFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto TrackballMotionGestureFactory::getInstance() -> TrackballMotionGestureFactory*{

                        if(TrackballMotionGestureFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    TrackballMotionGestureFactory::instance= new TrackballMotionGestureFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TrackballMotionGestureFactory*>(TrackballMotionGestureFactory::instance);
    
}


TrackballMotionGestureFactory::TrackballMotionGestureFactory(){

    int32_t MAX = InputFactory::getInstance()->MAX;;
    
this->LEFT= new MotionGestureInput(MAX -26, "L Trackball");
    
this->RIGHT= new MotionGestureInput(MAX -27, "R Trackball");
    
this->UP= new MotionGestureInput(MAX -28, "Up Trackball");
    
this->DOWN= new MotionGestureInput(MAX -29, "D Trackball");
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_CPP
