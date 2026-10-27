
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_H
        #define ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyValueDrawString
            : public Object
        , public UpdateMyFontInterface {

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: std::string LABEL;

    private: int32_t labelX;

    private: int32_t valueX= 0;

    private: std::string value = StringUtil::getInstance()->EMPTY_STRING;

public: KeyValueDrawString(std::string label, int32_t x);

    public: void updateMeasurement(Graphics* graphics);

    public: void paint(Graphics* graphics, int32_t y);

    public: void update(std::string value);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_H
