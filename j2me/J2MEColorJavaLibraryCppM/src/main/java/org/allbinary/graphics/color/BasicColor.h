
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

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColorUtil.h"

class BasicColor
            : public Object
         {
        

    private: const name: string;

    private: const value: int32_t;

    private: const redComponent: float;

    private: const greenComponent: float;

    private: const blueComponent: float;

    private: const alphaComponent: float;

    public const red: int16_t;

    public const green: int16_t;

    public const blue: int16_t;

    public const alpha: int16_t;

 constructor (int32_t alphaValue, int32_t value, string name);

    public int32_t intValue();

    public int32_t toInt();

    public string toString();

    public string getName();

    public float getRedComponent();

    public float getGreenComponent();

    public float getBlueComponent();

    public float getAlphaComponent();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLOR_H
