
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H

#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGeographicMapExtractedPathCacheFactory.h"

class BasicGeographicMapExtractedPathsCacheFactory: public BaseBasicArrayListCache {

    private: static BasicGeographicMapExtractedPathsCacheFactory instance() { return BasicGeographicMapExtractedPathsCacheFactory(); }

    public: static BasicGeographicMapExtractedPathsCacheFactory getInstance();

    private: int32_t maxConcurrentPaths= 0;

    private: int32_t maxPaths= 0;

private: BasicGeographicMapExtractedPathsCacheFactory();

    public: void init(int32_t maxConcurrentPaths, int32_t maxPaths);

    public: BasicArrayList getPaths();

    public: void release(BasicArrayList list);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H
