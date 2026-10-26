
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrientationMotionGestureFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static OrientationMotionGestureFactory getInstance(){

                        if(OrientationMotionGestureFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    OrientationMotionGestureFactory::instance= OrientationMotionGestureFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OrientationMotionGestureFactory::instance();
    
}


    public: MotionGestureInput LEFT;

    public: MotionGestureInput RIGHT;

    public: MotionGestureInput UP;

    public: MotionGestureInput DOWN;

    public: MotionGestureInput ROLL_LEFT;

    public: MotionGestureInput ROLL_RIGHT;

private: OrientationMotionGestureFactory(){

    int32_t MAX = InputFactory::getInstance().MAX;;
    
this->LEFT= MotionGestureInput(MAX -20, "Left Orient");
    
this->RIGHT= MotionGestureInput(MAX -21, "Right Orient");
    
this->UP= MotionGestureInput(MAX -22, "Up Orient");
    
this->DOWN= MotionGestureInput(MAX -23, "Down Orient");
    
this->ROLL_LEFT= MotionGestureInput(MAX -24, "Roll Left");
    
this->ROLL_RIGHT= MotionGestureInput(MAX -25, "Roll Right");
    
}


};

            

