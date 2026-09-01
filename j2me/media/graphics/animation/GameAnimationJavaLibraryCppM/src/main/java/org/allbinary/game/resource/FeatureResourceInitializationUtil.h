
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FeaturedResourceFactory.h"
#include "FeaturedResourceRelativeRelationshipFactory.h"

class FeatureResourceInitializationUtil
            : public Object
         {

    private: static FeatureResourceInitializationUtil instance() { return FeatureResourceInitializationUtil(); }

    public: static FeatureResourceInitializationUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H
