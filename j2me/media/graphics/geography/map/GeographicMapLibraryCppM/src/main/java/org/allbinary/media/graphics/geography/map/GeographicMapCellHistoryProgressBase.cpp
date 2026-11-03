
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESSBASE_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESSBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistoryProgressBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GeographicMapCellHistoryProgressBase::instance_owner() -> GeographicMapCellHistoryProgressBase* { static std::unique_ptr<GeographicMapCellHistoryProgressBase> value(new GeographicMapCellHistoryProgressBase()); return value.get(); }
GeographicMapCellHistoryProgressBase* GeographicMapCellHistoryProgressBase::instance = GeographicMapCellHistoryProgressBase::instance_owner();

    auto GeographicMapCellHistoryProgressBase::getInstance() -> GeographicMapCellHistoryProgressBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GeographicMapCellHistoryProgressBase::instance;
    
}


GeographicMapCellHistoryProgressBase::GeographicMapCellHistoryProgressBase(){
}


    auto GeographicMapCellHistoryProgressBase::init() -> void{



                            throw RuntimeException();
                    
}


    auto GeographicMapCellHistoryProgressBase::isAnyProgress() -> bool{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESSBASE_CPP
