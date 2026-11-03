
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathsCacheFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathCacheFactory.h"

auto BasicGeographicMapExtractedPathsCacheFactory::instance_owner() -> BasicGeographicMapExtractedPathsCacheFactory* { static std::unique_ptr<BasicGeographicMapExtractedPathsCacheFactory> value(new BasicGeographicMapExtractedPathsCacheFactory()); return value.get(); }
BasicGeographicMapExtractedPathsCacheFactory* BasicGeographicMapExtractedPathsCacheFactory::instance = BasicGeographicMapExtractedPathsCacheFactory::instance_owner();

    auto BasicGeographicMapExtractedPathsCacheFactory::getInstance() -> BasicGeographicMapExtractedPathsCacheFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGeographicMapExtractedPathsCacheFactory::instance;
    
}


BasicGeographicMapExtractedPathsCacheFactory::BasicGeographicMapExtractedPathsCacheFactory(){
}


    auto BasicGeographicMapExtractedPathsCacheFactory::init(int32_t maxConcurrentPaths, int32_t maxPaths) -> void{

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


    auto BasicGeographicMapExtractedPathsCacheFactory::getPaths() -> BasicArrayList*{

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


    auto BasicGeographicMapExtractedPathsCacheFactory::release(BasicArrayList* list) -> void{




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
BasicGeographicMapExtractedPathCacheFactory::getInstance()->release(dynamic_cast<BasicArrayList*>(list->get(index)));
    
}

list->clear();
    
this->list->add(list);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_CPP
