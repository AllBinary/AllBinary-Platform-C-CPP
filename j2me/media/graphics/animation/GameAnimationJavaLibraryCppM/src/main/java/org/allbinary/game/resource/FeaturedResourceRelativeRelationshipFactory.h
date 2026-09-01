
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/relationship/RelativeLayerRelationship.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FeaturedResourceFactory.h"
#include "ResourceRelativeRelationshipFactoryInterface.h"

class FeaturedResourceRelativeRelationshipFactory: public FeaturedResourceFactory {

    private: static FeaturedResourceRelativeRelationshipFactory INSTANCE = FeaturedResourceRelativeRelationshipFactory();

    public: static FeaturedResourceRelativeRelationshipFactory getInstance();

private: FeaturedResourceRelativeRelationshipFactory();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getRelativeRelationshipList(std::string resource, AllBinaryLayer layer);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList duplicate(BasicArrayList list, AllBinaryLayer layer);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H
