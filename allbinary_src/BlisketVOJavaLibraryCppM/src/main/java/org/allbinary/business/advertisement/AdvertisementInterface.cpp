
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

        
#include <org/allbinary/business/advertisement/image/AdvertisementImageInterface.h>

      
#include <org/allbinary/business/advertisement/product/AdvertisementProductInterface.h>

      
#include <org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementInterface {

    public: virtual std::string getArtist() = 0;

    public: virtual std::string getArtistLink() = 0;

    public: virtual std::string getTitle() = 0;

    public: virtual std::string getDateAdded() = 0;

    public: virtual std::string getDirectory() = 0;

    public: virtual std::string getFramedLink() = 0;

    public: virtual Money* getListPrice() = 0;

    public: virtual Money* getOurPrice() = 0;

    public: virtual int32_t getRank() = 0;

    public: virtual AdvertisementImageInterface* getImage() = 0;

    public: virtual AdvertisementProductInterface* getProduct() = 0;

    public: virtual AdvertisementThumbnailInterface* getThumbnail() = 0;

    public: virtual DisplayInBrowserContraintsInterface* getDisplayInBrowserContraintsInterface() = 0;

    public: virtual void setArtist(std::string artist) = 0;

    public: virtual void setArtistLink(std::string artistLink) = 0;

    public: virtual void setTitle(std::string title) = 0;

    public: virtual void setDateAdded(std::string dateAdded) = 0;

    public: virtual void setDirectory(std::string directory) = 0;

    public: virtual void setFramedLink(std::string framedLink) = 0;

    public: virtual void setRank(int32_t rank) = 0;

    public: virtual void setImage(AdvertisementImageInterface* AdvertisementImageInterface) = 0;

    public: virtual void setProduct(AdvertisementProductInterface* AdvertisementProductInterface) = 0;

    public: virtual void setThumbnail(AdvertisementThumbnailInterface* AdvertisementThumbnailInterface) = 0;

};

            

