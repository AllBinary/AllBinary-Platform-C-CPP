
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;

class AdvertisementInterface;
class AdvertisementsInterface;
class AdvertisementSearchInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementCampaigns
            : public virtual Object
        , public virtual AdvertisementCampaignsInterface {

    private: BasicArrayList* advertisementsVector;

public: AdvertisementCampaigns(BasicArrayList* vector);

    public: void add(AdvertisementInterface* advertisementInterface);

    public: AdvertisementInterface* get(int32_t index);

    public: int32_t size();

    public: bool isEnabled();

    public: AdvertisementsInterface* search(AdvertisementSearchInterface* advertisementSearchInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNS_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/advertisement/AdvertisementInterface.h>)
#include <org/allbinary/business/advertisement/AdvertisementInterface.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/AdvertisementsInterface.h>)
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>)
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>
#endif
#if __has_include("org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h")
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h"
#endif

        #endif
    
