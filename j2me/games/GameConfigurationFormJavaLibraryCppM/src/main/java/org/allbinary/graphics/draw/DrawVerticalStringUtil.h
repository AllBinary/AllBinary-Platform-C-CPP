
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
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
        
class DrawVerticalStringUtil
            : public Object
         {
        

    private: static const instance: DrawVerticalStringUtil = new DrawVerticalStringUtil();

    public static DrawVerticalStringUtil getInstance();

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: charHeight: int32_t= 0;

    private: offsetY: int32_t= 0;

    private: offsetXArray: std::vector<int32_t> = NullUtil.getInstance()!.NULL_INT_ARRAY;

    public updateMeasurement(Graphics graphics, string string);

    public paintVerticle(Graphics graphics, string string, int32_t x, int32_t y, int32_t anchor);

    public drawCenterString(Graphics graphics, string string, int32_t offset, int32_t length, int32_t x, int32_t y);

    public drawCenterStrings(Graphics graphics, std::vector<string> stringArray, int32_t maxWidth, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H
