
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/advertisement/AdvertisementInterface.h>

      
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>

      
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementCampaignsInterface.h"

class AdvertisementCampaigns
            : public Object
        : public AdvertisementCampaignsInterface {

    private: BasicArrayList advertisementsVector;

public: AdvertisementCampaigns(BasicArrayList vector){
this->advertisementsVector= this->advertisementsVector;
    
}


    public: void add(AdvertisementInterface advertisementInterface){
this->advertisementsVector.add(advertisementInterface);
    
}


    public: AdvertisementInterface get(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->advertisementsVector.get(index) as AdvertisementInterface;
    
}


    public: int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->advertisementsVector.size();;
    
}


    public: bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: AdvertisementsInterface search(AdvertisementSearchInterface advertisementSearchInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

