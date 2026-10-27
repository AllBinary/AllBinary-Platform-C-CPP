
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/text/TextChangeListener.h"

class TextInterface {

    public: virtual void setTextWithOnMeasure(std::string text, TextChangeListener* textChangeListener) = 0;

    public: virtual std::string getText() = 0;

    public: virtual void setText(std::string text) = 0;

    public: virtual int32_t getFontHeight() = 0;

    public: virtual int32_t getWidth() = 0;

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_TEXTINTERFACE_H
