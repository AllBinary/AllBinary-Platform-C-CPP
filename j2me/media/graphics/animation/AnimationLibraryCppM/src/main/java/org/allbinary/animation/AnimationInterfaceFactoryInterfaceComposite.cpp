
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
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "NullAnimationFactory.h"
#include "Animation.h"

class AnimationInterfaceFactoryInterfaceComposite
            : public Object
        : public AnimationInterfaceFactoryInterface {

    private: std::vector<AnimationInterfaceFactoryInterface> animationInterfaceFactoryInterfaceArray;

public: AnimationInterfaceFactoryInterfaceComposite(std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray){
this->animationInterfaceFactoryInterfaceArray= basicAnimationInterfaceFactoryInterfaceArray;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAnimationFactory::getFactoryInstance().getInstance(0);;
    
}


    public: std::vector<AnimationInterfaceFactoryInterface> getAnimationInterfaceFactoryInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceFactoryInterfaceArray;
    
}


    public: void setInitialScale(ScaleProperties scaleProperties){
}


};

            

