
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
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/MotionGestureInput.h"

class TrackballMotionGestureFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static TrackballMotionGestureFactory* getInstance(){

                        if(TrackballMotionGestureFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    TrackballMotionGestureFactory::instance= new TrackballMotionGestureFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TrackballMotionGestureFactory*>(TrackballMotionGestureFactory::instance);
    
}


    public: MotionGestureInput* LEFT;

    public: MotionGestureInput* RIGHT;

    public: MotionGestureInput* UP;

    public: MotionGestureInput* DOWN;

private: TrackballMotionGestureFactory(){

    int32_t MAX = InputFactory::getInstance()->MAX;;
    
this->LEFT= new MotionGestureInput(MAX -26, "L Trackball");
    
this->RIGHT= new MotionGestureInput(MAX -27, "R Trackball");
    
this->UP= new MotionGestureInput(MAX -28, "Up Trackball");
    
this->DOWN= new MotionGestureInput(MAX -29, "D Trackball");
    
}


};

            

