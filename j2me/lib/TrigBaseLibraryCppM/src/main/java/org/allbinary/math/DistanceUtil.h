
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
        



        #ifndef ORG_ALLBINARY_MATH_DISTANCEUTIL_H
        #define ORG_ALLBINARY_MATH_DISTANCEUTIL_H

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/logic/math/MathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DistanceUtil
            : public Object
         {
        

    private: static const instance: DistanceUtil = new DistanceUtil();

    public static DistanceUtil getInstance();

    private: const mathUtil: MathUtil = MathUtil.getInstance()!;

    public int32_t getDistance(int32_t x1, int32_t y1, int32_t x2, int32_t y2);

};

            


        #endif //ORG_ALLBINARY_MATH_DISTANCEUTIL_H
