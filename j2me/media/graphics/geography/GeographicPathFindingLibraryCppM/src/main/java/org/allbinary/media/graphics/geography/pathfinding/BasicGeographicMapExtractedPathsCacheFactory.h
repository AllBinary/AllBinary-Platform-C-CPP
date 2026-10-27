
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathCacheFactory.h"

class BasicGeographicMapExtractedPathsCacheFactory: public BaseBasicArrayListCache {

    private: static BasicGeographicMapExtractedPathsCacheFactory* instance() { static std::unique_ptr<BasicGeographicMapExtractedPathsCacheFactory> value(new BasicGeographicMapExtractedPathsCacheFactory()); return value.get(); }

    public: static BasicGeographicMapExtractedPathsCacheFactory* getInstance();

    private: int32_t maxConcurrentPaths= 0;

    private: int32_t maxPaths= 0;

private: BasicGeographicMapExtractedPathsCacheFactory();

    public: void init(int32_t maxConcurrentPaths, int32_t maxPaths);

    public: BasicArrayList* getPaths();

    public: void release(BasicArrayList* list);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H
