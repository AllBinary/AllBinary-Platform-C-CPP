
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_DRAWSTRINGUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_DRAW_DRAWSTRINGUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DrawStringUtil
            : public Object
         {

    private: static DrawStringUtil instance() { return DrawStringUtil(); }

    public: static DrawStringUtil getInstance();

    private: const std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;

    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void drawCenterString(Graphics graphics, std::string string, int32_t offset, int32_t length, int32_t x, int32_t y);

    public: void drawCenterStrings(Graphics graphics, std::vector<std::string> stringArray, int32_t maxWidth, int32_t charHeight, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_DRAWSTRINGUTIL_H
