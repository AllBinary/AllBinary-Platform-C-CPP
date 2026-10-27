
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h"

class AdvertisementAreaInterface {

    public: virtual std::string getName() = 0;

    public: virtual std::string getStoreName() = 0;

    public: virtual std::string getDescription() = 0;

    public: virtual AdvertisementAreaConstraintsInterface* getConstraints() = 0;

    public: virtual std::string getCampaign() = 0;

    public: virtual void setName(std::string name) = 0;

    public: virtual void setStoreName(std::string storeName) = 0;

    public: virtual void setDescription(std::string description) = 0;

    public: virtual void setConstraints(AdvertisementAreaConstraintsInterface* advertisementConstraintsInterface) = 0;

    public: virtual void setCampaign(std::string campaign) = 0;

};

            

