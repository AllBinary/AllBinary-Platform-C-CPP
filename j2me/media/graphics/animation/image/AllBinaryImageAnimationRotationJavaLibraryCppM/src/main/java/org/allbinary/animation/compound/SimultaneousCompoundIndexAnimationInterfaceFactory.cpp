
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
        

    private: const basicAnimationInterfaceFactoryInterfaceArray: std::vector<AnimationInterfaceFactoryInterface>;

    private: const animationBehaviorFactory: AnimationBehaviorFactory;

public constructor (std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory animationBehaviorFactory){

            super();
        this.basicAnimationInterfaceFactoryInterfaceArray= basicAnimationInterfaceFactoryInterfaceArray;
    
this.animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId){

    size: int32_t = this.basicAnimationInterfaceFactoryInterfaceArray!.length
                ;;
    

    animationInterfaceArray: std::vector<IndexedAnimation> = new Array(size);;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
animationInterfaceArray[index]= this.basicAnimationInterfaceFactoryInterfaceArray[index]!.getInstance(instanceId) as IndexedAnimation;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getOrCreate(animationInterfaceArray);;
    
}


    Animation getOrCreate(std::vector<IndexedAnimation> animationInterfaceArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new SimultaneousCompoundIndexAnimation(animationInterfaceArray, this.animationBehaviorFactory!.getOrCreateInstance());
    
}


    public std::vector<AnimationInterfaceFactoryInterface> getBasicAnimationInterfaceFactoryInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicAnimationInterfaceFactoryInterfaceArray;
    
}


    public setInitialScale(ScaleProperties scaleProperties){
}


};

            

