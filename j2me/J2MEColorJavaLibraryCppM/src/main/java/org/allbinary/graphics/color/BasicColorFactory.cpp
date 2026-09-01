
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"
#include "BasicColorUtil.h"

class BasicColorFactory
            : public Object
         {

    private: static BasicColorFactory instance() { return BasicColorFactory(); }

    public: static BasicColorFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorFactory::instance();
    
}


    public: BasicColor createInstance(int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColor(BasicColorUtil::getInstance().ALPHA, value, StringUtil::getInstance().EMPTY_STRING);
    
}


    public: BasicColor createInstanceA(int32_t alphaValue, int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColor(alphaValue, value, StringUtil::getInstance().EMPTY_STRING);
    
}


    public: BasicColor createInstanceAN(int32_t alphaValue, int32_t value, std::string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColor(alphaValue, value, name);
    
}


    public: BasicColor createInstanceARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b, std::string name){

    int32_t ALPHA_MASK = static_cast<int32_t>(0xFF000000);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColor(alphaValue, ((alphaValue<<24)&ALPHA_MASK) +((r<<16)&0x00FF0000) +((g<<8)&0x0000FF00) +(b&0x000000FF), StringUtil::getInstance().EMPTY_STRING);
    
}


    public: const BasicColor NULL_COLOR = this->createInstanceARGB(255, 255, 255, 255, "null color");

    public: const BasicColor TAN = this->createInstance(0xE9D8B5);

    public: const BasicColor SKIN_PINK = this->createInstance(0xFDCECE);

    public: const BasicColor RED = this->createInstanceAN(BasicColorUtil::getInstance().ALPHA, 0xFF0000, "red");

    public: const BasicColor LIGHT_RED = this->createInstanceAN(BasicColorUtil::getInstance().ALPHA, 0xFFA0A0, "light red");

    public: const BasicColor DARK_GREEN = this->createInstance(0x00FF00);

    public: const BasicColor GREEN = this->createInstanceAN(BasicColorUtil::getInstance().ALPHA, 0x00DD00, "green");

    public: const BasicColor LIGHT_GREEN = this->createInstance(0x007700);

    public: const BasicColor PURPLE = this->createInstanceAN(BasicColorUtil::getInstance().ALPHA, 0x400040, "purple");

    public: const BasicColor BLUE = this->createInstanceAN(BasicColorUtil::getInstance().ALPHA, 0x0000FF, "blue");

    public: const BasicColor LIGHT_BLUE = this->createInstance(0x00aaff);

    public: const BasicColor VERY_LIGHT_BLUE = this->createInstance(0x000033);

    public: const BasicColor PUCE = this->createInstance(0xFF00AA);

    public: const BasicColor AQUA = this->createInstance(0x00FFFF);

    public: const BasicColor YELLOW = this->createInstanceAN(BasicColorUtil::getInstance().ALPHA, 0xFFFF00, "yellow");

    public: const BasicColor PINK = this->createInstance(0xFF00FF);

    public: const BasicColor BLACK = this->createInstanceAN(BasicColorUtil::getInstance().ALPHA, 0x000000, "black");

    public: const BasicColor GREY = this->createInstanceAN(BasicColorUtil::getInstance().ALPHA, 0xAAAAAA, "grey");

    public: const BasicColor LIGHT_GREY = this->createInstance(0xC0C0C0);

    public: const BasicColor DARK_GREY = this->createInstance(0x404040);

    public: const BasicColor ORANGE = this->createInstance(0xe07718);

    public: const BasicColor BROWN = this->createInstance(0x956B00);

    public: const BasicColor WHITE = this->createInstance(0xFFFFFF);

    public: const BasicColor TRANSPARENT_COLOR = this->createInstanceAN(0x00000000, 0x000000, StringUtil::getInstance().EMPTY_STRING);

    public: const BasicColor TRANSPARENT_GREY = this->createInstanceAN(0x52000000, 0xECECEC, StringUtil::getInstance().EMPTY_STRING);

    public: const BasicColor TRANSPARENT_BLACK = this->createInstanceAN(0x52000000, 0x000000, StringUtil::getInstance().EMPTY_STRING);

    public: const BasicColor TRANSPARENT_RED = this->createInstanceAN(0x52000000, 0xFF0000, StringUtil::getInstance().EMPTY_STRING);

    public: const BasicColor CLEAR_COLOR = this->BLACK;

    public: const BasicColor BORDER_COLOR = this->WHITE;

};

            

