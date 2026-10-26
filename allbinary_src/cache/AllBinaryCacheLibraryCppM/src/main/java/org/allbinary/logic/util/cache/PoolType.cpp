
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CacheType.h"

class PoolType
            : public Object
         {

    private: CacheType cacheType;

public: PoolType(CacheType cacheType){
this->cacheType= cacheType;
    
}


    public: CacheType getCacheType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cacheType;
    
}


    public: std::string toString(){

    std::string POOL_TYPE = "PoolType: ";;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return POOL_TYPE +this->getCacheType().toString();
    
}


};

            

