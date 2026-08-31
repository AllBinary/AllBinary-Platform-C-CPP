
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
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/vector/VectorInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "VectorAnimationFactoryInterface.h"
#include "VectorRotationGenerator.h"
#include "VectorExplosionGenerator.h"
#include "IndexedAnimation.h"
#include "Animation.h"

class IndependentVectorExplosionRotationAnimationFactory
            : public Object
        : public ProceduralAnimationInterfaceFactoryInterface {
        

    private: framePoints: std::vector<std::vector<std::vector<int32_t>>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY_ARRAY;

    private: vectorInfo: VectorInfo;

    private: basicColor: BasicColor;

    private: vectorAnimationFactoryInterface: VectorAnimationFactoryInterface;

public constructor (VectorInfo vectorInfo, BasicColor basicColor, VectorAnimationFactoryInterface vectorAnimationFactoryInterface){

            super();
        this.vectorInfo= vectorInfo;
    
this.basicColor= basicColor;
    
this.vectorAnimationFactoryInterface= vectorAnimationFactoryInterface;
    
this.init();
    
}


                //@Throws(Exception.constructor)
            
    init(){
this.framePoints= VectorRotationGenerator.getInstance()!.getInstance(this.vectorInfo);
    
}


    private: const vectorExplosionGenerator: VectorExplosionGenerator = VectorExplosionGenerator.getInstance()!;

                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface){

    frame: int32_t = 0;;
    

                        if(animationInterface != 
                                    null
                                )
                        
                                    {
                                    
    rotationAnimationInterface: IndexedAnimation = animationInterface as IndexedAnimation;;
    
frame= rotationAnimationInterface!.getFrame();
    

                                    }
                                

    points: std::vector<std::vector<std::vector<int32_t>>> = this.vectorExplosionGenerator!.getInstance(this.framePoints[frame]!, 6, this.vectorExplosionGenerator!.ROTATION)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.vectorAnimationFactoryInterface!.getInstance(points, this.basicColor);;
    
}


};

            

