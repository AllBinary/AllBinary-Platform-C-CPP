
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

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HealthBarThreedAnimation.h"
#include "HealthBarAnimation.h"

class HealthBarAnimationInterfaceFactory
            : public Object
        : public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {

public: HealthBarAnimationInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    public: HealthBarAnimation getInstanceByLocation(AllBinaryLayer layerInterface, int32_t location){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HealthBarThreedAnimation(layerInterface, location);
    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstanceAnimation(Animation animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void setInitialScale(ScaleProperties scaleProperties){
}


};

            

