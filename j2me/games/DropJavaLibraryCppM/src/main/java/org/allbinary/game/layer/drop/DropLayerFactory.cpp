
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DropLayerFactory
            : public Object
         {

    private: static const DropLayerFactory DROP_LAYER_FACTORY = DropLayerFactory();

    public: static DropLayerFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DropLayerFactory::DROP_LAYER_FACTORY;
    
}


    private: const BasicArrayList list = BasicArrayListD();

private: DropLayerFactory(){
}


    public: void clear(){
this->list.clear();
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list.size();;
    
}


    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    public: PickedUpLayerInterfaceFactoryInterface getRandomInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil.getRandom(this->list);
    
}


    public: void add(PickedUpLayerInterfaceFactoryInterface layerInterfaceFactoryInterface){
this->list.add(layerInterfaceFactoryInterface);
    
}


    public: BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

