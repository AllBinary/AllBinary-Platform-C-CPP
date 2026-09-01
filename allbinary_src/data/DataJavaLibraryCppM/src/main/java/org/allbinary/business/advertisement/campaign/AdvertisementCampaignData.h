
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNDATA_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNDATA_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementCampaignData
            : public Object
         {

    private: static AdvertisementCampaignData instance() { return AdvertisementCampaignData(); }

    public: static AdvertisementCampaignData getInstance();

private: AdvertisementCampaignData();

    public: const std::string NAME = "ADVERTISEMENTCAMPAIGN_NAME";

    public: const std::string DESCRIPTION = "ADVERTISEMENTCAMPAIGN_DESCRIPTION";

    public: const std::string CONFIG = "ADVERTISEMENTCAMPAIGN_CONFIG";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_CAMPAIGN_ADVERTISEMENTCAMPAIGNDATA_H
