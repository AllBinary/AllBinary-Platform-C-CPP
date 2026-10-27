
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/campaign/AdvertisementCampaigns.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/advertisement/AdvertisementInterface.h>

      
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>

      
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h"


AdvertisementCampaigns::AdvertisementCampaigns(BasicArrayList* vector){
this->advertisementsVector= this->advertisementsVector;
    
}


    auto AdvertisementCampaigns::add(AdvertisementInterface* advertisementInterface) -> void{
this->advertisementsVector->add(advertisementInterface);
    
}


    auto AdvertisementCampaigns::get(int32_t index) -> AdvertisementInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<AdvertisementInterface*>(this->advertisementsVector->get(index));
    
}


    auto AdvertisementCampaigns::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->advertisementsVector->size();;
    
}


    auto AdvertisementCampaigns::isEnabled() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto AdvertisementCampaigns::search(AdvertisementSearchInterface* advertisementSearchInterface) -> AdvertisementsInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_CPP
