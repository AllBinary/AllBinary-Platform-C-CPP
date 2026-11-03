
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/input/motion/button/TouchButtonInput.h"


BasicTouchInputFactory::BasicTouchInputFactory() : logUtil(LogUtil::getInstance()), SPECIAL_BUTTON_SIX(new TouchButtonInput(InputFactory::getInstance()->MAX -30, "Button 6")), SPECIAL_BUTTON_FIVE(new TouchButtonInput(InputFactory::getInstance()->MAX -31, "Button 5")), SPECIAL_BUTTON_FOUR(new TouchButtonInput(InputFactory::getInstance()->MAX -32, "Button 4")), SPECIAL_BUTTON_THREE(new TouchButtonInput(InputFactory::getInstance()->MAX -33, "Button 3")), SPECIAL_BUTTON_TWO(new TouchButtonInput(InputFactory::getInstance()->MAX -34, "Button 2")), SPECIAL_BUTTON_ONE(new TouchButtonInput(InputFactory::getInstance()->MAX -35, "Button 1")), UP(new TouchButtonInput(InputFactory::getInstance()->MAX -36, "Up Button")), LEFT(new TouchButtonInput(InputFactory::getInstance()->MAX -37, "Left Button")), RIGHT(new TouchButtonInput(InputFactory::getInstance()->MAX -38, "Right Button")), DOWN(new TouchButtonInput(InputFactory::getInstance()->MAX -39, "Down Button")), NONE(new TouchButtonInput(InputFactory::getInstance()->MAX -40, "No Button")), list(new BasicArrayListD()) {
        }
        Object* BasicTouchInputFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto BasicTouchInputFactory::getInstance() -> BasicTouchInputFactory*{

                        if(BasicTouchInputFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    BasicTouchInputFactory::instance= new BasicTouchInputFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<BasicTouchInputFactory*>(BasicTouchInputFactory::instance);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicTouchInputFactory::init(InputToGameKeyMapping* inputToGameKeyMapping) -> void{

                        if(!this->initialized)
                        
                                    {
                                    this->initialized= true;
    
this->list->add(this->UP);
    
this->list->add(this->LEFT);
    
this->list->add(this->RIGHT);
    
this->list->add(this->DOWN);
    
this->list->add(SPECIAL_BUTTON_TWO);
    
this->list->add(SPECIAL_BUTTON_FOUR);
    
this->list->add(SPECIAL_BUTTON_THREE);
    
this->list->add(SPECIAL_BUTTON_ONE);
    
this->list->add(SPECIAL_BUTTON_FIVE);
    
this->list->add(SPECIAL_BUTTON_SIX);
    
this->updateAllList(this->list, inputToGameKeyMapping);
    

                                    }
                                
}


    auto BasicTouchInputFactory::updateAll(InputToGameKeyMapping* inputToGameKeyMapping) -> void{
this->updateAllList(this->getList(), inputToGameKeyMapping);
    
}


    auto BasicTouchInputFactory::updateAllList(BasicArrayList* list, InputToGameKeyMapping* inputToGameKeyMapping) -> void{
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->START)->appendint(list->size())->toString(), this, "updateAll");
    




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    TouchButtonInput* touchButtonInput = dynamic_cast<TouchButtonInput*>(list->get(index));;
    
touchButtonInput->update(inputToGameKeyMapping);
    
}

}


    auto BasicTouchInputFactory::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_CPP
