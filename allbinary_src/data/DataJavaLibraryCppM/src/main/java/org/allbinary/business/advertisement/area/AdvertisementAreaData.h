
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREADATA_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREADATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementAreaData
            : public Object
         {

    private: static AdvertisementAreaData instance() { return AdvertisementAreaData(); }

    public: static AdvertisementAreaData getInstance();

private: AdvertisementAreaData();

    public: const std::string NAME = "ADVERTISEMENT_NAME";

    public: const std::string DESCRIPTION = "ADVERTISEMENT_DESCRIPTION";

    public: const std::string CONSTRAINTS = "ADVERTISEMENT_CONSTRAINTS";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREADATA_H
