
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class AdvertisementCampaignData;
class StoreFrontData;
class DomDocumentHelper;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h"
class AdvertisementAreaConstraintsInterface;
class AdvertisementAreaData;
class AdvertisementAreaConstraints;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementArea
            : public virtual Object
        , public virtual AdvertisementAreaInterface {

    private: std::string name;

    private: std::string storeName;

    private: std::string description;

    private: AdvertisementAreaConstraintsInterface* advertisementAreaConstraintsInterface;

    private: std::string campaign;

public: AdvertisementArea(HashMap<Object*, Object*>* hashMap);

    public: std::string getName();

    public: std::string getStoreName();

    public: std::string getDescription();

    public: AdvertisementAreaConstraintsInterface* getConstraints();

    public: std::string getCampaign();

    public: void setName(std::string name);

    public: void setStoreName(std::string storeName);

    public: void setDescription(std::string description);

    public: void setConstraints(AdvertisementAreaConstraintsInterface* advertisementConstraintsInterface);

    public: void setCampaign(std::string campaign);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>)
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h")
#include "org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h"
#endif
#if __has_include("org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h")
#include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h"
#endif
#if __has_include("org/allbinary/business/advertisement/area/AdvertisementAreaData.h")
#include "org/allbinary/business/advertisement/area/AdvertisementAreaData.h"
#endif
#if __has_include("org/allbinary/business/advertisement/area/AdvertisementAreaConstraints.h")
#include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraints.h"
#endif

        #endif
    
