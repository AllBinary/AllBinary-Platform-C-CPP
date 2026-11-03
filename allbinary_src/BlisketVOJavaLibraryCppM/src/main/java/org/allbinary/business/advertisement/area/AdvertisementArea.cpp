
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/area/AdvertisementArea.h"
        

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


AdvertisementArea::AdvertisementArea(HashMap<Object*, Object*>* hashMap){
this->name= JavaBoxes::unbox<std::string>(hashMap->get(AdvertisementAreaData::getInstance()->NAME));
    
this->storeName= JavaBoxes::unbox<std::string>(hashMap->get(StoreFrontData::getInstance()->NAME));
    
this->description= JavaBoxes::unbox<std::string>(hashMap->get(AdvertisementAreaData::getInstance()->DESCRIPTION));
    

    std::string constraintsDomString = JavaBoxes::unbox<std::string>(hashMap->get(AdvertisementAreaData::getInstance()->CONSTRAINTS));;
    

    Document* document = DomDocumentHelper::create(constraintsDomString);;
    
this->advertisementAreaConstraintsInterface= new AdvertisementAreaConstraints(document);
    
this->campaign= JavaBoxes::unbox<std::string>(hashMap->get(AdvertisementCampaignData::getInstance()->NAME));
    
}


    auto AdvertisementArea::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto AdvertisementArea::getStoreName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->storeName;
    
}


    auto AdvertisementArea::getDescription() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->description;
    
}


    auto AdvertisementArea::getConstraints() -> AdvertisementAreaConstraintsInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->advertisementAreaConstraintsInterface;
    
}


    auto AdvertisementArea::getCampaign() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->campaign;
    
}


    auto AdvertisementArea::setName(std::string name) -> void{
this->name= name;
    
}


    auto AdvertisementArea::setStoreName(std::string storeName) -> void{
this->storeName= storeName;
    
}


    auto AdvertisementArea::setDescription(std::string description) -> void{
this->description= description;
    
}


    auto AdvertisementArea::setConstraints(AdvertisementAreaConstraintsInterface* advertisementConstraintsInterface) -> void{
this->advertisementAreaConstraintsInterface= this->advertisementAreaConstraintsInterface;
    
}


    auto AdvertisementArea::setCampaign(std::string campaign) -> void{
this->campaign= campaign;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREA_CPP
