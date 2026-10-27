
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_THUMBNAIL_ADVERTISEMENTTHUMBNAIL_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_THUMBNAIL_ADVERTISEMENTTHUMBNAIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class TwoDimensionalConstraintInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementThumbnail
            : public virtual Object
        , public AdvertisementThumbnailInterface {

    private: std::string imageFileName;

    private: std::string imageUrl;

    private: TwoDimensionalConstraintInterface* constraint;

public: AdvertisementThumbnail();

    public: std::string getFileName();

    public: std::string getUrl();

    public: TwoDimensionalConstraintInterface* getTwoDimensionalConstraint();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_THUMBNAIL_ADVERTISEMENTTHUMBNAIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_THUMBNAIL_ADVERTISEMENTTHUMBNAIL_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_THUMBNAIL_ADVERTISEMENTTHUMBNAIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>)
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>
#endif
#if __has_include("org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h")
#include "org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h"
#endif

        #endif
    
