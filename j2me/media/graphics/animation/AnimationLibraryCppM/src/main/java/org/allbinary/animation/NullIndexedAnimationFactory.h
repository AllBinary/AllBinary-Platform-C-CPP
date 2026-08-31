
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "IndexedAnimationInterface.h"
#include "NullIndexedAnimation.h"
#include "IndexedAnimationBehavior.h"
//#include "NullIndexedAnimationInner.h"
#include "Animation.h"

class NullIndexedAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {
        

    public static const NULL_INDEXED_ANIMATION_ARRAY: std::vector<IndexedAnimationInterface> = [];

    private: static NULL_INDEXED_ANIMATION_FACTORY: NullIndexedAnimationFactory = new NullIndexedAnimationFactory();

    public static NullIndexedAnimationFactory getFactoryInstance();

//inner= member=true isStatic=
class NullIndexedAnimationInner: public NullIndexedAnimation {
        
/*Static stuff is not allowed for CPP inner classes*//**/


 constructor ();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

};

            
    private: const NULL_ANIMATION: Animation = new this.NullIndexedAnimationInner();

private constructor ();

                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface);

    public setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H
