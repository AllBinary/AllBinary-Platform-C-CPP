
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCE_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeologicalResource
            : public Object
         {
        

    private: total: int32_t= 0;

    private: initTotal: int32_t;

public constructor (int32_t initTotal);

    public init();

    public add(int32_t value);

    public remove(int32_t value);

    public int32_t getTotal();

    setTotal(int32_t total);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCE_H
