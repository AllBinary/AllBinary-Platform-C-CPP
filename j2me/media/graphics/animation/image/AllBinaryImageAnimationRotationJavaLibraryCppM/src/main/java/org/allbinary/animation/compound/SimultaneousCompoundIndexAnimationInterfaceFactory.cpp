
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/compound/SimultaneousCompoundIndexAnimation.h"

class SimultaneousCompoundIndexAnimationInterfaceFactory
            : public Object
        , public AnimationInterfaceFactoryInterface {

    private: std::vector<AnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray;

    private: AnimationBehaviorFactory* animationBehaviorFactory;

public: SimultaneousCompoundIndexAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory){
this->basicAnimationInterfaceFactoryInterfaceArray= basicAnimationInterfaceFactoryInterfaceArray;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId){

    int32_t size = this->basicAnimationInterfaceFactoryInterfaceArray.size();;
    

    std::vector<IndexedAnimation*> animationInterfaceArray = std::vector<IndexedAnimation*>(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
animationInterfaceArray[index]= dynamic_cast<IndexedAnimation*>(this->basicAnimationInterfaceFactoryInterfaceArray[index].getInstance(instanceId));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getOrCreate(animationInterfaceArray);;
    
}


    protected: Animation* getOrCreate(std::vector<IndexedAnimation*> animationInterfaceArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new SimultaneousCompoundIndexAnimation(animationInterfaceArray, this->animationBehaviorFactory->getOrCreateInstance());
    
}


    public: std::vector<AnimationInterfaceFactoryInterface*> getBasicAnimationInterfaceFactoryInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicAnimationInterfaceFactoryInterfaceArray;
    
}


    public: void setInitialScale(ScaleProperties* scaleProperties){
}


};

            

