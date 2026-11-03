
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/threed/RatioProcessor.h"
//OpenGLNone

SWTJOGLProcessor::SWTJOGLProcessor() {
        }
        auto SWTJOGLProcessor::instance_owner() -> SWTJOGLProcessor* { static std::unique_ptr<SWTJOGLProcessor> value(new SWTJOGLProcessor()); return value.get(); }
SWTJOGLProcessor* SWTJOGLProcessor::instance = SWTJOGLProcessor::instance_owner();

    auto SWTJOGLProcessor::getInstance() -> SWTJOGLProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SWTJOGLProcessor::instance;
    
}


    auto SWTJOGLProcessor::init(Object* display, Object* comp) -> void{
}


    auto SWTJOGLProcessor::isHolderCreated() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto SWTJOGLProcessor::setRenderer(Object* renderer) -> void{
}


    auto SWTJOGLProcessor::isJOGL() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto SWTJOGLProcessor::createSurface() -> void{
}


    auto SWTJOGLProcessor::onSurfaceCreated() -> void{
}


    auto SWTJOGLProcessor::onSurfaceChangedForEvent(Object* event) -> void{
}


    auto SWTJOGLProcessor::onSurfaceChanged() -> void{
}


    auto SWTJOGLProcessor::onSurfaceChangedWH(int32_t width, int32_t height) -> void{
}


    auto SWTJOGLProcessor::addListener() -> void{
}


    auto SWTJOGLProcessor::addListeners(MIDlet* midlet) -> void{
}


    auto SWTJOGLProcessor::run() -> void{
}


    auto SWTJOGLProcessor::clear() -> void{
}


    auto SWTJOGLProcessor::setCustom(int32_t width, int32_t height, float ratio) -> void{
}


    auto SWTJOGLProcessor::setRatioProcessor(RatioProcessor* ratioProcessor) -> void{
}


    auto SWTJOGLProcessor::isPortraitRatioProcessor() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto SWTJOGLProcessor::charWidth(Font* font, char ch) -> int32_t{



                            throw RuntimeException();
                    
}


    auto SWTJOGLProcessor::charsWidth(Font* font, std::vector<char> ch, int32_t offset, int32_t length) -> int32_t{



                            throw RuntimeException();
                    
}


    auto SWTJOGLProcessor::stringWidth(Font* font, std::string str) -> int32_t{



                            throw RuntimeException();
                    
}


    auto SWTJOGLProcessor::substringWidth(Font* font, std::string str, int32_t offset, int32_t len) -> int32_t{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_CPP
