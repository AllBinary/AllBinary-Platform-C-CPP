
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H

            #include <vector>
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompoundAnimationInterfaceFactory.h"
#include "AutoCompoundRotationAnimation.h"

class AutoCompoundRotationAnimationInterfaceFactory: public CompoundAnimationInterfaceFactory {

public: AutoCompoundRotationAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory animationBehaviorFactory);

    protected: std::vector<Animation> createArray(int32_t size);

    protected: Animation createAnimation(std::vector<Animation> animationInterfaceArray);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
