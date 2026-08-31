
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_TEXTINTERFACE_H
        #define ORG_ALLBINARY_ANIMATION_TEXT_TEXTINTERFACE_H

#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TextChangeListener.h"

class TextInterface {
        

    setTextWithOnMeasure(string text, TextChangeListener textChangeListener);

    string getText();

    setText(string text);

    int32_t getFontHeight();

    int32_t getWidth();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_TEXTINTERFACE_H
