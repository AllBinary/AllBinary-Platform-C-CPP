
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
        



        #ifndef ORG_ALLBINARY_GAME_GD_RESOURCE_GDLAZYRESOURCES_H
        #define ORG_ALLBINARY_GAME_GD_RESOURCE_GDLAZYRESOURCES_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GDLazyResources
            : public Object
         {
        

    private: static const instance: GDLazyResources = new GDLazyResources();

    public static GDLazyResources getInstance();

    public const imageResourceWidthArray: std::vector<int32_t> = [];

    public const imageResourceHeightArray: std::vector<int32_t> = [];

    public const requiredResourcesBeforeLoadingArray: std::vector<string> = 
                                                        [
                                                            
                                                        ];

};

            


        #endif //ORG_ALLBINARY_GAME_GD_RESOURCE_GDLAZYRESOURCES_H
