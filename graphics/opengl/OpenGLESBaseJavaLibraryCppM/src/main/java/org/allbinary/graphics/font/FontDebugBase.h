
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H
        #define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Font;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //OpenGLESBaseJavaLibrary
class FontDebugBase
            : public virtual Object
         {

    private: static FontDebugBase* instanceBase_owner();
    private: static FontDebugBase* instanceBase;

    public: static FontDebugBase* getInstance();


            
    public: FontDebugBase();
        
    public: const std::string SET_FONT = "setFont";

    public: void debugMetrics(Font* currentFont, float convertedTextSize, Object* displayMetrics, StringMaker* stringBuffer);
    public: void debugMetrics(Font* currentFont, float convertedTextSize, const std::string& displayMetrics, StringMaker* stringBuffer) { return debugMetrics(currentFont, convertedTextSize, JavaString::box(displayMetrics), stringBuffer); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void debugMetrics(Font* currentFont, float convertedTextSize, BoxValue displayMetrics, StringMaker* stringBuffer) { return debugMetrics(currentFont, convertedTextSize, JavaBoxes::toObject(displayMetrics), stringBuffer); }

    public: void debugDpi(int32_t densityDpi, StringMaker* stringBuffer);

    public: void debugDimension(Font* currentFont, float convertedTextSize, int32_t longestDimensionTotalPixels, StringMaker* stringBuffer);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGBASE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
