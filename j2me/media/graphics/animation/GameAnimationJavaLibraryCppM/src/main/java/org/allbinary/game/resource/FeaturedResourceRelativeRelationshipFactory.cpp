
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_CPP
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/relationship/RelativeLayerRelationship.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/resource/FeaturedResourceFactory.h"
#include "org/allbinary/game/resource/ResourceRelativeRelationshipFactoryInterface.h"

auto FeaturedResourceRelativeRelationshipFactory::INSTANCE_owner() -> FeaturedResourceRelativeRelationshipFactory* { static std::unique_ptr<FeaturedResourceRelativeRelationshipFactory> value(new FeaturedResourceRelativeRelationshipFactory()); return value.get(); }
FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory::INSTANCE = FeaturedResourceRelativeRelationshipFactory::INSTANCE_owner();

FeaturedResourceRelativeRelationshipFactory::FeaturedResourceRelativeRelationshipFactory() : basicArrayListUtil(BasicArrayListUtil::getInstance()){
}


    auto FeaturedResourceRelativeRelationshipFactory::getInstance() -> FeaturedResourceRelativeRelationshipFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FeaturedResourceRelativeRelationshipFactory::INSTANCE;
    
}


                //@Throws(Exception.constructor)
            
    auto FeaturedResourceRelativeRelationshipFactory::getRelativeRelationshipList(std::string resource, AllBinaryLayer* layer) -> BasicArrayList*{

    BasicArrayList* featureReleaseList = this->getList();;
    

    int32_t size = this->getList()->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ResourceRelativeRelationshipFactoryInterface* featureInterface = dynamic_cast<ResourceRelativeRelationshipFactoryInterface*>(featureReleaseList->objectArray[index]);;
    

                        if(featureInterface->isFeature())
                        
                                    {
                                    
    BasicArrayList* list = featureInterface->getResourceRelativeRelationshipList(resource);;
    

                        if(list != this->basicArrayListUtil->getImmutableInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->duplicate(list, layer);;
    

                                    }
                                

                                    }
                                
}




                            throw Exception((new StringMaker())->append("Not available for current feature selection or Resource: ")->append(resource)->toString());
                    
}


                //@Throws(Exception.constructor)
            
    auto FeaturedResourceRelativeRelationshipFactory::duplicate(BasicArrayList* list, AllBinaryLayer* layer) -> BasicArrayList*{

    PointFactory* pointFactory = PointFactory::getInstance();;
    

    BasicArrayList* newList = new BasicArrayListD();;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    RelativeRelationship* relativeRelationship = dynamic_cast<RelativeRelationship*>(list->objectArray[index]);;
    
newList->add(new RelativeLayerRelationship(layer, pointFactory->createXY(relativeRelationship->getX(), relativeRelationship->getY()), BasicArrayListUtil::getInstance()->getImmutableInstance()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newList;
    
}




        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATUREDRESOURCERELATIVERELATIONSHIPFACTORY_CPP
