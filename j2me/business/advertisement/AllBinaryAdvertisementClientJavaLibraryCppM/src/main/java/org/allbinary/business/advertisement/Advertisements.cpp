
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

    public addPage(AdvertisementProcessorInterface advertisementProcessorInterface){

                        if(!this.pageList!.contains(advertisementProcessorInterface))
                        
                                    {
                                    this.pageList!.add(advertisementProcessorInterface);
    

                                    }
                                
}


    public startRandomPage(){

    size: int32_t = this.pageList!.size()!;;
    

                        if(size > 0)
                        
                                    {
                                    
    random: int32_t = this.myRandomFactory!.getAbsoluteNextInt(size)!;;
    

    advertisementProcessorInterface: AdvertisementProcessorInterface = this.pageList!.objectArray[random]! as AdvertisementProcessorInterface;;
    
advertisementProcessorInterface!.start();
    

                                    }
                                
}


    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    public processRandomPage(){

                        if(LockedUtil.getInstance()!.isLocked())
                        
                                    {
                                    
    size: int32_t = this.pageList!.size()!;;
    

                        if(size > 0)
                        
                                    {
                                    
    random: int32_t = this.myRandomFactory!.getAbsoluteNextInt(size)!;;
    

    advertisementProcessorInterface: AdvertisementProcessorInterface = this.pageList!.objectArray[random]! as AdvertisementProcessorInterface;;
    
advertisementProcessorInterface!.process();
    

                                    }
                                

                                    }
                                
}


    public stopAllPage(){




                        for (
    index: int32_t = this.pageList!.size()!;--index >= 0; )
        {

    advertisementProcessorInterface: AdvertisementProcessorInterface = this.pageList!.objectArray[index]! as AdvertisementProcessorInterface;;
    
advertisementProcessorInterface!.stop();
    
}

}


    public addBanner(AdvertisementProcessorInterface advertisementProcessorInterface){

                        if(!this.bannerList!.contains(advertisementProcessorInterface))
                        
                                    {
                                    this.bannerList!.add(advertisementProcessorInterface);
    

                                    }
                                
}


    public startAll(){




                        for (
    index: int32_t = this.bannerList!.size()!;--index >= 0; )
        {

    advertisementProcessorInterface: AdvertisementProcessorInterface = this.bannerList!.objectArray[index]! as AdvertisementProcessorInterface;;
    
advertisementProcessorInterface!.start();
    
}

}


    public stopAllBanner(){




                        for (
    index: int32_t = this.bannerList!.size()!;--index >= 0; )
        {

    advertisementProcessorInterface: AdvertisementProcessorInterface = this.bannerList!.objectArray[index]! as AdvertisementProcessorInterface;;
    
advertisementProcessorInterface!.stop();
    
}

}


    public AdvertisementProcessorInterface getBanner(int32_t index){

    advertisementProcessorInterface: AdvertisementProcessorInterface = this.bannerList!.objectArray[index]! as AdvertisementProcessorInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return advertisementProcessorInterface;
    
}


    public stopAll(){
this.stopAllBanner();
    
this.stopAllPage();
    
}


};

            

