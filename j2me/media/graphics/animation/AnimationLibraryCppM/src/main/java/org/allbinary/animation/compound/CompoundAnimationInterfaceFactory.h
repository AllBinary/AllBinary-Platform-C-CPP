
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACEFACTORY_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CompoundAnimationInterfaceFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {

    protected: std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArrayP;

    protected: AnimationBehaviorFactory animationBehaviorFactory;

public: CompoundAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

    protected: std::vector<Animation> createArray(int32_t size);

    protected: Animation createAnimation(std::vector<Animation> animationInterfaceArray);

    public: std::vector<AnimationInterfaceFactoryInterface> getBasicAnimationInterfaceFactoryInterfaceArray();

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACEFACTORY_H
