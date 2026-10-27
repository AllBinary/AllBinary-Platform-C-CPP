
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_CPP
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/resource/FeatureResourceInitializationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/resource/FeaturedResourceFactory.h"
#include "org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h"


FeatureResourceInitializationUtil::FeatureResourceInitializationUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto FeatureResourceInitializationUtil::instance_owner() -> FeatureResourceInitializationUtil* { static std::unique_ptr<FeatureResourceInitializationUtil> value(new FeatureResourceInitializationUtil()); return value.get(); }
FeatureResourceInitializationUtil* FeatureResourceInitializationUtil::instance = FeatureResourceInitializationUtil::instance_owner();

    auto FeatureResourceInitializationUtil::getInstance() -> FeatureResourceInitializationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FeatureResourceInitializationUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto FeatureResourceInitializationUtil::init(int32_t level) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->INIT);
    

    FeaturedResourceFactory* featuredResourceFactory = FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance();;
    
featuredResourceFactory->init(level);
    
FeaturedResourceRelativeRelationshipFactory::getInstance()->init(level);
    
}




        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_CPP
