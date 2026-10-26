
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTDATA_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTDATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementData
            : public Object
         {

    private: static AdvertisementData instance() { return AdvertisementData(); }

    public: static AdvertisementData getInstance();

private: AdvertisementData();

    public: const std::string NAME = "ADVERTISEMENT_NAME";

    public: const std::string DESCRIPTION = "ADVERTISEMENT_DESCRIPTION";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTDATA_H
