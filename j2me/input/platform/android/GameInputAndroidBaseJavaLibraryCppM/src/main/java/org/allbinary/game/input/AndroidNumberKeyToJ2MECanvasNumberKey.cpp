
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDNUMBERKEYTOJ2MECANVASNUMBERKEY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDNUMBERKEYTOJ2MECANVASNUMBERKEY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/AndroidNumberKeyToJ2MECanvasNumberKey.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <android/view/KeyEvent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
std::vector<int32_t> AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap = std::vector<int32_t>(17);

    auto AndroidNumberKeyToJ2MECanvasNumberKey::init() -> void{
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_0]= Canvas::KEY_NUM0;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_1]= Canvas::KEY_NUM1;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_2]= Canvas::KEY_NUM2;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_3]= Canvas::KEY_NUM3;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_4]= Canvas::KEY_NUM4;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_5]= Canvas::KEY_NUM5;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_6]= Canvas::KEY_NUM6;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_7]= Canvas::KEY_NUM7;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_8]= Canvas::KEY_NUM8;
    
AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[KeyEvent::KEYCODE_9]= Canvas::KEY_NUM9;
    
}


AndroidNumberKeyToJ2MECanvasNumberKey::AndroidNumberKeyToJ2MECanvasNumberKey(){
}


    auto AndroidNumberKeyToJ2MECanvasNumberKey::getKey(int32_t key) -> int32_t{

                        if(key < AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap.size())
                        
                                    {
                                    
    int32_t value = AndroidNumberKeyToJ2MECanvasNumberKey::androidtoJavaMicroEditionKeyMap[key];;
    

                        if(value != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return value;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return key;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDNUMBERKEYTOJ2MECANVASNUMBERKEY_CPP
