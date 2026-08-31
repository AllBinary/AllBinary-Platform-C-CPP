
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/advertisement/AdvertisementInterface.h>

      
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>

      
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementCampaignsInterface.h"

class AdvertisementCampaigns
            : public Object
        : public AdvertisementCampaignsInterface {
        

    private: advertisementsVector: Vector;

public constructor (Vector vector);

    public add(AdvertisementInterface advertisementInterface);

    public AdvertisementInterface get(int32_t index);

    public int32_t size();

    public bool isEnabled();

    public AdvertisementsInterface search(AdvertisementSearchInterface advertisementSearchInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_H
