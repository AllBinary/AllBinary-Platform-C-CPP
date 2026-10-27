
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/advertisement/search/category/AdvertisementCategoryInterface.h>

      
#include <org/allbinary/business/advertisement/search/website/AdvertisementWebsiteInterface.h>

      
#include <org/allbinary/logic/control/contraints/price/PriceConstraintInterface.h>

      
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementSearchInterface {

    public: virtual AdvertisementWebsiteInterface* getWebSite() = 0;

    public: virtual AdvertisementCategoryInterface* getCategory() = 0;

    public: virtual TwoDimensionalConstraintInterface* getSizeConstraints() = 0;

    public: virtual PriceConstraintInterface* getPricingConstraints() = 0;

    public: virtual int32_t getPageNumber() = 0;

    public: virtual int32_t getProductsPerPage() = 0;

    public: virtual HashMap<Object*, Object*>* getSearchParams() = 0;

    public: virtual void setCategory(AdvertisementCategoryInterface* advertisementCategoryInterface) = 0;

    public: virtual void setSizeConstraints(TwoDimensionalConstraintInterface* twoDimensionConstraintsInterface) = 0;

    public: virtual void setPricingConstraints(PriceConstraintInterface* priceConstraintInterface) = 0;

    public: virtual void setPageNumber(int32_t pageNumber) = 0;

    public: virtual void setProductsPerPage(int32_t productsPerPage) = 0;

    public: virtual void setSearchParams(HashMap<Object*, Object*>* columnAndKeywordHashMap) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHINTERFACE_H
