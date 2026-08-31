
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/vector/VectorInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "VectorAnimationFactoryInterface.h"
#include "VectorRotationGenerator.h"
#include "VectorExplosionGenerator.h"
#include "IndexedAnimation.h"
#include "Animation.h"

class IndependentVectorExplosionRotationAnimationFactory
            : public Object
        : public ProceduralAnimationInterfaceFactoryInterface {
        

    private: framePoints: std::vector<std::vector<std::vector<int32_t>>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY_ARRAY;

    private: vectorInfo: VectorInfo;

    private: basicColor: BasicColor;

    private: vectorAnimationFactoryInterface: VectorAnimationFactoryInterface;

public constructor (VectorInfo vectorInfo, BasicColor basicColor, VectorAnimationFactoryInterface vectorAnimationFactoryInterface);

                //@Throws(Exception.constructor)
            
    init();

    private: const vectorExplosionGenerator: VectorExplosionGenerator = VectorExplosionGenerator.getInstance()!;

                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H
