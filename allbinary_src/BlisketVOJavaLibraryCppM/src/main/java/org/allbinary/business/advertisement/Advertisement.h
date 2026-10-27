
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AdvertisementImageInterface;
class AdvertisementProductInterface;
class AdvertisementThumbnailInterface;
class Money;
class DisplayInBrowserContraintsInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/AdvertisementInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Advertisement
            : public virtual Object
        , public AdvertisementInterface {

    private: std::string artist;

    private: std::string artistLink;

    private: std::string title;

    private: std::string dateAdded;

    private: std::string directory;

    private: std::string framedLink;

    private: int32_t rank= 0;

    private: Money* listPrice;

    private: Money* ourPrice;

    private: AdvertisementImageInterface* image;

    private: AdvertisementProductInterface* product;

    private: AdvertisementThumbnailInterface* thumbnail;

    private: DisplayInBrowserContraintsInterface* displayInBrowserContraintsInterface;

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

    public: Money* getListPrice();

    public: void setListPrice(Money* listPrice);

    public: Money* getOurPrice();

    public: void setOurPrice(Money* ourPrice);

    public: int32_t getRank();

    public: void setRank(int32_t rank);

    public: AdvertisementImageInterface* getImage();

    public: void setImage(AdvertisementImageInterface* image);

    public: AdvertisementProductInterface* getProduct();

    public: void setProduct(AdvertisementProductInterface* product);

    public: AdvertisementThumbnailInterface* getThumbnail();

    public: void setThumbnail(AdvertisementThumbnailInterface* thumbnail);

    public: DisplayInBrowserContraintsInterface* getDisplayInBrowserContraintsInterface();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_H_COMPLETE
        #if __has_include(<org/allbinary/business/advertisement/image/AdvertisementImageInterface.h>)
#include <org/allbinary/business/advertisement/image/AdvertisementImageInterface.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/product/AdvertisementProductInterface.h>)
#include <org/allbinary/business/advertisement/product/AdvertisementProductInterface.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h>)
#include <org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>)
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>
#endif
#if __has_include("org/allbinary/business/advertisement/AdvertisementInterface.h")
#include "org/allbinary/business/advertisement/AdvertisementInterface.h"
#endif

        #endif
    
