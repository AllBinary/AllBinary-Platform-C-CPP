
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATIONFACTORY_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

    private: static NullRotationAnimationFactory NULL_ROTATION_ANIMATION_FACTORY = NullRotationAnimationFactory();

    public: static NullRotationAnimationFactory getFactoryInstance();

    public: const std::vector<RotationAnimation> NULL_ROTATION_ANIMATION_ARRAY = {};

//inner= member=true isStatic=
class NullRotationAnimation2: public NullRotationAnimation {
/*Static stuff is not allowed for CPP inner classes*//**/


: NullRotationAnimation2();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

};

            
    private: const Animation NULL_ANIMATION = NullRotationAnimation2();

private: NullRotationAnimationFactory();

    public: Animation getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public: Animation getInstanceAnimation(Animation animationInterface);

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATIONFACTORY_H
