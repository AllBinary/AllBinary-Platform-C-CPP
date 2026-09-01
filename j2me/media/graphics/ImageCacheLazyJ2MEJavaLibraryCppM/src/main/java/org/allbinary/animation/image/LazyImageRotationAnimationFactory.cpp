
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "LazyImageRotationAnimation.h"

class LazyImageRotationAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {

    private: int32_t layoutIndex;

    private: BaseImageAnimationFactory animationInterfaceFactoryInterface;

    public: ScaleProperties scaleProperties = ScaleProperties::instance();

public: LazyImageRotationAnimationFactory(int32_t layoutIndex, int32_t associatedLazyAnimationId, BaseImageAnimationFactory animationInterfaceFactoryInterface){
this->layoutIndex= layoutIndex;
    
this->animationInterfaceFactoryInterface= animationInterfaceFactoryInterface;
    
ImageCacheFactory::getInstance().hasAnyLazyAnimationFactories= true;
    

                        if(this->animationInterfaceFactoryInterface.animationBehaviorFactory == AnimationBehaviorFactory::getInstance())
                        
                                    {
                                    ForcedLogUtil::log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){

                        if(this->animationInterfaceFactoryInterface.getImage().isReady())
                        
                                    {
                                    this->animationInterfaceFactoryInterface.setInitialScale(this->scaleProperties);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceFactoryInterface.getInstance(instanceId);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LazyImageRotationAnimation(this->layoutIndex, instanceId, scaleProperties, this->animationInterfaceFactoryInterface, this->animationInterfaceFactoryInterface.animationBehaviorFactory.getOrCreateInstance());
    

                        }
                            
}


    public: void setInitialScale(ScaleProperties scaleProperties){
this->scaleProperties= scaleProperties;
    
}


};

            

