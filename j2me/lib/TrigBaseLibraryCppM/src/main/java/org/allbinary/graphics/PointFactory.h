
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_POINTFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_POINTFACTORY_H

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GPoint.h"

class PointFactory
            : public Object
         {
        

    private: static const instance: PointFactory = new PointFactory();

    public static PointFactory getInstance();

    public ZERO_ZERO: GPoint = this.createXYZ(0, 0, 0)!;

    public init();

private constructor ();

    public GPoint createXY(int32_t x, int32_t y);

    public GPoint createXYZ(int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_POINTFACTORY_H
