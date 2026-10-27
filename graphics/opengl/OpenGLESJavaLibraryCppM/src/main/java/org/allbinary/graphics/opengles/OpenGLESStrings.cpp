
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLESSTRINGS_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLESSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLESStrings.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLESStrings::OpenGLESStrings() {
        }
        
                //@Throws(Exception.constructor)
            
    auto OpenGLESStrings::set(GL10* gl) -> void{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::initFont(GL10* gl, int32_t width, int32_t height) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLESStrings::update(GL10* gl, int32_t width, int32_t height) -> void{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::drawChar(GL10* gl, Graphics* graphics, char character, int32_t x, int32_t y, int32_t anchor) -> void{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::drawChars(GL10* gl, Graphics* graphics, std::vector<char> data, int32_t offset, int32_t length, int32_t x, int32_t y, int32_t anchor) -> void{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::drawString(GL10* gl, Graphics* graphics, std::string string, int32_t x, int32_t y, int32_t anchor) -> void{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::drawSubstring(GL10* gl, Graphics* graphics, std::string string, int32_t offset, int32_t len, int32_t x, int32_t y, int32_t anchor) -> void{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::charWidth(char ch) -> int32_t{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::charsWidth(std::vector<char> ch, int32_t offset, int32_t length) -> int32_t{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::stringWidth(std::string string) -> int32_t{



                            throw RuntimeException();
                    
}


    auto OpenGLESStrings::stringWidth(std::string string, int32_t offset, int32_t len) -> int32_t{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLESSTRINGS_CPP
