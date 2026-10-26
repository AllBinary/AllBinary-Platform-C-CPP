
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
        #define ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "NullAnimationFactory.h"
#include "Animation.h"

class AnimationInterfaceFactoryInterfaceComposite
            : public Object
        : public AnimationInterfaceFactoryInterface {

    private: std::vector<AnimationInterfaceFactoryInterface> animationInterfaceFactoryInterfaceArray;

public: AnimationInterfaceFactoryInterfaceComposite(std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

    public: std::vector<AnimationInterfaceFactoryInterface> getAnimationInterfaceFactoryInterfaceArray();

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
