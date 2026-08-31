
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORYINTERFACE_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameAdStateBase.h"

class GameAdStateFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    GameAdStateBase getInstanceForApp(SoftwareInformation softwareInformation);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEFACTORYINTERFACE_H
