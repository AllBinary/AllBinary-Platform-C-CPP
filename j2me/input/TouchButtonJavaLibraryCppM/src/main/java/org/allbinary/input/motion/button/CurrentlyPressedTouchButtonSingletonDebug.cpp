
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
        



#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CurrentlyPressedTouchButtonSingleton.h"
#include "TouchButtonInput.h"

class CurrentlyPressedTouchButtonSingletonDebug: public CurrentlyPressedTouchButtonSingleton {

    private: static const CurrentlyPressedTouchButtonSingletonDebug instanceC = CurrentlyPressedTouchButtonSingletonDebug();

    public: static CurrentlyPressedTouchButtonSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CurrentlyPressedTouchButtonSingletonDebug::instanceC;
    
}


    private: std::string string = StringUtil::getInstance().EMPTY_STRING;

    private: std::string listString = StringUtil::getInstance().EMPTY_STRING;

    private: std::string append = StringUtil::getInstance().EMPTY_STRING;

    private: const std::string PRESSED_AND_FIRED = "pressed & fired";

    private: const std::string PRESSED_AND_NOT_FIRED = "pressed in button but not fired";

    private: const std::string ASSOCIATED_RELEASED_AND_FIRED = "assoc. rel & fired";

    private: const std::string RELEASED_AND_FIRED = "rel & fired 1";

    private: const std::string RELEASED_AND_FIRED_2 = "rel & fired 2";

    private: const std::string RELEASED_AND_NOT_FIRED = "rel & not fired";

    private: void appendTouchButtonInput(std::string append, TouchButtonInput touchButtonInput){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(touchButtonInput.toString());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(append);
    
this->append= stringBuffer.toString();
    
this->string= StringMaker().append(this->listString).append(this->append).toString();
    
}


    private: void append(std::string append){
this->append= StringMaker().append(this->append).append(append).toString();
    
this->string= StringMaker().append(this->listString).append(this->append).toString();
    
}


    public: void clearLog(int32_t x, int32_t y){
this->append= StringMaker().append(GPoint::toStringStatic(x, y, 0)).append(CommonSeps::getInstance().SPACE).toString();
    
this->string= StringMaker().append(this->listString).append(this->append).toString();
    
}


    public: void releaseAndNotFired(){
this->append(this->RELEASED_AND_NOT_FIRED);
    
}


    public: void releaseAndFired(TouchButtonInput touchButtonInput){
this->appendTouchButtonInput(this->RELEASED_AND_FIRED, touchButtonInput);
    
}


    public: void releaseAndFired2(TouchButtonInput touchButtonInput){
this->appendTouchButtonInput(this->RELEASED_AND_FIRED_2, touchButtonInput);
    
}


    public: void releaseAndFiredAssociated(TouchButtonInput touchButtonInput){
this->appendTouchButtonInput(this->ASSOCIATED_RELEASED_AND_FIRED, touchButtonInput);
    
}


    public: void pressedAndFired(TouchButtonInput touchButtonInput){
this->appendTouchButtonInput(this->PRESSED_AND_FIRED, touchButtonInput);
    
}


    public: void pressedAndNotFired(TouchButtonInput touchButtonInput){
this->appendTouchButtonInput(this->PRESSED_AND_NOT_FIRED, touchButtonInput);
    
}


    public: TouchButtonInput removeAt(int32_t index){

    TouchButtonInput touchButtonInput = super.removeAt(index);;
    
this->listString= this->list.toString();
    
this->string= StringMaker().append(this->listString).append(this->append).toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return touchButtonInput;
    
}


    public: bool remove(TouchButtonInput touchButtonInput){

    bool isRemoved = super.remove(touchButtonInput);;
    
this->listString= this->list.toString();
    
this->string= StringMaker().append(this->listString).append(this->append).toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isRemoved;
    
}


    public: void add(TouchButtonInput touchButtonInput){
super.add(touchButtonInput);
    
this->listString= this->list.toString();
    
this->string= StringMaker().append(this->listString).append(this->append).toString();
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->string;
    
}


};

            

