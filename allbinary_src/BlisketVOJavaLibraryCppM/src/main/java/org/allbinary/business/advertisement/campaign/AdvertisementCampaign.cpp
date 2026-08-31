
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementsInterface.h>

      
#include <org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementCampaignInterface.h"
#include "AdvertisementCampaignData.h"

class AdvertisementCampaign
            : public Object
        : public AdvertisementCampaignInterface {
        

    private: hashMap: HashMap<any, any>;

public constructor (HashMap<any, any> hashMap){

            super();
        this.hashMap= hashMap;
    
}


    public any getComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashMap!.get(AdvertisementCampaignData.getInstance()!.NAME) as string;
    
}


    public setComponentName(string name){
this.hashMap!.put(DynamicObjectData.NAME, name);
    
}


    public setName(string name){
this.hashMap!.put(AdvertisementCampaignData.getInstance()!.NAME, name);
    
}


    public AdvertisementsInterface search(AdvertisementSearchInterface advertisementSearchInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

