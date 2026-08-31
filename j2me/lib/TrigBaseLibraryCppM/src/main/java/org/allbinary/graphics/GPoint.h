
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_GPOINT_H
        #define ORG_ALLBINARY_GRAPHICS_GPOINT_H

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GPoint
            : public Object
         {
        

    public static GPoint getInstance(GPoint point);

    private: static const POINT_LABEL: string = "Point: ";

    public static string toStringStatic(int32_t x, int32_t y, int32_t z);

    private: const x: int32_t;

    private: const y: int32_t;

    private: const z: int32_t;

public constructor (int32_t x, int32_t y, int32_t z);

    public int32_t getX();

    public int32_t getY();

    public int32_t getZ();

    public int32_t getRawX();

    public int32_t getRawY();

    public int32_t getRawZ();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_GPOINT_H
