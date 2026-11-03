
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonInput.h"

auto CurrentlyPressedTouchButtonSingleton::instance_owner() -> CurrentlyPressedTouchButtonSingleton* { static std::unique_ptr<CurrentlyPressedTouchButtonSingleton> value(new CurrentlyPressedTouchButtonSingleton()); return value.get(); }
CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton::instance = CurrentlyPressedTouchButtonSingleton::instance_owner();

    auto CurrentlyPressedTouchButtonSingleton::getInstance() -> CurrentlyPressedTouchButtonSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CurrentlyPressedTouchButtonSingleton::instance;
    
}


CurrentlyPressedTouchButtonSingleton::CurrentlyPressedTouchButtonSingleton() : list(new BasicArrayListD()){
}


    auto CurrentlyPressedTouchButtonSingleton::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->size();;
    
}


    auto CurrentlyPressedTouchButtonSingleton::removeAt(int32_t index) -> TouchButtonInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TouchButtonInput*>(this->list->removeAt(index));
    
}


    auto CurrentlyPressedTouchButtonSingleton::remove(TouchButtonInput* touchButtonInput) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->remove(touchButtonInput);;
    
}


    auto CurrentlyPressedTouchButtonSingleton::get(int32_t index) -> TouchButtonInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TouchButtonInput*>(this->list->objectArray[index]);
    
}


    auto CurrentlyPressedTouchButtonSingleton::contains(TouchButtonInput* touchButtonInput) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->contains(touchButtonInput);;
    
}


    auto CurrentlyPressedTouchButtonSingleton::add(TouchButtonInput* touchButtonInput) -> void{
this->list->add(touchButtonInput);
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETON_CPP
