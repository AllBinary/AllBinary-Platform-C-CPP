
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

            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MyFontProcessor
            : public Object
         {

    public: static int32_t defaultCharWidth(Font font);

    public: static int32_t defaultStringWidth(Font font, int32_t size);

    private: static MyFontProcessor instance() { return MyFontProcessor(); }

    public: static MyFontProcessor getInstance();

    public: void process(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_H
