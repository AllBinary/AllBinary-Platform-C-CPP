
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CountedPickedUpLayerInterfaceFactoryPool
            : public Object
         {

    private: static CountedPickedUpLayerInterfaceFactoryPool* SINGLETON() { static std::unique_ptr<CountedPickedUpLayerInterfaceFactoryPool> value(new CountedPickedUpLayerInterfaceFactoryPool()); return value.get(); }

    public: static CountedPickedUpLayerInterfaceFactoryPool* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CountedPickedUpLayerInterfaceFactoryPool::SINGLETON();
    
}


    public: static void init(){
CountedPickedUpLayerInterfaceFactoryPool::SINGLETON()= new CountedPickedUpLayerInterfaceFactoryPool();
    
}


    private: BasicArrayList* list;

private: CountedPickedUpLayerInterfaceFactoryPool(){
this->list= new BasicArrayListD();
    
}


    public: BasicArrayList* getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

