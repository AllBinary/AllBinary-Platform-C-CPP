
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //OpenGLESBaseJavaLibrary
class FontDebugBase
            : public Object
         {
        

    private: static const instanceBase: FontDebugBase = new FontDebugBase();

    public static FontDebugBase getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FontDebugBase.instanceBase;
    
}


    public const SET_FONT: string = "setFont";

    public debugMetrics(Font currentFont, float convertedTextSize, any = {} displayMetrics, StringMaker stringBuffer){
}


    public debugDpi(int32_t densityDpi, StringMaker stringBuffer){
}


    public debugDimension(Font currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker stringBuffer){
}


};

            

