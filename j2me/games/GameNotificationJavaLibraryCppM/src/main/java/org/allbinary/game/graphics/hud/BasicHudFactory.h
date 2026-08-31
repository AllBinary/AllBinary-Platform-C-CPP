
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
        



        #ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicHudFactory
            : public Object
         {
        

    private: static const instance: BasicHudFactory = new BasicHudFactory();

    public static BasicHudFactory getInstance();

private constructor ();

    public const DIRECTION_EXCEPTION: string = "Only Horizontal Direction is Allowed Currently";

    public const VERTICAL: int32_t = 0;

    public const HORIZONTAL: int32_t = 1;

    public const BOTTOMLEFT: int32_t = 0;

    public const BOTTOMRIGHT: int32_t = 1;

    public const TOPLEFT: int32_t = 2;

    public const TOPRIGHT: int32_t = 3;

    public const BOTTOMCENTER: int32_t = 4;

    public const TOPCENTER: int32_t = 5;

    public const ABSOLUTE: int32_t = 6;

};

            


        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H
