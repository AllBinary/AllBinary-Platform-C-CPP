
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

            #include "../../../../java/lang/Object.h"
        
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
        

    private: artist: string;

    private: artistLink: string;

    private: title: string;

    private: dateAdded: string;

    private: directory: string;

    private: framedLink: string;

    private: rank: int32_t= 0;

    private: listPrice: Money;

    private: ourPrice: Money;

    private: image: AdvertisementImageInterface;

    private: product: AdvertisementProductInterface;

    private: thumbnail: AdvertisementThumbnailInterface;

    private: const displayInBrowserContraintsInterface: DisplayInBrowserContraintsInterface;

public constructor ();

    public string getArtist();

    public setArtist(string artist);

    public string getArtistLink();

    public setArtistLink(string artistLink);

    public string getTitle();

    public setTitle(string title);

    public string getDateAdded();

    public setDateAdded(string dateAdded);

    public string getDirectory();

    public setDirectory(string directory);

    public string getFramedLink();

    public setFramedLink(string framedLink);

    public Money getListPrice();

    public setListPrice(Money listPrice);

    public Money getOurPrice();

    public setOurPrice(Money ourPrice);

    public int32_t getRank();

    public setRank(int32_t rank);

    public AdvertisementImageInterface getImage();

    public setImage(AdvertisementImageInterface image);

    public AdvertisementProductInterface getProduct();

    public setProduct(AdvertisementProductInterface product);

    public AdvertisementThumbnailInterface getThumbnail();

    public setThumbnail(AdvertisementThumbnailInterface thumbnail);

    public DisplayInBrowserContraintsInterface getDisplayInBrowserContraintsInterface();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_H
