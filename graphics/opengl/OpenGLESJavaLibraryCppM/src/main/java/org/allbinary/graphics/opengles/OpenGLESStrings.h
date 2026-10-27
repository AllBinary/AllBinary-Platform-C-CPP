
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLESSTRINGS_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLESSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class GL10;

class Graphics;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLESStrings
            : public virtual Object
         {


            
    public: OpenGLESStrings();
        
                //@Throws(Exception.constructor)
            
    public: void set(GL10* gl);

    public: void initFont(GL10* gl, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: void update(GL10* gl, int32_t width, int32_t height);

    public: void drawChar(GL10* gl, Graphics* graphics, char character, int32_t x, int32_t y, int32_t anchor);

    public: void drawChars(GL10* gl, Graphics* graphics, std::vector<char> data, int32_t offset, int32_t length, int32_t x, int32_t y, int32_t anchor);

    public: void drawString(GL10* gl, Graphics* graphics, std::string string, int32_t x, int32_t y, int32_t anchor);

    public: void drawSubstring(GL10* gl, Graphics* graphics, std::string string, int32_t offset, int32_t len, int32_t x, int32_t y, int32_t anchor);

    public: int32_t charWidth(char ch);

    public: int32_t charsWidth(std::vector<char> ch, int32_t offset, int32_t length);

    public: int32_t stringWidth(std::string string);

    public: int32_t stringWidth(std::string string, int32_t offset, int32_t len);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLESSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLESSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLESSTRINGS_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif

#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif

        #endif
    
