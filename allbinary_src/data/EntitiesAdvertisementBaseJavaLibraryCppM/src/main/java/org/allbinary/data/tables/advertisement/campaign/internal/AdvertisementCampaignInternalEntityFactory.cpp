
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITYFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntityFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntity.h"
#include "org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntityInterface.h"


AdvertisementCampaignInternalEntityFactory::AdvertisementCampaignInternalEntityFactory(){
}


    auto AdvertisementCampaignInternalEntityFactory::getInstance() -> AdvertisementCampaignInternalEntityInterface*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AdvertisementCampaignInternalEntityInterface*>(new AdvertisementCampaignInternalEntity());
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, "AdvertisementCampaignEntityFactory", commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITYFACTORY_CPP
