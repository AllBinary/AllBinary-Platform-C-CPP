
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlacedLayerFactory
            : public Object
         {

    private: static PlacedLayerFactory* instance() { static std::unique_ptr<PlacedLayerFactory> value(new PlacedLayerFactory()); return value.get(); }

    public: static PlacedLayerFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlacedLayerFactory::instance();
    
}


    private: BasicArrayList* list = new BasicArrayListD();

private: PlacedLayerFactory(){
}


    public: void clear(){
this->list->clear();
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list->size();;
    
}


    private: BasicArrayListUtil* basicArrayListUtil = BasicArrayListUtil::getInstance();

    public: AllBinaryLayerFactoryInterface* getRandomInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<AllBinaryLayerFactoryInterface*>(this->basicArrayListUtil->getRandom(this->list));
    
}


    public: void add(AllBinaryLayerFactoryInterface* layerInterfaceFactoryInterface){
this->list->add(layerInterfaceFactoryInterface);
    
}


};

            

