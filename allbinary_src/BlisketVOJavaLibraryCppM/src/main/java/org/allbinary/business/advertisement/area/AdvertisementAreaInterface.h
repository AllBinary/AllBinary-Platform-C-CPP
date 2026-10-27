
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREAINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREAINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AdvertisementAreaConstraintsInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementAreaInterface
            : public virtual Object
         {

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

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREAINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREAINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREAINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h")
#include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h"
#endif

        #endif
    
