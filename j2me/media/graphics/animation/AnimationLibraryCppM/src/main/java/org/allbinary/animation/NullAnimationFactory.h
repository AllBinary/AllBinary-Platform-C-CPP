
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/Animation.h"

class NullAnimationFactory
            : public Object
        , public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {

    public: static NullAnimationFactory* NULL_NOT_FOR_USE_ANIMATION_FACTORY() { static std::unique_ptr<NullAnimationFactory> value(new NullAnimationFactory()); return value.get(); }

    private: static NullAnimationFactory* NULL_ANIMATION_FACTORY() { static std::unique_ptr<NullAnimationFactory> value(new NullAnimationFactory()); return value.get(); }

    public: static NullAnimationFactory* getFactoryInstance();

    private: Animation* NULL_ANIMATION = class extends Animation
                                {
                                
    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);
                                }
                            ;

    public: const std::vector<Animation*> EMPTY_ARRAY = {};

private: NullAnimationFactory();

    public: Animation* getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_H
