
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/Advertisement.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/business/advertisement/image/AdvertisementImageInterface.h>

      
#include <org/allbinary/business/advertisement/product/AdvertisementProductInterface.h>

      
#include <org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/AdvertisementInterface.h"


Advertisement::Advertisement(){
this->displayInBrowserContraintsInterface= 
                                        nullptr
                                    ;
    
}


    auto Advertisement::getArtist() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->artist;
    
}


    auto Advertisement::setArtist(std::string artist) -> void{
this->artist= artist;
    
}


    auto Advertisement::getArtistLink() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->artistLink;
    
}


    auto Advertisement::setArtistLink(std::string artistLink) -> void{
this->artistLink= artistLink;
    
}


    auto Advertisement::getTitle() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->title;
    
}


    auto Advertisement::setTitle(std::string title) -> void{
this->title= title;
    
}


    auto Advertisement::getDateAdded() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dateAdded;
    
}


    auto Advertisement::setDateAdded(std::string dateAdded) -> void{
this->dateAdded= dateAdded;
    
}


    auto Advertisement::getDirectory() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory;
    
}


    auto Advertisement::setDirectory(std::string directory) -> void{
this->directory= directory;
    
}


    auto Advertisement::getFramedLink() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->framedLink;
    
}


    auto Advertisement::setFramedLink(std::string framedLink) -> void{
this->framedLink= framedLink;
    
}


    auto Advertisement::getListPrice() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->listPrice;
    
}


    auto Advertisement::setListPrice(Money* listPrice) -> void{
this->listPrice= listPrice;
    
}


    auto Advertisement::getOurPrice() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ourPrice;
    
}


    auto Advertisement::setOurPrice(Money* ourPrice) -> void{
this->ourPrice= ourPrice;
    
}


    auto Advertisement::getRank() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rank;
    
}


    auto Advertisement::setRank(int32_t rank) -> void{
this->rank= rank;
    
}


    auto Advertisement::getImage() -> AdvertisementImageInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->image;
    
}


    auto Advertisement::setImage(AdvertisementImageInterface* image) -> void{
this->image= image;
    
}


    auto Advertisement::getProduct() -> AdvertisementProductInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->product;
    
}


    auto Advertisement::setProduct(AdvertisementProductInterface* product) -> void{
this->product= product;
    
}


    auto Advertisement::getThumbnail() -> AdvertisementThumbnailInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->thumbnail;
    
}


    auto Advertisement::setThumbnail(AdvertisementThumbnailInterface* thumbnail) -> void{
this->thumbnail= thumbnail;
    
}


    auto Advertisement::getDisplayInBrowserContraintsInterface() -> DisplayInBrowserContraintsInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->displayInBrowserContraintsInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENT_CPP
