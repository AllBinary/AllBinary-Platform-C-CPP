
        /* Generated Code Do Not Modify */
        



#include <android/view/KeyEvent.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidKeyFactory.h"
#include "AndroidGameKey.h"

class AndroidAPI9KeyFactory: public AndroidKeyFactory {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static AndroidAPI9KeyFactory getInstance(){

                        if(AndroidAPI9KeyFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    AndroidAPI9KeyFactory::instance= AndroidAPI9KeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI9KeyFactory::instance() as AndroidAPI9KeyFactory;
    
}


protected: AndroidAPI9KeyFactory(){
this->KEYCODE_BUTTON_L1= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_L1, "BUTTON L1");
    
this->KEYCODE_BUTTON_R1= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_R1, "BUTTON R1");
    
this->KEYCODE_BUTTON_THUMBR= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_THUMBR, "BUTTON THUMBR");
    
this->KEYCODE_BUTTON_THUMBL= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_THUMBL, "BUTTON THUMBL");
    
this->KEYCODE_BUTTON_START= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_START, "BUTTON START");
    
this->KEYCODE_BUTTON_MODE= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_MODE, "BUTTON MODE");
    
this->KEYCODE_BUTTON_B= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_B, "BUTTON B");
    
this->KEYCODE_BUTTON_A= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_A, "BUTTON A");
    
this->KEYCODE_BUTTON_X= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_X, "BUTTON X");
    
this->KEYCODE_BUTTON_Y= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_Y, "BUTTON Y");
    
this->KEYCODE_BUTTON_L2= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_L2, "BUTTON L2");
    
this->KEYCODE_BUTTON_R2= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_R2, "BUTTON R2");
    
this->KEYCODE_BUTTON_SELECT= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_SELECT, "BUTTON SELECT");
    
this->KEYCODE_BUTTON_C= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_C, "BUTTON C");
    
this->KEYCODE_BUTTON_Z= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_Z, "BUTTON Z");
    
}


};

            

