
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALTHRESOURCES_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALTHRESOURCES_H

            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HealthResources
            : public Object
         {

    private: static const HealthResources SINGLETON = HealthResources();

    public: static HealthResources getInstance();

    public: std::string RESOURCE = "health_drop_20_by_20.png";

private: HealthResources();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALTHRESOURCES_H
