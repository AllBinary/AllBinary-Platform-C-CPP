
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

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "VectorExplosionGenerator.h"
#include "AnimationBehaviorFactory.h"
#include "VectorAnimationInterface.h"
#include "VectorRotationAnimation.h"
#include "Animation.h"

class VectorExplosionAnimationFactory
            : public Object
        : public ProceduralAnimationInterfaceFactoryInterface {
        

    private: const vectorExplosionGenerator: VectorExplosionGenerator = VectorExplosionGenerator.getInstance()!;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    const animationBehaviorFactory: AnimationBehaviorFactory;

public constructor (BasicColor basicColor, AnimationBehaviorFactory animationBehaviorFactory){

            super();
        this.animationBehaviorFactory= animationBehaviorFactory;
    
this.setBasicColorP(basicColor);
    
}


                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface){

    vectorRotationAnimationInterface: VectorAnimationInterface = animationInterface as unknown as VectorAnimationInterface;;
    

    frame: int32_t = vectorRotationAnimationInterface!.getFrame()!;;
    

    framePoints: std::vector<std::vector<int32_t>> = vectorRotationAnimationInterface!.getPoints(frame)!;;
    

    points: std::vector<std::vector<std::vector<int32_t>>> = this.vectorExplosionGenerator!.getInstance(framePoints, 6, this.vectorExplosionGenerator!.ROTATION)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new VectorRotationAnimation(points, this.getBasicColorP(), this.animationBehaviorFactory!.getOrCreateInstance());
    
}


    setBasicColorP(BasicColor basicColor){
this.basicColor= basicColor;
    
}


    BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColor;
    
}


};

            

