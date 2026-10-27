
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathCacheFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto BasicGeographicMapExtractedPathCacheFactory::instance_owner() -> BasicGeographicMapExtractedPathCacheFactory* { static std::unique_ptr<BasicGeographicMapExtractedPathCacheFactory> value(new BasicGeographicMapExtractedPathCacheFactory()); return value.get(); }
BasicGeographicMapExtractedPathCacheFactory* BasicGeographicMapExtractedPathCacheFactory::instance = BasicGeographicMapExtractedPathCacheFactory::instance_owner();

    auto BasicGeographicMapExtractedPathCacheFactory::getInstance() -> BasicGeographicMapExtractedPathCacheFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGeographicMapExtractedPathCacheFactory::instance;
    
}


BasicGeographicMapExtractedPathCacheFactory::BasicGeographicMapExtractedPathCacheFactory(){
}


    auto BasicGeographicMapExtractedPathCacheFactory::init(int32_t maxConcurrentPaths, int32_t maxPaths) -> void{

                        if(maxConcurrentPaths != this->maxConcurrentPaths)
                        
                                    {
                                    



                        for (
    int32_t index = maxConcurrentPaths;index >= this->maxConcurrentPaths; index--)
        {
this->list->add(new BasicArrayListS(maxPaths));
    
}

this->maxConcurrentPaths= maxConcurrentPaths;
    

                                    }
                                
this->maxPaths= maxPaths;
    
}


    auto BasicGeographicMapExtractedPathCacheFactory::getPath() -> BasicArrayList*{

                        if(this->list->size() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BasicArrayList*>(this->list->removeAt(0));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicArrayListS(this->maxPaths);
    

                        }
                            
}


    auto BasicGeographicMapExtractedPathCacheFactory::release(BasicArrayList* list) -> void{
list->clear();
    
this->list->add(list);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_CPP
