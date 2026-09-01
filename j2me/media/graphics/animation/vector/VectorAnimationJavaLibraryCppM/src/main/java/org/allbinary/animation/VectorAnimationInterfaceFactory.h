
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_H

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "AnimationBehaviorFactory.h"
#include "VectorAnimation.h"
#include "Animation.h"

class VectorAnimationInterfaceFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {

    private: std::vector<std::vector<std::vector<int32_t>>> currentPoints;

    private: BasicColor basicColor = BasicColorFactory::getInstance().WHITE;

    protected: AnimationBehaviorFactory animationBehaviorFactory;

public: VectorAnimationInterfaceFactory(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

    protected: void setBasicColorP(BasicColor basicColor);

    protected: BasicColor getBasicColorP();

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_H
