
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
        



        #ifndef ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H
        #define ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerDistanceUtil
            : public Object
         {
        

    private: static const instance: LayerDistanceUtil = new LayerDistanceUtil();

    public static LayerDistanceUtil getInstance();

    private: const mathUtil: MathUtil = MathUtil.getInstance()!;

    public int32_t getDistance(AllBinaryLayer layerInterface, AllBinaryLayer layerInterface2);

    public int32_t getDistance3D(AllBinaryLayer layerInterface, AllBinaryLayer layerInterface2);

    public int32_t getDistanceAt(AllBinaryLayer layerInterface, GPoint point);

};

            


        #endif //ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H
