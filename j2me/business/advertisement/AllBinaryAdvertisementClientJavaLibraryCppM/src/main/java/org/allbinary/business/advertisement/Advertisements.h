
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementProcessorInterface.h"

class Advertisements
            : public Object
         {
        

    private: const bannerList: BasicArrayList = new BasicArrayListD();

    private: const pageList: BasicArrayList = new BasicArrayListD();

    public addPage(AdvertisementProcessorInterface advertisementProcessorInterface);

    public startRandomPage();

    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    public processRandomPage();

    public stopAllPage();

    public addBanner(AdvertisementProcessorInterface advertisementProcessorInterface);

    public startAll();

    public stopAllBanner();

    public AdvertisementProcessorInterface getBanner(int32_t index);

    public stopAll();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H
