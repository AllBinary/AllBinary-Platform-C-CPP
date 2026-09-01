
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H
        #define ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DrawStringUtil.h"

class CanvasDrawLineString
            : public Object
        : public UpdateMyFontInterface {

    public: static const CanvasDrawLineString NULL_CANVAS_DRAW_LINE_STRING = CanvasDrawLineString(0, 0);

    private: const DrawStringUtil drawStringUtil = DrawStringUtil::getInstance();

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: int32_t x;

    private: int32_t y;

    private: int32_t fontHeight = 0;

public: CanvasDrawLineString(int32_t x, int32_t y);

    public: void updateMeasurement(Graphics graphics);

    public: void paint(Graphics graphics, std::string string, int32_t line);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H
