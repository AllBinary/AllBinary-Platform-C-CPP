
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/special/SpecialAnimation.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "Animation.h"

class NullSpecialAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {
        

    private: static NULL_SPECIAL_ANIMATION_FACTORY: NullSpecialAnimationFactory = new NullSpecialAnimationFactory();

    public static NullSpecialAnimationFactory getFactoryInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullSpecialAnimationFactory.NULL_SPECIAL_ANIMATION_FACTORY;
    
}


private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpecialAnimation.getInstance();;
    
}


                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpecialAnimation.getInstance();;
    
}


    public setInitialScale(ScaleProperties scaleProperties){
}


};

            

