
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_H

#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGeographicMapExtractedPathCacheFactory: public BaseBasicArrayListCache {
        

    private: static const instance: BasicGeographicMapExtractedPathCacheFactory = new BasicGeographicMapExtractedPathCacheFactory();

    public static BasicGeographicMapExtractedPathCacheFactory getInstance();

    private: maxConcurrentPaths: int32_t= 0;

    private: maxPaths: int32_t= 0;

private constructor ();

    public init(int32_t maxConcurrentPaths, int32_t maxPaths);

    public BasicArrayList getPath();

    public release(BasicArrayList list);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHCACHEFACTORY_H
