
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/pickup/points/PointsResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto PointsResources::SINGLETON_owner() -> PointsResources* { static std::unique_ptr<PointsResources> value(new PointsResources()); return value.get(); }
PointsResources* PointsResources::SINGLETON = PointsResources::SINGLETON_owner();

PointsResources::PointsResources(){
}


    auto PointsResources::getInstance() -> PointsResources*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PointsResources::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_CPP
