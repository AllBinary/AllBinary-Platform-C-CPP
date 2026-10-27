
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class MyRandomFactory;
class LockedUtil;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AdvertisementProcessorInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Advertisements
            : public virtual Object
         {


            
    public: Advertisements();
        
    private: BasicArrayList* bannerList;

    private: BasicArrayList* pageList;

    public: void addPage(AdvertisementProcessorInterface* advertisementProcessorInterface);

    public: void startRandomPage();

    private: MyRandomFactory* myRandomFactory;

    public: void processRandomPage();

    public: void stopAllPage();

    public: void addBanner(AdvertisementProcessorInterface* advertisementProcessorInterface);

    public: void startAll();

    public: void stopAllBanner();

    public: AdvertisementProcessorInterface* getBanner(int32_t index);

    public: void stopAll();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H_COMPLETE
        #if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LockedUtil.h>)
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/business/advertisement/AdvertisementProcessorInterface.h")
#include "org/allbinary/business/advertisement/AdvertisementProcessorInterface.h"
#endif

        #endif
    
