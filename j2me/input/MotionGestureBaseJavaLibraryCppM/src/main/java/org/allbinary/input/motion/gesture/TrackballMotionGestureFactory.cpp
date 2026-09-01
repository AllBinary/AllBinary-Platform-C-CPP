
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionGestureInput.h"

class TrackballMotionGestureFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static TrackballMotionGestureFactory getInstance(){

                        if(TrackballMotionGestureFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    TrackballMotionGestureFactory::instance= TrackballMotionGestureFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrackballMotionGestureFactory::instance() as TrackballMotionGestureFactory;
    
}


    public: MotionGestureInput LEFT;

    public: MotionGestureInput RIGHT;

    public: MotionGestureInput UP;

    public: MotionGestureInput DOWN;

private: TrackballMotionGestureFactory(){

    int32_t MAX = InputFactory::getInstance().MAX;;
    
this->LEFT= MotionGestureInput(MAX -26, "L Trackball");
    
this->RIGHT= MotionGestureInput(MAX -27, "R Trackball");
    
this->UP= MotionGestureInput(MAX -28, "Up Trackball");
    
this->DOWN= MotionGestureInput(MAX -29, "D Trackball");
    
}


};

            

