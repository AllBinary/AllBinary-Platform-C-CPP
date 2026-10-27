
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Font;
class Graphics;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MyFontProcessor
            : public virtual Object
         {

    public: static int32_t defaultCharWidth(Font* font);

    public: static int32_t defaultStringWidth(Font* font, int32_t size);

    private: static MyFontProcessor* instance_owner();
    private: static MyFontProcessor* instance;

    public: static MyFontProcessor* getInstance();


            
    public: MyFontProcessor();
        
    public: void process(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif

        #endif
    
