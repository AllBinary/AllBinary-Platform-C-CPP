
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class DynamicObjectData;
class AdvertisementsInterface;
class AdvertisementSearchInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h"
class AdvertisementCampaignData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementCampaign
            : public virtual Object
        , public virtual AdvertisementCampaignInterface {

    private: HashMap<Object*, Object*>* hashMap;

public: AdvertisementCampaign(HashMap<Object*, Object*>* hashMap);

    public: Object* getComponent();

    public: std::string getName();

    public: void setComponentName(std::string name);

    public: void setName(std::string name);

    public: AdvertisementsInterface* search(AdvertisementSearchInterface* advertisementSearchInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGN_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/DynamicObjectData.h>)
#include <org/allbinary/business/DynamicObjectData.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/AdvertisementsInterface.h>)
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>)
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>
#endif
#if __has_include("org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h")
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h"
#endif
#if __has_include("org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h")
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h"
#endif

        #endif
    
