
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaData.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraints.h"

class AdvertisementArea
            : public Object
        , public AdvertisementAreaInterface {

    private: std::string name;

    private: std::string storeName;

    private: std::string description;

    private: AdvertisementAreaConstraintsInterface* advertisementAreaConstraintsInterface;

    private: std::string campaign;

public: AdvertisementArea(HashMap<Object*, Object*>* hashMap){
this->name= hashMap->get(AdvertisementAreaData::getInstance()->NAME);
    
this->storeName= hashMap->get(StoreFrontData::getInstance()->NAME);
    
this->description= hashMap->get(AdvertisementAreaData::getInstance()->DESCRIPTION);
    

    std::string constraintsDomString = hashMap->get(AdvertisementAreaData::getInstance()->CONSTRAINTS);;
    

    Document* document = DomDocumentHelper::create(constraintsDomString);;
    
this->advertisementAreaConstraintsInterface= new AdvertisementAreaConstraints(document);
    
this->campaign= hashMap->get(AdvertisementCampaignData::getInstance()->NAME);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeName;
    
}


    public: std::string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->description;
    
}


    public: AdvertisementAreaConstraintsInterface* getConstraints(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->advertisementAreaConstraintsInterface;
    
}


    public: std::string getCampaign(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->campaign;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: void setStoreName(std::string storeName){
this->storeName= storeName;
    
}


    public: void setDescription(std::string description){
this->description= description;
    
}


    public: void setConstraints(AdvertisementAreaConstraintsInterface* advertisementConstraintsInterface){
this->advertisementAreaConstraintsInterface= this->advertisementAreaConstraintsInterface;
    
}


    public: void setCampaign(std::string campaign){
this->campaign= campaign;
    
}


};

            

