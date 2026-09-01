
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_H

#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGeographicMapExtractedPathCacheFactory: public BaseBasicArrayListCache {

    private: static BasicGeographicMapExtractedPathCacheFactory instance() { return BasicGeographicMapExtractedPathCacheFactory(); }

    public: static BasicGeographicMapExtractedPathCacheFactory getInstance();

    private: int32_t maxConcurrentPaths= 0;

    private: int32_t maxPaths= 0;

private: BasicGeographicMapExtractedPathCacheFactory();

    public: void init(int32_t maxConcurrentPaths, int32_t maxPaths);

    public: BasicArrayList getPath();

    public: void release(BasicArrayList list);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_H
