
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

public: Advertisement(){
this->displayInBrowserContraintsInterface= 
                                        nullptr
                                    ;
    
}


    public: std::string getArtist(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->artist;
    
}


    public: void setArtist(std::string artist){
this->artist= artist;
    
}


    public: std::string getArtistLink(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->artistLink;
    
}


    public: void setArtistLink(std::string artistLink){
this->artistLink= artistLink;
    
}


    public: std::string getTitle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->title;
    
}


    public: void setTitle(std::string title){
this->title= title;
    
}


    public: std::string getDateAdded(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dateAdded;
    
}


    public: void setDateAdded(std::string dateAdded){
this->dateAdded= dateAdded;
    
}


    public: std::string getDirectory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory;
    
}


    public: void setDirectory(std::string directory){
this->directory= directory;
    
}


    public: std::string getFramedLink(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->framedLink;
    
}


    public: void setFramedLink(std::string framedLink){
this->framedLink= framedLink;
    
}


    public: Money getListPrice(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->listPrice;
    
}


    public: void setListPrice(Money listPrice){
this->listPrice= listPrice;
    
}


    public: Money getOurPrice(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ourPrice;
    
}


    public: void setOurPrice(Money ourPrice){
this->ourPrice= ourPrice;
    
}


    public: int32_t getRank(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rank;
    
}


    public: void setRank(int32_t rank){
this->rank= rank;
    
}


    public: AdvertisementImageInterface getImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->image;
    
}


    public: void setImage(AdvertisementImageInterface image){
this->image= image;
    
}


    public: AdvertisementProductInterface getProduct(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->product;
    
}


    public: void setProduct(AdvertisementProductInterface product){
this->product= product;
    
}


    public: AdvertisementThumbnailInterface getThumbnail(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->thumbnail;
    
}


    public: void setThumbnail(AdvertisementThumbnailInterface thumbnail){
this->thumbnail= thumbnail;
    
}


    public: DisplayInBrowserContraintsInterface getDisplayInBrowserContraintsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->displayInBrowserContraintsInterface;
    
}


};

            

