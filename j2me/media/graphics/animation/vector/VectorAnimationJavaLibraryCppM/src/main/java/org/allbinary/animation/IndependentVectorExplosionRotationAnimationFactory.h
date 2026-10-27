
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/vector/VectorInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#include "org/allbinary/animation/VectorRotationGenerator.h"
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/Animation.h"

class IndependentVectorExplosionRotationAnimationFactory
            : public Object
        , public ProceduralAnimationInterfaceFactoryInterface {

    private: std::vector<std::vector<std::vector<int32_t>>> framePoints = NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;

    private: VectorInfo* vectorInfo;

    private: BasicColor* basicColor;

    private: VectorAnimationFactoryInterface* vectorAnimationFactoryInterface;

public: IndependentVectorExplosionRotationAnimationFactory(VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface);

                //@Throws(Exception.constructor)
            
    protected: void init();

    private: VectorExplosionGenerator* vectorExplosionGenerator = VectorExplosionGenerator::getInstance();

                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H
