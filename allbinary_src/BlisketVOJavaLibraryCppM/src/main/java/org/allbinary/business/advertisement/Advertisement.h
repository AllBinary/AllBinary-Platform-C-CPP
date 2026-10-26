
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/business/advertisement/image/AdvertisementImageInterface.h>

      
#include <org/allbinary/business/advertisement/product/AdvertisementProductInterface.h>

      
#include <org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementInterface.h"

class Advertisement
            : public Object
        : public AdvertisementInterface {

    private: std::string artist;

    private: std::string artistLink;

    private: std::string title;

    private: std::string dateAdded;

    private: std::string directory;

    private: std::string framedLink;

    private: int32_t rank= 0;

    private: Money listPrice;

    private: Money ourPrice;

    private: AdvertisementImageInterface image;

    private: AdvertisementProductInterface product;

    private: AdvertisementThumbnailInterface thumbnail;

    private: DisplayInBrowserContraintsInterface displayInBrowserContraintsInterface;

public: Advertisement();

    public: std::string getArtist();

    public: void setArtist(std::string artist);

    public: std::string getArtistLink();

    public: void setArtistLink(std::string artistLink);

    public: std::string getTitle();

    public: void setTitle(std::string title);

    public: std::string getDateAdded();

    public: void setDateAdded(std::string dateAdded);

    public: std::string getDirectory();

    public: void setDirectory(std::string directory);

    public: std::string getFramedLink();

    public: void setFramedLink(std::string framedLink);

    public: Money getListPrice();

    public: void setListPrice(Money listPrice);

    public: Money getOurPrice();

    public: void setOurPrice(Money ourPrice);

    public: int32_t getRank();

    public: void setRank(int32_t rank);

    public: AdvertisementImageInterface getImage();

    public: void setImage(AdvertisementImageInterface image);

    public: AdvertisementProductInterface getProduct();

    public: void setProduct(AdvertisementProductInterface product);

    public: AdvertisementThumbnailInterface getThumbnail();

    public: void setThumbnail(AdvertisementThumbnailInterface thumbnail);

    public: DisplayInBrowserContraintsInterface getDisplayInBrowserContraintsInterface();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_H
