
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimultaneousCompoundIndexAnimation.h"

class SimultaneousCompoundIndexAnimationInterfaceFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {

    private: std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray;

    private: AnimationBehaviorFactory animationBehaviorFactory;

public: SimultaneousCompoundIndexAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

    protected: Animation getOrCreate(std::vector<IndexedAnimation> animationInterfaceArray);

    public: std::vector<AnimationInterfaceFactoryInterface> getBasicAnimationInterfaceFactoryInterfaceArray();

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_H
