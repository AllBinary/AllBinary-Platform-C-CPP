
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
        



#include <java/util/HashMap.h>

      
#include <org/allbinary/business/advertisement/search/category/AdvertisementCategoryInterface.h>

      
#include <org/allbinary/business/advertisement/search/website/AdvertisementWebsiteInterface.h>

      
#include <org/allbinary/logic/control/contraints/price/PriceConstraintInterface.h>

      
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementSearchInterface {

    AdvertisementWebsiteInterface getWebSite()

    AdvertisementCategoryInterface getCategory()

    TwoDimensionalConstraintInterface getSizeConstraints()

    PriceConstraintInterface getPricingConstraints()

    int32_t getPageNumber()

    int32_t getProductsPerPage()

    HashMap<any, any> getSearchParams()

    void setCategory(AdvertisementCategoryInterface advertisementCategoryInterface)

    void setSizeConstraints(TwoDimensionalConstraintInterface twoDimensionConstraintsInterface)

    void setPricingConstraints(PriceConstraintInterface priceConstraintInterface)

    void setPageNumber(int32_t pageNumber)

    void setProductsPerPage(int32_t productsPerPage)

    void setSearchParams(HashMap<any, any> columnAndKeywordHashMap)

};

            

