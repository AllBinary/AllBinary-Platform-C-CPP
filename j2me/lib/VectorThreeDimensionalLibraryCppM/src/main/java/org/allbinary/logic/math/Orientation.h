
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H
        #define ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicDecimal.h"

class Orientation
            : public Object
         {
        

    public static NONE: Orientation = new Orientation(0, 0, 0);

    private: static SINGLETON: Orientation = new Orientation(0, 0, 0);

    public static Orientation getInstance(int32_t yaw, int32_t pitch, int32_t roll);

    public yaw: BasicDecimal = new BasicDecimal(0);

    public pitch: BasicDecimal = new BasicDecimal(0);

    public roll: BasicDecimal = new BasicDecimal(0);

private constructor (int32_t yaw, int32_t pitch, int32_t roll);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H
