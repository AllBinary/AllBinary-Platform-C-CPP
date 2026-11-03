
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/Advertisements.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/AdvertisementProcessorInterface.h"


Advertisements::Advertisements() : bannerList(new BasicArrayListD()), pageList(new BasicArrayListD()), myRandomFactory(MyRandomFactory::getInstance()) {
        }
        
    auto Advertisements::addPage(AdvertisementProcessorInterface* advertisementProcessorInterface) -> void{

                        if(!this->pageList->contains(advertisementProcessorInterface))
                        
                                    {
                                    this->pageList->add(advertisementProcessorInterface);
    

                                    }
                                
}


    auto Advertisements::startRandomPage() -> void{

    int32_t size = this->pageList->size();;
    

                        if(size > 0)
                        
                                    {
                                    
    int32_t random = this->myRandomFactory->getAbsoluteNextInt(size);;
    

    AdvertisementProcessorInterface* advertisementProcessorInterface = dynamic_cast<AdvertisementProcessorInterface*>(this->pageList->objectArray[random]);;
    
advertisementProcessorInterface->start();
    

                                    }
                                
}


    auto Advertisements::processRandomPage() -> void{

                        if(LockedUtil::getInstance()->isLocked())
                        
                                    {
                                    
    int32_t size = this->pageList->size();;
    

                        if(size > 0)
                        
                                    {
                                    
    int32_t random = this->myRandomFactory->getAbsoluteNextInt(size);;
    

    AdvertisementProcessorInterface* advertisementProcessorInterface = dynamic_cast<AdvertisementProcessorInterface*>(this->pageList->objectArray[random]);;
    
advertisementProcessorInterface->process();
    

                                    }
                                

                                    }
                                
}


    auto Advertisements::stopAllPage() -> void{




                        for (
    int32_t index = this->pageList->size();--index >= 0; )
        {

    AdvertisementProcessorInterface* advertisementProcessorInterface = dynamic_cast<AdvertisementProcessorInterface*>(this->pageList->objectArray[index]);;
    
advertisementProcessorInterface->stop();
    
}

}


    auto Advertisements::addBanner(AdvertisementProcessorInterface* advertisementProcessorInterface) -> void{

                        if(!this->bannerList->contains(advertisementProcessorInterface))
                        
                                    {
                                    this->bannerList->add(advertisementProcessorInterface);
    

                                    }
                                
}


    auto Advertisements::startAll() -> void{




                        for (
    int32_t index = this->bannerList->size();--index >= 0; )
        {

    AdvertisementProcessorInterface* advertisementProcessorInterface = dynamic_cast<AdvertisementProcessorInterface*>(this->bannerList->objectArray[index]);;
    
advertisementProcessorInterface->start();
    
}

}


    auto Advertisements::stopAllBanner() -> void{




                        for (
    int32_t index = this->bannerList->size();--index >= 0; )
        {

    AdvertisementProcessorInterface* advertisementProcessorInterface = dynamic_cast<AdvertisementProcessorInterface*>(this->bannerList->objectArray[index]);;
    
advertisementProcessorInterface->stop();
    
}

}


    auto Advertisements::getBanner(int32_t index) -> AdvertisementProcessorInterface*{

    AdvertisementProcessorInterface* advertisementProcessorInterface = dynamic_cast<AdvertisementProcessorInterface*>(this->bannerList->objectArray[index]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return advertisementProcessorInterface;
    
}


    auto Advertisements::stopAll() -> void{
this->stopAllBanner();
    
this->stopAllPage();
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_CPP
