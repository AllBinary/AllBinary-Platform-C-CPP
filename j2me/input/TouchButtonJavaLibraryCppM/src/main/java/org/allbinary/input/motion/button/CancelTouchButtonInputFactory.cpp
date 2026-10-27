
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"

Object* CancelTouchButtonInputFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto CancelTouchButtonInputFactory::getInstance() -> CancelTouchButtonInputFactory*{

                        if(CancelTouchButtonInputFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    CancelTouchButtonInputFactory::instance= new CancelTouchButtonInputFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<CancelTouchButtonInputFactory*>(CancelTouchButtonInputFactory::instance);
    
}


CancelTouchButtonInputFactory::CancelTouchButtonInputFactory() : cancelInputArray(std::vector<TouchButtonInput*>(InputFactory::getInstance()->MAX)){

    BasicTouchInputFactory* basicTouchInputFactory = BasicTouchInputFactory::getInstance();;
    




                        for (
    int32_t index = this->cancelInputArray.size() -1;index >= 0; index--)
        {
this->cancelInputArray[index]= basicTouchInputFactory->NONE;
    
}

this->cancelInputArray[basicTouchInputFactory->UP->getSourceId()]= basicTouchInputFactory->DOWN;
    
this->cancelInputArray[basicTouchInputFactory->DOWN->getSourceId()]= basicTouchInputFactory->UP;
    
this->cancelInputArray[basicTouchInputFactory->LEFT->getSourceId()]= basicTouchInputFactory->RIGHT;
    
this->cancelInputArray[basicTouchInputFactory->RIGHT->getSourceId()]= basicTouchInputFactory->LEFT;
    
}


    auto CancelTouchButtonInputFactory::getCancel(TouchButtonInput* touchButtonInput) -> TouchButtonInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cancelInputArray[touchButtonInput->getSourceId()];
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_CPP
