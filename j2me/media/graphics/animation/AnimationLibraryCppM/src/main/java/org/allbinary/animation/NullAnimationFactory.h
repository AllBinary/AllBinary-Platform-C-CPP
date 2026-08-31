
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "Animation.h"

class NullAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {
        

    public static NULL_NOT_FOR_USE_ANIMATION_FACTORY: NullAnimationFactory = new NullAnimationFactory();

    private: static NULL_ANIMATION_FACTORY: NullAnimationFactory = new NullAnimationFactory();

    public static NullAnimationFactory getFactoryInstance();

    private: const NULL_ANIMATION: Animation = new class extends Animation
                                {
                                
    public paintXY(Graphics graphics, int32_t x, int32_t y);
                                }
                            ;

    public const EMPTY_ARRAY: std::vector<Animation> = [];

private constructor ();

    public Animation getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface);

    public setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_H
