
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H
        #define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //OpenGLESBaseJ2MEJavaLibrary
class FontDebugBase
            : public Object
         {
        

    private: static const instanceBase: FontDebugBase = new FontDebugBase();

    public static FontDebugBase getInstance();

    public const SET_FONT: string = "setFont";

    public debugMetrics(Font currentFont, float convertedTextSize, any = {} displayMetrics, StringMaker stringBuffer);

    public debugDpi(int32_t densityDpi, StringMaker stringBuffer);

    public debugDimension(Font currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker stringBuffer);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H
