
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREAINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREAINTERFACE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementAreaConstraintsInterface.h"

class AdvertisementAreaInterface {

    std::string getName();

    std::string getStoreName();

    std::string getDescription();

    AdvertisementAreaConstraintsInterface getConstraints();

    std::string getCampaign();

    void setName(std::string name);

    void setStoreName(std::string storeName);

    void setDescription(std::string description);

    void setConstraints(AdvertisementAreaConstraintsInterface advertisementConstraintsInterface);

    void setCampaign(std::string campaign);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREAINTERFACE_H
