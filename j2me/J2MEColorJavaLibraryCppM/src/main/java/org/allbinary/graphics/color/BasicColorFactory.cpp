
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

class BasicColorFactory
            : public Object
         {

    private: static BasicColorFactory* instance() { static std::unique_ptr<BasicColorFactory> value(new BasicColorFactory()); return value.get(); }

    public: static BasicColorFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory::instance();
    
}


    public: BasicColor* createInstance(int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicColor(BasicColorUtil::getInstance()->ALPHA, value, StringUtil::getInstance()->EMPTY_STRING);
    
}


    public: BasicColor* createInstanceA(int32_t alphaValue, int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicColor(alphaValue, value, StringUtil::getInstance()->EMPTY_STRING);
    
}


    public: BasicColor* createInstanceAN(int32_t alphaValue, int32_t value, std::string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicColor(alphaValue, value, name);
    
}


    public: BasicColor* createInstanceARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b, std::string name){

    int32_t ALPHA_MASK = static_cast<int32_t>(0xFF000000);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicColor(alphaValue, ((alphaValue<<24)&ALPHA_MASK) +((r<<16)&0x00FF0000) +((g<<8)&0x0000FF00) +(b&0x000000FF), StringUtil::getInstance()->EMPTY_STRING);
    
}


    public: BasicColor* NULL_COLOR = this->createInstanceARGB(255, 255, 255, 255, "null color");

    public: BasicColor* TAN = this->createInstance(0xE9D8B5);

    public: BasicColor* SKIN_PINK = this->createInstance(0xFDCECE);

    public: BasicColor* RED = this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0xFF0000, "red");

    public: BasicColor* LIGHT_RED = this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0xFFA0A0, "light red");

    public: BasicColor* DARK_GREEN = this->createInstance(0x00FF00);

    public: BasicColor* GREEN = this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0x00DD00, "green");

    public: BasicColor* LIGHT_GREEN = this->createInstance(0x007700);

    public: BasicColor* PURPLE = this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0x400040, "purple");

    public: BasicColor* BLUE = this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0x0000FF, "blue");

    public: BasicColor* LIGHT_BLUE = this->createInstance(0x00aaff);

    public: BasicColor* VERY_LIGHT_BLUE = this->createInstance(0x000033);

    public: BasicColor* PUCE = this->createInstance(0xFF00AA);

    public: BasicColor* AQUA = this->createInstance(0x00FFFF);

    public: BasicColor* YELLOW = this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0xFFFF00, "yellow");

    public: BasicColor* PINK = this->createInstance(0xFF00FF);

    public: BasicColor* BLACK = this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0x000000, "black");

    public: BasicColor* GREY = this->createInstanceAN(BasicColorUtil::getInstance()->ALPHA, 0xAAAAAA, "grey");

    public: BasicColor* LIGHT_GREY = this->createInstance(0xC0C0C0);

    public: BasicColor* DARK_GREY = this->createInstance(0x404040);

    public: BasicColor* ORANGE = this->createInstance(0xe07718);

    public: BasicColor* BROWN = this->createInstance(0x956B00);

    public: BasicColor* WHITE = this->createInstance(0xFFFFFF);

    public: BasicColor* TRANSPARENT_COLOR = this->createInstanceAN(0x00000000, 0x000000, StringUtil::getInstance()->EMPTY_STRING);

    public: BasicColor* TRANSPARENT_GREY = this->createInstanceAN(0x52000000, 0xECECEC, StringUtil::getInstance()->EMPTY_STRING);

    public: BasicColor* TRANSPARENT_BLACK = this->createInstanceAN(0x52000000, 0x000000, StringUtil::getInstance()->EMPTY_STRING);

    public: BasicColor* TRANSPARENT_RED = this->createInstanceAN(0x52000000, 0xFF0000, StringUtil::getInstance()->EMPTY_STRING);

    public: BasicColor* CLEAR_COLOR = this->BLACK;

    public: BasicColor* BORDER_COLOR = this->WHITE;

};

            

