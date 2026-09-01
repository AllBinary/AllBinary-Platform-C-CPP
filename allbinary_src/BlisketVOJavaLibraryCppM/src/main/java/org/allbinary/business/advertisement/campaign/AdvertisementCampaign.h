
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>

      
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementCampaignInterface.h"
#include "AdvertisementCampaignData.h"

class AdvertisementCampaign
            : public Object
        : public AdvertisementCampaignInterface {

    private: HashMap<any, any> hashMap;

public: AdvertisementCampaign(HashMap<any, any> hashMap);

    public: Object* getComponent();

    public: std::string getName();

    public: void setComponentName(std::string name);

    public: void setName(std::string name);

    public: AdvertisementsInterface search(AdvertisementSearchInterface advertisementSearchInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_H
