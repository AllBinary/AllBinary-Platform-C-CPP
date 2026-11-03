
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
        #define ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ScaleProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
class BasicAnimationInterfaceFactoryInterface;
class NullAnimationFactory;
class Animation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseAnimationInterfaceFactoryInterfaceComposite
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface {

    private: std::vector<BasicAnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray;

public: BaseAnimationInterfaceFactoryInterfaceComposite(std::vector<BasicAnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    public: std::vector<BasicAnimationInterfaceFactoryInterface*> getBasicAnimationInterfaceFactoryInterfaceArray();

    public: void setBasicAnimationInterfaceFactoryInterfaceArray(std::vector<BasicAnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H_COMPLETE
        #if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

        #endif
    
