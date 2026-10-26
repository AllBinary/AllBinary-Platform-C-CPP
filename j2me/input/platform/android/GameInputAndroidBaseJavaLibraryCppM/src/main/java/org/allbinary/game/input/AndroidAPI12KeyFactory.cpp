
        /* Generated Code Do Not Modify */
        



#include <android/view/KeyEvent.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidAPI9KeyFactory.h"
#include "AndroidGameKey.h"

class AndroidAPI12KeyFactory: public AndroidAPI9KeyFactory {

    private: static Object* instance12 = NullUtil::getInstance().NULL_OBJECT;

    public: static AndroidAPI12KeyFactory getAPI12Instance(){

                        if(AndroidAPI12KeyFactory::instance12 == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    AndroidAPI12KeyFactory::instance12= AndroidAPI12KeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI12KeyFactory::instance12;
    
}


private: AndroidAPI12KeyFactory(){
this->KEYCODE_BUTTON_1= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_1, "BUTTON 1");
    
this->KEYCODE_BUTTON_10= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_10, "BUTTON 10");
    
this->KEYCODE_BUTTON_11= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_11, "BUTTON 11");
    
this->KEYCODE_BUTTON_12= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_12, "BUTTON 12");
    
this->KEYCODE_BUTTON_13= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_13, "BUTTON 13");
    
this->KEYCODE_BUTTON_14= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_14, "BUTTON 14");
    
this->KEYCODE_BUTTON_15= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_15, "BUTTON 15");
    
this->KEYCODE_BUTTON_16= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_16, "BUTTON 16");
    
this->KEYCODE_BUTTON_2= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_2, "BUTTON 2");
    
this->KEYCODE_BUTTON_3= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_3, "BUTTON 3");
    
this->KEYCODE_BUTTON_4= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_4, "BUTTON 4");
    
this->KEYCODE_BUTTON_5= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_5, "BUTTON 5");
    
this->KEYCODE_BUTTON_6= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_6, "BUTTON 6");
    
this->KEYCODE_BUTTON_7= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_7, "BUTTON 7");
    
this->KEYCODE_BUTTON_8= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_8, "BUTTON 8");
    
this->KEYCODE_BUTTON_9= AndroidGameKey(KeyEvent::KEYCODE_BUTTON_9, "BUTTON 9");
    
}


};

            

