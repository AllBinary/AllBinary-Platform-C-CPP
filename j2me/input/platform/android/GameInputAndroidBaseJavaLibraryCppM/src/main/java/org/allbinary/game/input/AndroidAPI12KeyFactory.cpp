
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/AndroidAPI12KeyFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/view/KeyEvent.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidAPI9KeyFactory.h"
#include "org/allbinary/game/input/AndroidGameKey.h"

Object* AndroidAPI12KeyFactory::instance12 = NullUtil::getInstance()->NULL_OBJECT;

    auto AndroidAPI12KeyFactory::getAPI12Instance() -> AndroidAPI12KeyFactory*{

                        if(AndroidAPI12KeyFactory::instance12 == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    AndroidAPI12KeyFactory::instance12= new AndroidAPI12KeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<AndroidAPI12KeyFactory*>(AndroidAPI12KeyFactory::instance12);
    
}


AndroidAPI12KeyFactory::AndroidAPI12KeyFactory(){
this->KEYCODE_BUTTON_1= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_1, "BUTTON 1");
    
this->KEYCODE_BUTTON_10= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_10, "BUTTON 10");
    
this->KEYCODE_BUTTON_11= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_11, "BUTTON 11");
    
this->KEYCODE_BUTTON_12= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_12, "BUTTON 12");
    
this->KEYCODE_BUTTON_13= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_13, "BUTTON 13");
    
this->KEYCODE_BUTTON_14= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_14, "BUTTON 14");
    
this->KEYCODE_BUTTON_15= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_15, "BUTTON 15");
    
this->KEYCODE_BUTTON_16= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_16, "BUTTON 16");
    
this->KEYCODE_BUTTON_2= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_2, "BUTTON 2");
    
this->KEYCODE_BUTTON_3= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_3, "BUTTON 3");
    
this->KEYCODE_BUTTON_4= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_4, "BUTTON 4");
    
this->KEYCODE_BUTTON_5= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_5, "BUTTON 5");
    
this->KEYCODE_BUTTON_6= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_6, "BUTTON 6");
    
this->KEYCODE_BUTTON_7= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_7, "BUTTON 7");
    
this->KEYCODE_BUTTON_8= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_8, "BUTTON 8");
    
this->KEYCODE_BUTTON_9= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_9, "BUTTON 9");
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_CPP
