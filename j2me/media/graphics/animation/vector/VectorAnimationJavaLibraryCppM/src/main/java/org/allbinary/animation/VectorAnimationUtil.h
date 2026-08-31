
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONUTIL_H
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONUTIL_H

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorAnimationUtil
            : public Object
         {
        

    private: static const instance: VectorAnimationUtil = new VectorAnimationUtil();

    public static VectorAnimationUtil getInstance();

private constructor ();

    public std::vector<std::vector<std::vector<int32_t>>> toAnimationArrayFromListOfPointListWithPointsPerFrame(BasicArrayList vector, int32_t pointsPerFrame);

    public std::vector<std::vector<std::vector<int32_t>>> toAnimationArrayFromListOfPointList(BasicArrayList vector);

    public std::vector<std::vector<int32_t>> toFrameArrayFromPointBasicArrayList(BasicArrayList list);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATIONUTIL_H
