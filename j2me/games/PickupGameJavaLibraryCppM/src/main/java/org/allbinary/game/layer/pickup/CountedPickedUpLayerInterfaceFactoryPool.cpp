
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CountedPickedUpLayerInterfaceFactoryPool
            : public Object
         {
        

    private: static SINGLETON: CountedPickedUpLayerInterfaceFactoryPool = new CountedPickedUpLayerInterfaceFactoryPool();

    public static CountedPickedUpLayerInterfaceFactoryPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CountedPickedUpLayerInterfaceFactoryPool.SINGLETON;
    
}


    public static init(){
CountedPickedUpLayerInterfaceFactoryPool.SINGLETON= new CountedPickedUpLayerInterfaceFactoryPool();
    
}


    private: list: BasicArrayList;

private constructor (){

            super();
        this.list= new BasicArrayListD();
    
}


    public BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


};

            

