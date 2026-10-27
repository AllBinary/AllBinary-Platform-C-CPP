
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PointFactory;
class RelativeRelationship;
class AllBinaryLayer;
class RelativeLayerRelationship;
class StringMaker;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/resource/FeaturedResourceFactory.h"
class ResourceRelativeRelationshipFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FeaturedResourceRelativeRelationshipFactory: public FeaturedResourceFactory {

    private: static FeaturedResourceRelativeRelationshipFactory* INSTANCE_owner();
    private: static FeaturedResourceRelativeRelationshipFactory* INSTANCE;

    public: static FeaturedResourceRelativeRelationshipFactory* getInstance();

private: FeaturedResourceRelativeRelationshipFactory();

    private: BasicArrayListUtil* basicArrayListUtil;

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getRelativeRelationshipList(std::string resource, AllBinaryLayer* layer);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* duplicate(BasicArrayList* list, AllBinaryLayer* layer);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/RelativeRelationship.h>)
#include <org/allbinary/graphics/RelativeRelationship.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/relationship/RelativeLayerRelationship.h>)
#include <org/allbinary/layer/relationship/RelativeLayerRelationship.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/game/resource/FeaturedResourceFactory.h")
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"
#endif
#if __has_include("org/allbinary/game/resource/ResourceRelativeRelationshipFactoryInterface.h")
#include "org/allbinary/game/resource/ResourceRelativeRelationshipFactoryInterface.h"
#endif

        #endif
    
