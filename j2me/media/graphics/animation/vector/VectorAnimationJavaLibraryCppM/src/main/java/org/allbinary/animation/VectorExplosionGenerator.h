
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

            #include <vector>
        
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

    private: static VectorExplosionGenerator instance() { return VectorExplosionGenerator(); }

    public: static VectorExplosionGenerator getInstance();

    public: const VectorExplosionType RANDOM = VectorExplosionType();

    public: const VectorExplosionType ROTATION = VectorExplosionType();

    private: const VectorAnimationUtil vectorAnimationUtil = VectorAnimationUtil::getInstance();

private: VectorExplosionGenerator();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList createList(BasicArrayList list, int32_t howMuch, VectorExplosionType type);

                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getInstanceStartFrame(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type, bool startFrame);

    private: const RandomRotationFactory randomRotationFactory = RandomRotationFactory::getInstance();

                //@Throws(Exception.constructor)
            
    private: BasicArrayList createListFromPoints(BasicArrayList tempBasicArrayList, std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType type);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList createPointsBasicArrayList(std::vector<std::vector<int32_t>> points);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H
