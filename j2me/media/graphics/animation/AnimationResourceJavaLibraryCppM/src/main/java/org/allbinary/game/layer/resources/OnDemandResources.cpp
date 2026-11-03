
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/resources/OnDemandResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto OnDemandResources::NULL_ON_DEMAND_RESOURCES_owner() -> OnDemandResources* { static std::unique_ptr<OnDemandResources> value(new OnDemandResources()); return value.get(); }
OnDemandResources* OnDemandResources::NULL_ON_DEMAND_RESOURCES = OnDemandResources::NULL_ON_DEMAND_RESOURCES_owner();

OnDemandResources::OnDemandResources() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto OnDemandResources::waitFor() -> void{
}


                //@Throws(Exception.constructor)
            
    auto OnDemandResources::init() -> void{
}


                //@Throws(Exception.constructor)
            
    auto OnDemandResources::initAt(ImageCache* imageCache, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory, int32_t portion, std::string loadingString, int32_t index) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_CPP
