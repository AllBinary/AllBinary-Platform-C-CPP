
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_CPP
        #define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/font/FontDebugBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //OpenGLESBaseJavaLibrary

FontDebugBase::FontDebugBase() {
        }
        auto FontDebugBase::instanceBase_owner() -> FontDebugBase* { static std::unique_ptr<FontDebugBase> value(new FontDebugBase()); return value.get(); }
FontDebugBase* FontDebugBase::instanceBase = FontDebugBase::instanceBase_owner();

    auto FontDebugBase::getInstance() -> FontDebugBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FontDebugBase::instanceBase;
    
}


    auto FontDebugBase::debugMetrics(Font* currentFont, float convertedTextSize, Object* displayMetrics, StringMaker* stringBuffer) -> void{
}


    auto FontDebugBase::debugDpi(int32_t densityDpi, StringMaker* stringBuffer) -> void{
}


    auto FontDebugBase::debugDimension(Font* currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker* stringBuffer) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_CPP
