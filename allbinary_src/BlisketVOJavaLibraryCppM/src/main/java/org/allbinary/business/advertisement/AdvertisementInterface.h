
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTINTERFACE_H

#include <org/allbinary/business/advertisement/image/AdvertisementImageInterface.h>

      
#include <org/allbinary/business/advertisement/product/AdvertisementProductInterface.h>

      
#include <org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementInterface {

    std::string getArtist();

    std::string getArtistLink();

    std::string getTitle();

    std::string getDateAdded();

    std::string getDirectory();

    std::string getFramedLink();

    Money getListPrice();

    Money getOurPrice();

    int32_t getRank();

    AdvertisementImageInterface getImage();

    AdvertisementProductInterface getProduct();

    AdvertisementThumbnailInterface getThumbnail();

    DisplayInBrowserContraintsInterface getDisplayInBrowserContraintsInterface();

    void setArtist(std::string artist);

    void setArtistLink(std::string artistLink);

    void setTitle(std::string title);

    void setDateAdded(std::string dateAdded);

    void setDirectory(std::string directory);

    void setFramedLink(std::string framedLink);

    void setRank(int32_t rank);

    void setImage(AdvertisementImageInterface AdvertisementImageInterface);

    void setProduct(AdvertisementProductInterface AdvertisementProductInterface);

    void setThumbnail(AdvertisementThumbnailInterface AdvertisementThumbnailInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTINTERFACE_H
