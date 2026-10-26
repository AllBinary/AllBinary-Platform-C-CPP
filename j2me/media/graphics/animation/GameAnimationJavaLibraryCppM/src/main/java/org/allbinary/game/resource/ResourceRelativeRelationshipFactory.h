
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_H
        #define ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResourceRelativeRelationshipFactoryInterface.h"

class ResourceRelativeRelationshipFactory
            : public Object
        : public ResourceRelativeRelationshipFactoryInterface {

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: const ABHashtable<Object*, Object*> hashtable = StdUtil::getInstance().createHashtable();

    private: bool initialized= false;

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getResourceRelativeRelationshipList(std::string resource);

                //@Throws(Exception.constructor)
            
    public: void addResourceRelativeRelationship(std::string resource, RelativeRelationship hardPoint);

    public: bool isLoadingLevel(int32_t level);

    public: bool isFeature();

    public: void setInitialized(bool initialized);

    public: bool isInitialized();

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_H
