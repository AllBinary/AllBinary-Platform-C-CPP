
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GPoint;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RectangleCollisionUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RectangleCollisionPointUtil
            : public virtual Object
         {

    public: static bool allPointsInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list);

    public: static bool allPointsInsideCell(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list, int32_t xCellSize, int32_t yCellSize);

private: RectangleCollisionPointUtil();

};

            


        #endif //ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_RECTANGLECOLLISIONPOINTUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/math/RectangleCollisionUtil.h")
#include "org/allbinary/math/RectangleCollisionUtil.h"
#endif

        #endif
    
