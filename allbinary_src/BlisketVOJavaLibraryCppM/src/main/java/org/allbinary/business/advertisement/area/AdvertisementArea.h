
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementAreaInterface.h"
#include "AdvertisementAreaConstraintsInterface.h"
#include "AdvertisementAreaData.h"
#include "AdvertisementAreaConstraints.h"

class AdvertisementArea
            : public Object
        : public AdvertisementAreaInterface {
        

    private: name: string;

    private: storeName: string;

    private: description: string;

    private: advertisementAreaConstraintsInterface: AdvertisementAreaConstraintsInterface;

    private: campaign: string;

public constructor (HashMap<any, any> hashMap);

    public string getName();

    public string getStoreName();

    public string getDescription();

    public AdvertisementAreaConstraintsInterface getConstraints();

    public string getCampaign();

    public setName(string name);

    public setStoreName(string storeName);

    public setDescription(string description);

    public setConstraints(AdvertisementAreaConstraintsInterface advertisementConstraintsInterface);

    public setCampaign(string campaign);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_H
