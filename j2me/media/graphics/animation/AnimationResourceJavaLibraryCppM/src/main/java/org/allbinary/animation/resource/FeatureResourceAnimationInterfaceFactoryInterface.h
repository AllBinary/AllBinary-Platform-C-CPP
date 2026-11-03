
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>
#include <org/allbinary/game/resource/RectangleResourceFactoryInterface.h>
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/resource/ResourceAnimationInterfaceFactoryInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FeatureResourceAnimationInterfaceFactoryInterface: public virtual ResourceAnimationInterfaceFactoryInterface, public virtual RectangleResourceFactoryInterface, public virtual GameFeatureControlledInterface {

    public: virtual ABHashtable<Object*, Object*>* getHashtable() = 0;

};

            


        #endif //ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>
#endif
#if __has_include(<org/allbinary/game/resource/RectangleResourceFactoryInterface.h>)
#include <org/allbinary/game/resource/RectangleResourceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/animation/resource/ResourceAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/resource/ResourceAnimationInterfaceFactoryInterface.h"
#endif

        #endif
    
