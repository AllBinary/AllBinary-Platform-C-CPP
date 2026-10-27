
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementSearchData
            : public virtual Object
         {

    private: static AdvertisementSearchData* instance_owner();
    private: static AdvertisementSearchData* instance;

    public: static AdvertisementSearchData* getInstance();

private: AdvertisementSearchData();

    public: const std::string TITLE = "AFFILIATE_TITLE";

    public: const std::string PRICE = "AFFILIATE_PRICE";

    public: const std::string RELEVANCY = "AFFILIATE_RELEVANCY";

    public: const std::string POPULARITY = "AFFILIATE_POPULARITY";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_H_COMPLETE
        
        #endif
    
