
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

    public: const TouchButtonInput SPECIAL_BUTTON_SIX = TouchButtonInput(InputFactory::getInstance().MAX -30, "Button 6");

    public: const TouchButtonInput SPECIAL_BUTTON_FIVE = TouchButtonInput(InputFactory::getInstance().MAX -31, "Button 5");

    public: const TouchButtonInput SPECIAL_BUTTON_FOUR = TouchButtonInput(InputFactory::getInstance().MAX -32, "Button 4");

    public: const TouchButtonInput SPECIAL_BUTTON_THREE = TouchButtonInput(InputFactory::getInstance().MAX -33, "Button 3");

    public: const TouchButtonInput SPECIAL_BUTTON_TWO = TouchButtonInput(InputFactory::getInstance().MAX -34, "Button 2");

    public: const TouchButtonInput SPECIAL_BUTTON_ONE = TouchButtonInput(InputFactory::getInstance().MAX -35, "Button 1");

    public: const TouchButtonInput UP = TouchButtonInput(InputFactory::getInstance().MAX -36, "Up Button");

    public: const TouchButtonInput LEFT = TouchButtonInput(InputFactory::getInstance().MAX -37, "Left Button");

    public: const TouchButtonInput RIGHT = TouchButtonInput(InputFactory::getInstance().MAX -38, "Right Button");

    public: const TouchButtonInput DOWN = TouchButtonInput(InputFactory::getInstance().MAX -39, "Down Button");

    public: const TouchButtonInput NONE = TouchButtonInput(InputFactory::getInstance().MAX -40, "No Button");

    private: bool initialized = false;

    private: const BasicArrayList list = BasicArrayListD();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void init(InputToGameKeyMapping inputToGameKeyMapping){

                        if(!this->initialized)
                        
                                    {
                                    this->initialized= true;
    
this->list.add(this->UP);
    
this->list.add(this->LEFT);
    
this->list.add(this->RIGHT);
    
this->list.add(this->DOWN);
    
this->list.add(SPECIAL_BUTTON_TWO);
    
this->list.add(SPECIAL_BUTTON_FOUR);
    
this->list.add(SPECIAL_BUTTON_THREE);
    
this->list.add(SPECIAL_BUTTON_ONE);
    
this->list.add(SPECIAL_BUTTON_FIVE);
    
this->list.add(SPECIAL_BUTTON_SIX);
    
this->updateAllList(this->list, inputToGameKeyMapping);
    

                                    }
                                
}


    public: void updateAll(InputToGameKeyMapping inputToGameKeyMapping){
this->updateAllList(this->getList(), inputToGameKeyMapping);
    
}


    public: void updateAllList(BasicArrayList list, InputToGameKeyMapping inputToGameKeyMapping){
this->logUtil.putF(StringMaker().append(CommonLabels::getInstance().START).appendint(list.size()).toString(), this, "updateAll");
    




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {

    TouchButtonInput touchButtonInput = list.get(index);;
    
touchButtonInput.update(inputToGameKeyMapping);
    
}

}


    public: BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

