
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/campaign/AdvertisementCampaign.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>

      
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h"


AdvertisementCampaign::AdvertisementCampaign(HashMap<Object*, Object*>* hashMap){
this->hashMap= hashMap;
    
}


    auto AdvertisementCampaign::getComponent() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto AdvertisementCampaign::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->hashMap->get(AdvertisementCampaignData::getInstance()->NAME));
    
}


    auto AdvertisementCampaign::setComponentName(std::string name) -> void{
this->hashMap->put(DynamicObjectData::NAME, name);
    
}


    auto AdvertisementCampaign::setName(std::string name) -> void{
this->hashMap->put(AdvertisementCampaignData::getInstance()->NAME, name);
    
}


    auto AdvertisementCampaign::search(AdvertisementSearchInterface* advertisementSearchInterface) -> AdvertisementsInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_CPP
