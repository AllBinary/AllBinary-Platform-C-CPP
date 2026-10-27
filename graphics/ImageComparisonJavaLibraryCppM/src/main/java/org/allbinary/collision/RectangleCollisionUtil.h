
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
        



        #ifndef ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_H
        #define ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>
class GPoint;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Rectangle;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RectangleCollisionUtil
            : public virtual Object
         {

    public: static bool isCollision(Rectangle* rectangle, GPoint* point);

    public: static bool isCollision(Rectangle* rectangle1, Rectangle* rectangle2);

    private: static bool isCollision(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2);

private: RectangleCollisionUtil();

};

            


        #endif //ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include("org/allbinary/collision/Rectangle.h")
#include "org/allbinary/collision/Rectangle.h"
#endif

        #endif
    
