
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
        



        #ifndef ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H
        #define ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RectangleCollisionUtil.h"

class RectangleCollisionPointUtil
            : public Object
         {

    public: static bool allPointsInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList list);

    public: static bool allPointsInsideCell(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList list, int32_t xCellSize, int32_t yCellSize);

private: RectangleCollisionPointUtil();

};

            


        #endif //ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H
