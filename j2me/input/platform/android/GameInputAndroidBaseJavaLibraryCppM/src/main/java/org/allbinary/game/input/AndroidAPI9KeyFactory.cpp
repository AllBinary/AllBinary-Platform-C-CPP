
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/AndroidAPI9KeyFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/view/KeyEvent.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidKeyFactory.h"
#include "org/allbinary/game/input/AndroidGameKey.h"

Object* AndroidAPI9KeyFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto AndroidAPI9KeyFactory::getInstance() -> AndroidAPI9KeyFactory*{

                        if(AndroidAPI9KeyFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    AndroidAPI9KeyFactory::instance= new AndroidAPI9KeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<AndroidAPI9KeyFactory*>(AndroidAPI9KeyFactory::instance);
    
}


AndroidAPI9KeyFactory::AndroidAPI9KeyFactory(){
this->KEYCODE_BUTTON_L1= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_L1, "BUTTON L1");
    
this->KEYCODE_BUTTON_R1= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_R1, "BUTTON R1");
    
this->KEYCODE_BUTTON_THUMBR= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_THUMBR, "BUTTON THUMBR");
    
this->KEYCODE_BUTTON_THUMBL= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_THUMBL, "BUTTON THUMBL");
    
this->KEYCODE_BUTTON_START= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_START, "BUTTON START");
    
this->KEYCODE_BUTTON_MODE= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_MODE, "BUTTON MODE");
    
this->KEYCODE_BUTTON_B= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_B, "BUTTON B");
    
this->KEYCODE_BUTTON_A= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_A, "BUTTON A");
    
this->KEYCODE_BUTTON_X= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_X, "BUTTON X");
    
this->KEYCODE_BUTTON_Y= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_Y, "BUTTON Y");
    
this->KEYCODE_BUTTON_L2= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_L2, "BUTTON L2");
    
this->KEYCODE_BUTTON_R2= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_R2, "BUTTON R2");
    
this->KEYCODE_BUTTON_SELECT= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_SELECT, "BUTTON SELECT");
    
this->KEYCODE_BUTTON_C= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_C, "BUTTON C");
    
this->KEYCODE_BUTTON_Z= new AndroidGameKey(KeyEvent::KEYCODE_BUTTON_Z, "BUTTON Z");
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_CPP
