
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
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "RotationAnimation.h"
#include "NullRotationAnimation.h"
#include "IndexedAnimationBehavior.h"
//#include "NullRotationAnimation2.h"
#include "Animation.h"

class NullRotationAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {
        

    private: static NULL_ROTATION_ANIMATION_FACTORY: NullRotationAnimationFactory = new NullRotationAnimationFactory();

    public static NullRotationAnimationFactory getFactoryInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRotationAnimationFactory.NULL_ROTATION_ANIMATION_FACTORY;
    
}


    public const NULL_ROTATION_ANIMATION_ARRAY: std::vector<RotationAnimation> = [];

//inner= member=true isStatic=
class NullRotationAnimation2: public NullRotationAnimation {
        
/*Static stuff is not allowed for CPP inner classes*//**/


 constructor (){
            super(AngleInfo.getInstance(AngleFactory.getInstance()!.QUARTER_TOTAL_ANGLE), CircularIndexUtil.createInstance(4), new IndexedAnimationBehavior(1, 250));
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
}


};

            
    private: const NULL_ANIMATION: Animation = new this.NullRotationAnimation2();

private constructor (){

            super();
        }


    public Animation getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NULL_ANIMATION;
    
}


                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NULL_ANIMATION;
    
}


    public setInitialScale(ScaleProperties scaleProperties){
}


};

            

