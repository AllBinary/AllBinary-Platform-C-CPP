
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHCACHEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHCACHEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathCacheFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto PathCacheFactory::pathFactory_owner() -> PathCacheFactory* { static std::unique_ptr<PathCacheFactory> value(new PathCacheFactory()); return value.get(); }
PathCacheFactory* PathCacheFactory::pathFactory = PathCacheFactory::pathFactory_owner();

PathCacheFactory::PathCacheFactory() : basicArrayListUtil(BasicArrayListUtil::getInstance()), hashtable(StdUtil::getInstance()->createHashtable()){
}


    auto PathCacheFactory::getInstance() -> PathCacheFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathCacheFactory::pathFactory;
    
}


    auto PathCacheFactory::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable->size();;
    
}


    auto PathCacheFactory::add(int32_t pathId, BasicArrayList* list) -> void{
this->hashtable->put(pathId, list);
    
}


    auto PathCacheFactory::remove(int32_t pathId) -> void{
this->hashtable->remove(pathId);
    
}


                //@Throws(Exception.constructor)
            
    auto PathCacheFactory::removeAll() -> void{
this->hashtable->clear();
    

                        if(this->hashtable->size() > 0)
                        
                                    {
                                    


                            throw Exception("Did not clear");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto PathCacheFactory::getOrCreate(int32_t pathIdInteger) -> BasicArrayList*{

    Object* listCanBeNull = this->hashtable->get(pathIdInteger);;
    

                        if(listCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    listCanBeNull= this->basicArrayListUtil->getImmutableInstance();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BasicArrayList*>(listCanBeNull);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHCACHEFACTORY_CPP
