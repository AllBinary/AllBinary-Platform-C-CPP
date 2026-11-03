
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_IMAGE_ADVERTISEMENTIMAGE_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_IMAGE_ADVERTISEMENTIMAGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/image/AdvertisementImage.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/image/AdvertisementImageInterface.h"


AdvertisementImage::AdvertisementImage(){
}


    auto AdvertisementImage::getFileName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageFileName;
    
}


    auto AdvertisementImage::getUrl() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageUrl;
    
}


    auto AdvertisementImage::getTwoDimensionalConstraint() -> TwoDimensionalConstraintInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->constraint;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_IMAGE_ADVERTISEMENTIMAGE_CPP
