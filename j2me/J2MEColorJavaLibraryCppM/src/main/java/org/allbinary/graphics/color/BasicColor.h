
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLOR_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColorUtil.h"

class BasicColor
            : public Object
         {

    private: std::string name;

    private: int32_t value;

    private: float redComponent;

    private: float greenComponent;

    private: float blueComponent;

    private: float alphaComponent;

    public: int16_t red;

    public: int16_t green;

    public: int16_t blue;

    public: int16_t alpha;

: BasicColor(int32_t alphaValue, int32_t value, std::string name);

    public: int32_t intValue();

    public: int32_t toInt();

    public: std::string toString();

    public: std::string getName();

    public: float getRedComponent();

    public: float getGreenComponent();

    public: float getBlueComponent();

    public: float getAlphaComponent();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLOR_H
