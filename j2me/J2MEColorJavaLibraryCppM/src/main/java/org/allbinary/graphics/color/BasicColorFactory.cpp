
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/BasicColorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"


BasicColorFactory::BasicColorFactory() : NULL_COLOR(this->createInstanceARGB(255, 255, 255, 255, "null color")), TAN(this->createInstance(0xE9D8B5)), SKIN_PINK(this->createInstance(0xFDCECE)), RED(this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0xFF0000, "red")), LIGHT_RED(this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0xFFA0A0, "light red")), DARK_GREEN(this->createInstance(0x00FF00)), GREEN(this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0x00DD00, "green")), LIGHT_GREEN(this->createInstance(0x007700)), PURPLE(this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0x400040, "purple")), BLUE(this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0x0000FF, "blue")), LIGHT_BLUE(this->createInstance(0x00aaff)), VERY_LIGHT_BLUE(this->createInstance(0x000033)), PUCE(this->createInstance(0xFF00AA)), AQUA(this->createInstance(0x00FFFF)), YELLOW(this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0xFFFF00, "yellow")), PINK(this->createInstance(0xFF00FF)), BLACK(this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0x000000, "black")), GREY(this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0xAAAAAA, "grey")), LIGHT_GREY(this->createInstance(0xC0C0C0)), DARK_GREY(this->createInstance(0x404040)), ORANGE(this->createInstance(0xe07718)), BROWN(this->createInstance(0x956B00)), WHITE(this->createInstance(0xFFFFFF)), TRANSPARENT_COLOR(this->createInstanceAN(0x00000000, 0x000000, StringUtil::getInstance()->EMPTY_STRING)), TRANSPARENT_GREY(this->createInstanceAN(0x52000000, 0xECECEC, StringUtil::getInstance()->EMPTY_STRING)), TRANSPARENT_BLACK(this->createInstanceAN(0x52000000, 0x000000, StringUtil::getInstance()->EMPTY_STRING)), TRANSPARENT_RED(this->createInstanceAN(0x52000000, 0xFF0000, StringUtil::getInstance()->EMPTY_STRING)), CLEAR_COLOR(this->BLACK), BORDER_COLOR(this->WHITE) {
        }
        auto BasicColorFactory::instance_owner() -> BasicColorFactory* { static std::unique_ptr<BasicColorFactory> value(new BasicColorFactory()); return value.get(); }
BasicColorFactory* BasicColorFactory::instance = BasicColorFactory::instance_owner();

    auto BasicColorFactory::getInstance() -> BasicColorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory::instance;
    
}


    auto BasicColorFactory::createInstance(int32_t value) -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicColor(BasicColorUtil::getInstance()->ALPHA, value, StringUtil::getInstance()->EMPTY_STRING);
    
}


    auto BasicColorFactory::createInstanceA(int32_t alphaValue, int32_t value) -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicColor(alphaValue, value, StringUtil::getInstance()->EMPTY_STRING);
    
}


    auto BasicColorFactory::createInstanceAN(int32_t alphaValue, int32_t value, std::string name) -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicColor(alphaValue, value, name);
    
}


    auto BasicColorFactory::createInstanceARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b, std::string name) -> BasicColor*{

    int32_t ALPHA_MASK = static_cast<int32_t>(0xFF000000);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicColor(alphaValue, ((alphaValue<<24)&ALPHA_MASK) +((r<<16)&0x00FF0000) +((g<<8)&0x0000FF00) +(b&0x000000FF), StringUtil::getInstance()->EMPTY_STRING);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_CPP
