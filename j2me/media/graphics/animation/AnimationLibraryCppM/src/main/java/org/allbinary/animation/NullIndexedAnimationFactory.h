
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class ScaleProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
class IndexedAnimation;
#include "org/allbinary/animation/NullIndexedAnimation.h"
class IndexedAnimationBehavior;
//class NullIndexedAnimationInner;
class Animation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullIndexedAnimationFactory
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface, public virtual ProceduralAnimationInterfaceFactoryInterface {
public: class NullIndexedAnimationInner;

    public: static std::vector<IndexedAnimation*> NULL_INDEXED_ANIMATION_ARRAY;

    private: static NullIndexedAnimationFactory* NULL_INDEXED_ANIMATION_FACTORY_owner();
    private: static NullIndexedAnimationFactory* NULL_INDEXED_ANIMATION_FACTORY;

    public: static NullIndexedAnimationFactory* getFactoryInstance();

//inner= member=true isStatic=
public: class NullIndexedAnimationInner: public NullIndexedAnimation {

    public: NullIndexedAnimationFactory* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/


public: NullIndexedAnimationInner();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            
    private: Animation* NULL_ANIMATION;

private: NullIndexedAnimationFactory();

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/NullIndexedAnimation.h")
#include "org/allbinary/animation/NullIndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimationBehavior.h")
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

        #endif
    
