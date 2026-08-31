
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementAreaInterface.h"
#include "AdvertisementAreaConstraintsInterface.h"
#include "AdvertisementAreaData.h"
#include "AdvertisementAreaConstraints.h"

class AdvertisementArea
            : public Object
        : public AdvertisementAreaInterface {
        

    private: name: string;

    private: storeName: string;

    private: description: string;

    private: advertisementAreaConstraintsInterface: AdvertisementAreaConstraintsInterface;

    private: campaign: string;

public constructor (HashMap<any, any> hashMap){

            super();
        this.name= hashMap!.get(AdvertisementAreaData.getInstance()!.NAME) as string;
    
this.storeName= hashMap!.get(StoreFrontData.getInstance()!.NAME) as string;
    
this.description= hashMap!.get(AdvertisementAreaData.getInstance()!.DESCRIPTION) as string;
    

    constraintsDomString: string = hashMap!.get(AdvertisementAreaData.getInstance()!.CONSTRAINTS) as string;;
    

    document: Document = DomDocumentHelper.create(constraintsDomString)!;;
    
this.advertisementAreaConstraintsInterface= new AdvertisementAreaConstraints(document);
    
this.campaign= hashMap!.get(AdvertisementCampaignData.getInstance()!.NAME) as string;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeName;
    
}


    public string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.description;
    
}


    public AdvertisementAreaConstraintsInterface getConstraints(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.advertisementAreaConstraintsInterface;
    
}


    public string getCampaign(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.campaign;
    
}


    public setName(string name){
this.name= name;
    
}


    public setStoreName(string storeName){
this.storeName= storeName;
    
}


    public setDescription(string description){
this.description= description;
    
}


    public setConstraints(AdvertisementAreaConstraintsInterface advertisementConstraintsInterface){
this.advertisementAreaConstraintsInterface= this.advertisementAreaConstraintsInterface;
    
}


    public setCampaign(string campaign){
this.campaign= campaign;
    
}


};

            

