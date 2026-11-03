
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/search/AdvertisementSearchData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AdvertisementSearchData::instance_owner() -> AdvertisementSearchData* { static std::unique_ptr<AdvertisementSearchData> value(new AdvertisementSearchData()); return value.get(); }
AdvertisementSearchData* AdvertisementSearchData::instance = AdvertisementSearchData::instance_owner();

    auto AdvertisementSearchData::getInstance() -> AdvertisementSearchData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AdvertisementSearchData::instance;
    
}


AdvertisementSearchData::AdvertisementSearchData(){
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_SEARCH_ADVERTISEMENTSEARCHDATA_CPP
