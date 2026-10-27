
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/collision/Rectangle.h"

class RectangleCollisionUtil
            : public Object
         {

    public: static bool isCollision(Rectangle* rectangle, GPoint* point);

    public: static bool isCollision(Rectangle* rectangle1, Rectangle* rectangle2);

    private: static bool isCollision(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2);

private: RectangleCollisionUtil();

};

            


        #endif //ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_H
