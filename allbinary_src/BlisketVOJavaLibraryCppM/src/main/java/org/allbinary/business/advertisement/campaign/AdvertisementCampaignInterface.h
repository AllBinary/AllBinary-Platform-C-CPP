
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AdvertisementsInterface;
class AdvertisementSearchInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementCampaignInterface
            : public virtual Object
         {

    public: virtual std::string getName() = 0;

    public: virtual Object* getComponent() = 0;

    public: virtual void setName(std::string name) = 0;

    public: virtual void setComponentName(std::string name) = 0;

    public: virtual AdvertisementsInterface* search(AdvertisementSearchInterface* advertisementSearchInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/advertisement/AdvertisementsInterface.h>)
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>)
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>
#endif

        #endif
    
