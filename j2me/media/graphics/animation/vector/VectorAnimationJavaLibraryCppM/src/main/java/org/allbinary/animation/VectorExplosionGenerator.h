
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H
        #define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/pipeline/RandomRotationFactory.h>

      
#include <org/allbinary/graphics/pipeline/RandomTranslation.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorExplosionType.h"
#include "VectorAnimationUtil.h"

class VectorExplosionGenerator
            : public Object
         {
        

    private: static const instance: VectorExplosionGenerator = new VectorExplosionGenerator();

    public static VectorExplosionGenerator getInstance();

    public const RANDOM: VectorExplosionType = new VectorExplosionType();

    public const ROTATION: VectorExplosionType = new VectorExplosionType();

    private: const vectorAnimationUtil: VectorAnimationUtil = VectorAnimationUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public BasicArrayList createList(BasicArrayList list, int32_t howMuch, VectorExplosionType type);

                //@Throws(Exception.constructor)
            
    public std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getInstanceStartFrame(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type, bool startFrame);

    private: const randomRotationFactory: RandomRotationFactory = RandomRotationFactory.getInstance()!;

                //@Throws(Exception.constructor)
            
    BasicArrayList createListFromPoints(BasicArrayList tempBasicArrayList, std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type);

                //@Throws(Exception.constructor)
            
    BasicArrayList createPointsBasicArrayList(std::vector<std::vector<int32_t>> points);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H
