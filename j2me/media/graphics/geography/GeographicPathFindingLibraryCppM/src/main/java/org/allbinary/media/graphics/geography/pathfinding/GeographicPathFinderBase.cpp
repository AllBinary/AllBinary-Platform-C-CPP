
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"

class GeographicPathFinderBase
            : public Object
         {

    public: static GeographicPathFinderBase* NULL_GEOGRAPHIC_PATH_FINDER_BASE() { static std::unique_ptr<GeographicPathFinderBase> value(new GeographicPathFinderBase()); return value.get(); }

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* searchTotalPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* searchTotalPathN(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState){



                            throw new RuntimeException();
                    
}


};

            

