
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //OpenGLESBaseJavaLibrary
class FontDebugBase
            : public Object
         {

    private: static const FontDebugBase instanceBase = FontDebugBase();

    public: static FontDebugBase getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FontDebugBase::instanceBase;
    
}


    public: const std::string SET_FONT = "setFont";

    public: void debugMetrics(Font currentFont, float convertedTextSize, Object* displayMetrics, StringMaker stringBuffer){
}


    public: void debugDpi(int32_t densityDpi, StringMaker stringBuffer){
}


    public: void debugDimension(Font currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker stringBuffer){
}


};

            

