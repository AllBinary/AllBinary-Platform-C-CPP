
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

public constructor (){

            super();
        this.displayInBrowserContraintsInterface= 
                                        nullptr
                                    ;
    
}


    public string getArtist(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.artist;
    
}


    public setArtist(string artist){
this.artist= artist;
    
}


    public string getArtistLink(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.artistLink;
    
}


    public setArtistLink(string artistLink){
this.artistLink= artistLink;
    
}


    public string getTitle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.title;
    
}


    public setTitle(string title){
this.title= title;
    
}


    public string getDateAdded(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dateAdded;
    
}


    public setDateAdded(string dateAdded){
this.dateAdded= dateAdded;
    
}


    public string getDirectory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.directory;
    
}


    public setDirectory(string directory){
this.directory= directory;
    
}


    public string getFramedLink(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.framedLink;
    
}


    public setFramedLink(string framedLink){
this.framedLink= framedLink;
    
}


    public Money getListPrice(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.listPrice;
    
}


    public setListPrice(Money listPrice){
this.listPrice= listPrice;
    
}


    public Money getOurPrice(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ourPrice;
    
}


    public setOurPrice(Money ourPrice){
this.ourPrice= ourPrice;
    
}


    public int32_t getRank(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rank;
    
}


    public setRank(int32_t rank){
this.rank= rank;
    
}


    public AdvertisementImageInterface getImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.image;
    
}


    public setImage(AdvertisementImageInterface image){
this.image= image;
    
}


    public AdvertisementProductInterface getProduct(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.product;
    
}


    public setProduct(AdvertisementProductInterface product){
this.product= product;
    
}


    public AdvertisementThumbnailInterface getThumbnail(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.thumbnail;
    
}


    public setThumbnail(AdvertisementThumbnailInterface thumbnail){
this.thumbnail= thumbnail;
    
}


    public DisplayInBrowserContraintsInterface getDisplayInBrowserContraintsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.displayInBrowserContraintsInterface;
    
}


};

            

