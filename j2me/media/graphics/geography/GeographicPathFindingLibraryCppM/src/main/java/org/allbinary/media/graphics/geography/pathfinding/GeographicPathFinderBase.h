
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MultipassState;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicPathFinderBase
            : public virtual Object
         {

    private: static GeographicPathFinderBase* NULL_GEOGRAPHIC_PATH_FINDER_BASE_owner();
    public: static GeographicPathFinderBase* NULL_GEOGRAPHIC_PATH_FINDER_BASE;


            
    public: GeographicPathFinderBase();
        
    /*protected*/ public: CommonStrings* commonStrings;

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* searchTotalPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* searchTotalPathN(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/MultipassState.h")
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"
#endif

        #endif
    
