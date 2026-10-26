
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementProcessorInterface.h"

class Advertisements
            : public Object
         {

    private: const BasicArrayList bannerList = BasicArrayListD();

    private: const BasicArrayList pageList = BasicArrayListD();

    public: void addPage(AdvertisementProcessorInterface advertisementProcessorInterface){

                        if(!this->pageList.contains(advertisementProcessorInterface))
                        
                                    {
                                    this->pageList.add(advertisementProcessorInterface);
    

                                    }
                                
}


    public: void startRandomPage(){

    int32_t size = this->pageList.size();;
    

                        if(size > 0)
                        
                                    {
                                    
    int32_t random = this->myRandomFactory.getAbsoluteNextInt(size);;
    

    AdvertisementProcessorInterface advertisementProcessorInterface = this->pageList.objectArray[random];;
    
advertisementProcessorInterface.start();
    

                                    }
                                
}


    private: const MyRandomFactory myRandomFactory = MyRandomFactory::getInstance();

    public: void processRandomPage(){

                        if(LockedUtil::getInstance().isLocked())
                        
                                    {
                                    
    int32_t size = this->pageList.size();;
    

                        if(size > 0)
                        
                                    {
                                    
    int32_t random = this->myRandomFactory.getAbsoluteNextInt(size);;
    

    AdvertisementProcessorInterface advertisementProcessorInterface = this->pageList.objectArray[random];;
    
advertisementProcessorInterface.process();
    

                                    }
                                

                                    }
                                
}


    public: void stopAllPage(){




                        for (
    int32_t index = this->pageList.size();--index >= 0; )
        {

    AdvertisementProcessorInterface advertisementProcessorInterface = this->pageList.objectArray[index];;
    
advertisementProcessorInterface.stop();
    
}

}


    public: void addBanner(AdvertisementProcessorInterface advertisementProcessorInterface){

                        if(!this->bannerList.contains(advertisementProcessorInterface))
                        
                                    {
                                    this->bannerList.add(advertisementProcessorInterface);
    

                                    }
                                
}


    public: void startAll(){




                        for (
    int32_t index = this->bannerList.size();--index >= 0; )
        {

    AdvertisementProcessorInterface advertisementProcessorInterface = this->bannerList.objectArray[index];;
    
advertisementProcessorInterface.start();
    
}

}


    public: void stopAllBanner(){




                        for (
    int32_t index = this->bannerList.size();--index >= 0; )
        {

    AdvertisementProcessorInterface advertisementProcessorInterface = this->bannerList.objectArray[index];;
    
advertisementProcessorInterface.stop();
    
}

}


    public: AdvertisementProcessorInterface getBanner(int32_t index){

    AdvertisementProcessorInterface advertisementProcessorInterface = this->bannerList.objectArray[index];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return advertisementProcessorInterface;
    
}


    public: void stopAll(){
this->stopAllBanner();
    
this->stopAllPage();
    
}


};

            

