
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTSINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTSINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AdvertisementInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementsInterface
            : public virtual Object
         {

    public: virtual void add(AdvertisementInterface* advertisementInterface) = 0;

    public: virtual AdvertisementInterface* get(int32_t index) = 0;

    public: virtual int32_t getCurrentPageNum() = 0;

    public: virtual std::string getErrorDescription() = 0;

    public: virtual std::string getErrorNum() = 0;

    public: virtual int32_t getNumberOfPosters() = 0;

    public: virtual int32_t getNumberOfProductsInPage() = 0;

    public: virtual int32_t getStatusCode() = 0;

    public: virtual int32_t getTotalNumberOfProducts() = 0;

    public: virtual bool isSearchValid() = 0;

    public: virtual void setCurrentPageNum(int32_t currentPageNum) = 0;

    public: virtual void setErrorDescription(std::string errorDescription) = 0;

    public: virtual void setErrorNum(std::string errorNum) = 0;

    public: virtual void setNumberOfProductsInPage(int32_t numberOfProductsInPage) = 0;

    public: virtual void setStatusCode(int32_t statusCode) = 0;

    public: virtual void setTotalNumberOfProducts(int32_t totalNumberOfProducts) = 0;

    public: virtual std::string toString() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTSINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTSINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTSINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/business/advertisement/AdvertisementInterface.h")
#include "org/allbinary/business/advertisement/AdvertisementInterface.h"
#endif

        #endif
    
