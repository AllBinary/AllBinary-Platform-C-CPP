
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

    private: int32_t total= 0;

    private: int32_t initTotal;

public: GeologicalResource(int32_t initTotal);

    public: void init();

    public: void add(int32_t value);

    public: void remove(int32_t value);

    public: int32_t getTotal();

    protected: void setTotal(int32_t total);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCE_H
