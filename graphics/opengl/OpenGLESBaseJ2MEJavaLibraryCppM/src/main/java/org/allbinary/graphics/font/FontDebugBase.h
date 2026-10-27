
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H
        #define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //OpenGLESBaseJ2MEJavaLibrary
class FontDebugBase
            : public Object
         {

    private: static FontDebugBase* instanceBase() { static std::unique_ptr<FontDebugBase> value(new FontDebugBase()); return value.get(); }

    public: static FontDebugBase* getInstance();

    public: const std::string SET_FONT = "setFont";

    public: void debugMetrics(Font* currentFont, float convertedTextSize, Object* displayMetrics, StringMaker* stringBuffer);

    public: void debugDpi(int32_t densityDpi, StringMaker* stringBuffer);

    public: void debugDimension(Font* currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker* stringBuffer);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H
