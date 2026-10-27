
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BasicArrayList;
#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>
class BasicArrayListS;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicGeographicMapExtractedPathCacheFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGeographicMapExtractedPathsCacheFactory: public BaseBasicArrayListCache {

    private: static BasicGeographicMapExtractedPathsCacheFactory* instance_owner();
    private: static BasicGeographicMapExtractedPathsCacheFactory* instance;

    public: static BasicGeographicMapExtractedPathsCacheFactory* getInstance();

    private: int32_t maxConcurrentPaths= 0;

    private: int32_t maxPaths= 0;

private: BasicGeographicMapExtractedPathsCacheFactory();

    public: void init(int32_t maxConcurrentPaths, int32_t maxPaths);

    public: BasicArrayList* getPaths();

    public: void release(BasicArrayList* list);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_BASICGEOGRAPHICMAPEXTRACTEDPATHSCACHEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>)
#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathCacheFactory.h")
#include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathCacheFactory.h"
#endif

        #endif
    
