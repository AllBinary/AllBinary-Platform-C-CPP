
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_CPP
        #define ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/resource/ResourceRelativeRelationshipFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/resource/ResourceRelativeRelationshipFactoryInterface.h"


ResourceRelativeRelationshipFactory::ResourceRelativeRelationshipFactory() : basicArrayListUtil(BasicArrayListUtil::getInstance()), hashtable(StdUtil::getInstance()->createHashtable()) {
        }
        
                //@Throws(Exception.constructor)
            
    auto ResourceRelativeRelationshipFactory::init(int32_t level) -> void{
this->setInitialized(true);
    
}


                //@Throws(Exception.constructor)
            
    auto ResourceRelativeRelationshipFactory::getResourceRelativeRelationshipList(std::string resource) -> BasicArrayList*{

    Object* listCanBeNull = JavaBoxes::toObject(this->hashtable->get(resource));;
    

                        if(listCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicArrayListUtil->getImmutableInstance();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<BasicArrayList*>(listCanBeNull);
    
}


                //@Throws(Exception.constructor)
            
    auto ResourceRelativeRelationshipFactory::addResourceRelativeRelationship(std::string resource, RelativeRelationship* hardPoint) -> void{

    BasicArrayList* list = this->getResourceRelativeRelationshipList(resource);;
    

                        if(list == this->basicArrayListUtil->getImmutableInstance())
                        
                                    {
                                    list= new BasicArrayListD();
    

                                    }
                                
list->add(hardPoint);
    
this->hashtable->put(resource, list);
    
}


    auto ResourceRelativeRelationshipFactory::isLoadingLevel(int32_t level) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto ResourceRelativeRelationshipFactory::isFeature() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto ResourceRelativeRelationshipFactory::setInitialized(bool initialized) -> void{
this->initialized= initialized;
    
}


    auto ResourceRelativeRelationshipFactory::isInitialized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->initialized;
    
}




        #endif //ORG_ALLBINARY_GAME_RESOURCE_RESOURCERELATIVERELATIONSHIPFACTORY_CPP
