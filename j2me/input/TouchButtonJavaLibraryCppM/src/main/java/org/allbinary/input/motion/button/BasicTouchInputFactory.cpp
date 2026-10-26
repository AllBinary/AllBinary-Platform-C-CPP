
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

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"

class BasicTouchInputFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static BasicTouchInputFactory getInstance(){

                        if(BasicTouchInputFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    BasicTouchInputFactory::instance= BasicTouchInputFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicTouchInputFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: TouchButtonInput SPECIAL_BUTTON_SEVEN_TESTING_ONLY;

    public: TouchButtonInput SPECIAL_BUTTON_EIGHT_TESTING_ONLY;

    public: TouchButtonInput SPECIAL_BUTTON_SIX;

    public: TouchButtonInput SPECIAL_BUTTON_FIVE;

    public: TouchButtonInput SPECIAL_BUTTON_FOUR;

    public: TouchButtonInput SPECIAL_BUTTON_THREE;

    public: TouchButtonInput SPECIAL_BUTTON_TWO;

    public: TouchButtonInput SPECIAL_BUTTON_ONE;

    public: TouchButtonInput UP;

    public: TouchButtonInput LEFT;

    public: TouchButtonInput RIGHT;

    public: TouchButtonInput DOWN;

    public: TouchButtonInput NONE;

    private: bool initialized = false;

    private: const BasicArrayList list = BasicArrayListD();

private: BasicTouchInputFactory(){

    int32_t MAX = InputFactory::getInstance().MAX;;
    
this->SPECIAL_BUTTON_SEVEN_TESTING_ONLY= TouchButtonInput(MAX -41, "Button 7 - Testing Only May Cross Over Key Values");
    
this->SPECIAL_BUTTON_EIGHT_TESTING_ONLY= TouchButtonInput(MAX -42, "Button 8 - Testing Only May Cross Over Key Values");
    
this->SPECIAL_BUTTON_SIX= TouchButtonInput(MAX -30, "Button 6");
    
this->SPECIAL_BUTTON_FIVE= TouchButtonInput(MAX -31, "Button 5");
    
this->SPECIAL_BUTTON_FOUR= TouchButtonInput(MAX -32, "Button 4");
    
this->SPECIAL_BUTTON_THREE= TouchButtonInput(MAX -33, "Button 3");
    
this->SPECIAL_BUTTON_TWO= TouchButtonInput(MAX -34, "Button 2");
    
this->SPECIAL_BUTTON_ONE= TouchButtonInput(MAX -35, "Button 1");
    
this->UP= TouchButtonInput(MAX -36, "Up Button");
    
this->LEFT= TouchButtonInput(MAX -37, "Left Button");
    
this->RIGHT= TouchButtonInput(MAX -38, "Right Button");
    
this->DOWN= TouchButtonInput(MAX -39, "Down Button");
    
this->NONE= TouchButtonInput(MAX -40, "No Button");
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void init(InputToGameKeyMapping inputToGameKeyMapping){

                        if(!this->initialized)
                        
                                    {
                                    this->initialized= true;
    
this->list.add(this->UP);
    
this->list.add(this->LEFT);
    
this->list.add(this->RIGHT);
    
this->list.add(this->DOWN);
    
this->list.add(this->SPECIAL_BUTTON_TWO);
    
this->list.add(this->SPECIAL_BUTTON_FOUR);
    
this->list.add(this->SPECIAL_BUTTON_THREE);
    
this->list.add(this->SPECIAL_BUTTON_ONE);
    
this->list.add(this->SPECIAL_BUTTON_FIVE);
    
this->list.add(this->SPECIAL_BUTTON_SIX);
    
this->list.add(this->SPECIAL_BUTTON_SIX);
    
this->list.add(this->SPECIAL_BUTTON_SEVEN_TESTING_ONLY);
    
this->list.add(this->SPECIAL_BUTTON_EIGHT_TESTING_ONLY);
    
this->updateAllFromList(this->list, inputToGameKeyMapping);
    

                                    }
                                
}


    public: void updateAll(InputToGameKeyMapping inputToGameKeyMapping){
this->updateAllFromList(this->list, inputToGameKeyMapping);
    
}


    public: void updateAllFromList(BasicArrayList list, InputToGameKeyMapping inputToGameKeyMapping){
this->logUtil.putF(StringMaker().append(CommonLabels::getInstance().START_LABEL).appendint(list.size()).toString(), this, "updateAll");
    

    TouchButtonInput touchButtonInput;;
    




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {
touchButtonInput= list.objectArray[index];
    
touchButtonInput.update(inputToGameKeyMapping);
    
}

}


    public: BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

