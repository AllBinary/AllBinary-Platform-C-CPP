
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

            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PointsResources
            : public Object
         {
        

    private: static const SINGLETON: PointsResources = new PointsResources();

    public static PointsResources getInstance();

    public RESOURCE: string = "points_drop_20_by_20.png";

    public RESOURCE_2: string = "points_2_drop_20_by_20.png";

    public RESOURCE_3: string = "points_3_drop_20_by_20.png";

    public RESOURCE_4: string = "points_4_drop_20_by_20.png";

private constructor ();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSRESOURCES_H
