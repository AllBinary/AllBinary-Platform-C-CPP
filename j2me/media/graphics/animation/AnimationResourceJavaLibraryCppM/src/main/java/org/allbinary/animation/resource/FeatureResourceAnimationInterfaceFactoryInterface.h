
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

#include <org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>

      
#include <org/allbinary/game/resource/RectangleResourceFactoryInterface.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResourceAnimationInterfaceFactoryInterface.h"

class FeatureResourceAnimationInterfaceFactoryInterface: public ResourceAnimationInterfaceFactoryInterface, public RectangleResourceFactoryInterface, public GameFeatureControlledInterface {

    ABHashtable<Object*, Object*> getHashtable();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H
