
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementSearchData
            : public Object
         {

    private: static AdvertisementSearchData* instance() { static std::unique_ptr<AdvertisementSearchData> value(new AdvertisementSearchData()); return value.get(); }

    public: static AdvertisementSearchData* getInstance();

private: AdvertisementSearchData();

    public: const std::string TITLE = "AFFILIATE_TITLE";

    public: const std::string PRICE = "AFFILIATE_PRICE";

    public: const std::string RELEVANCY = "AFFILIATE_RELEVANCY";

    public: const std::string POPULARITY = "AFFILIATE_POPULARITY";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_H
