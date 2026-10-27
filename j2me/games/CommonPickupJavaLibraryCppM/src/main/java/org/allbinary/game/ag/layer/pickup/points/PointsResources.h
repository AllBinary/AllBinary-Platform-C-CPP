
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PointsResources
            : public Object
         {

    private: static PointsResources* SINGLETON() { static std::unique_ptr<PointsResources> value(new PointsResources()); return value.get(); }

    public: static PointsResources* getInstance();

    public: std::string RESOURCE = "points_drop_20_by_20.png";

    public: std::string RESOURCE_2 = "points_2_drop_20_by_20.png";

    public: std::string RESOURCE_3 = "points_3_drop_20_by_20.png";

    public: std::string RESOURCE_4 = "points_4_drop_20_by_20.png";

private: PointsResources();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_H
