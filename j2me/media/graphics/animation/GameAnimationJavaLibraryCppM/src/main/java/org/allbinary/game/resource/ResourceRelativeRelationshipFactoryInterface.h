
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORYINTERFACE_H
        #define ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORYINTERFACE_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ResourceRelativeRelationshipFactoryInterface: public GameFeatureControlledInterface {
        

                //@Throws(Exception.constructor)
            
    BasicArrayList getResourceRelativeRelationshipList(string resource);

                //@Throws(Exception.constructor)
            
    addResourceRelativeRelationship(string resource, RelativeRelationship relativeRelationship);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORYINTERFACE_H
