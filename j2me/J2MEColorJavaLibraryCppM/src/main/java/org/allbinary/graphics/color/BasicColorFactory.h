
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H

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
        

    private: static const instance: BasicColorFactory = new BasicColorFactory();

    public static BasicColorFactory getInstance();

    public BasicColor createInstance(int32_t value);

    public BasicColor createInstanceA(int32_t alphaValue, int32_t value);

    public BasicColor createInstanceAN(int32_t alphaValue, int32_t value, string name);

    public BasicColor createInstanceARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b, string name);

    public const NULL_COLOR: BasicColor = this.createInstanceARGB(255, 255, 255, 255, "null color")!;

    public const TAN: BasicColor = this.createInstance(0xE9D8B5)!;

    public const SKIN_PINK: BasicColor = this.createInstance(0xFDCECE)!;

    public const RED: BasicColor = this.createInstanceAN(BasicColorUtil.getInstance()!.ALPHA, 0xFF0000, "red")!;

    public const LIGHT_RED: BasicColor = this.createInstanceAN(BasicColorUtil.getInstance()!.ALPHA, 0xFFA0A0, "light red")!;

    public const DARK_GREEN: BasicColor = this.createInstance(0x00FF00)!;

    public const GREEN: BasicColor = this.createInstanceAN(BasicColorUtil.getInstance()!.ALPHA, 0x00DD00, "green")!;

    public const LIGHT_GREEN: BasicColor = this.createInstance(0x007700)!;

    public const PURPLE: BasicColor = this.createInstanceAN(BasicColorUtil.getInstance()!.ALPHA, 0x400040, "purple")!;

    public const BLUE: BasicColor = this.createInstanceAN(BasicColorUtil.getInstance()!.ALPHA, 0x0000FF, "blue")!;

    public const LIGHT_BLUE: BasicColor = this.createInstance(0x00aaff)!;

    public const VERY_LIGHT_BLUE: BasicColor = this.createInstance(0x000033)!;

    public const PUCE: BasicColor = this.createInstance(0xFF00AA)!;

    public const AQUA: BasicColor = this.createInstance(0x00FFFF)!;

    public const YELLOW: BasicColor = this.createInstanceAN(BasicColorUtil.getInstance()!.ALPHA, 0xFFFF00, "yellow")!;

    public const PINK: BasicColor = this.createInstance(0xFF00FF)!;

    public const BLACK: BasicColor = this.createInstanceAN(BasicColorUtil.getInstance()!.ALPHA, 0x000000, "black")!;

    public const GREY: BasicColor = this.createInstanceAN(BasicColorUtil.getInstance()!.ALPHA, 0xAAAAAA, "grey")!;

    public const LIGHT_GREY: BasicColor = this.createInstance(0xC0C0C0)!;

    public const DARK_GREY: BasicColor = this.createInstance(0x404040)!;

    public const ORANGE: BasicColor = this.createInstance(0xe07718)!;

    public const BROWN: BasicColor = this.createInstance(0x956B00)!;

    public const WHITE: BasicColor = this.createInstance(0xFFFFFF)!;

    public const TRANSPARENT_COLOR: BasicColor = this.createInstanceAN(0x00000000, 0x000000, StringUtil.getInstance()!.EMPTY_STRING)!;

    public const TRANSPARENT_GREY: BasicColor = this.createInstanceAN(0x52000000, 0xECECEC, StringUtil.getInstance()!.EMPTY_STRING)!;

    public const TRANSPARENT_BLACK: BasicColor = this.createInstanceAN(0x52000000, 0x000000, StringUtil.getInstance()!.EMPTY_STRING)!;

    public const TRANSPARENT_RED: BasicColor = this.createInstanceAN(0x52000000, 0xFF0000, StringUtil.getInstance()!.EMPTY_STRING)!;

    public const CLEAR_COLOR: BasicColor = this.BLACK;

    public const BORDER_COLOR: BasicColor = this.WHITE;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H
