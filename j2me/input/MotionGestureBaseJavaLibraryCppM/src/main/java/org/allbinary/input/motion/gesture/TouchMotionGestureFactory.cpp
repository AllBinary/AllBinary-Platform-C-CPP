
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionGestureInput.h"

class TouchMotionGestureFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static TouchMotionGestureFactory getInstance(){

                        if(TouchMotionGestureFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    TouchMotionGestureFactory::instance= TouchMotionGestureFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchMotionGestureFactory::instance() as TouchMotionGestureFactory;
    
}


    public: MotionGestureInput LEFT;

    public: MotionGestureInput RIGHT;

    public: MotionGestureInput UP;

    public: MotionGestureInput DOWN;

    public: MotionGestureInput PRESSED;

    public: MotionGestureInput RELEASED;

    public: MotionGestureInput DIAGONAL_DOWN_RIGHT;

    public: MotionGestureInput DIAGONAL_DOWN_LEFT;

    public: MotionGestureInput DIAGONAL_UP_RIGHT;

    public: MotionGestureInput DIAGONAL_UP_LEFT;

    public: MotionGestureInput SCROLL_UP;

    public: MotionGestureInput SCROLL_DOWN;

    public: MotionGestureInput NO_MOTION;

    public: MotionGestureInput LAST_MOTION;

public: TouchMotionGestureFactory(){

    int32_t MAX = InputFactory::getInstance().MAX;;
    
this->LEFT= MotionGestureInput(MAX -3, "Left Touch");
    
this->RIGHT= MotionGestureInput(MAX -4, "Right Touch");
    
this->UP= MotionGestureInput(MAX -5, "Up Touch");
    
this->DOWN= MotionGestureInput(MAX -6, "Down Touch");
    
this->PRESSED= MotionGestureInput(MAX -7, "Screen Press");
    
this->RELEASED= MotionGestureInput(MAX -8, "Released");
    
this->DIAGONAL_DOWN_RIGHT= MotionGestureInput(MAX -9, "Diagonal Dn R");
    
this->DIAGONAL_DOWN_LEFT= MotionGestureInput(MAX -10, "Diagonal Dn L");
    
this->DIAGONAL_UP_RIGHT= MotionGestureInput(MAX -11, "Diagonal Up R");
    
this->DIAGONAL_UP_LEFT= MotionGestureInput(MAX -12, "Diagonal Up L");
    
this->SCROLL_UP= MotionGestureInput(MAX -13, "Scroll Up");
    
this->SCROLL_DOWN= MotionGestureInput(MAX -14, "Scroll Down");
    
this->NO_MOTION= MotionGestureInput(MAX -2, "No Motion");
    
this->LAST_MOTION= MotionGestureInput(MAX -19, "Last Motion");
    
}


};

            

