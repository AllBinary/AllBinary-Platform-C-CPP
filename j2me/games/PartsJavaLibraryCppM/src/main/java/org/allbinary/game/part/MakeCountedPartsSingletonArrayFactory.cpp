
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"
#include "org/allbinary/game/part/PartInterface.h"

class MakeCountedPartsSingletonArrayFactory
            : public Object
         {

    private: static MakeCountedPartsSingletonArrayFactory* instance() { static std::unique_ptr<MakeCountedPartsSingletonArrayFactory> value(new MakeCountedPartsSingletonArrayFactory()); return value.get(); }

    public: static MakeCountedPartsSingletonArrayFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MakeCountedPartsSingletonArrayFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicArrayList* list = BasicArrayListUtil::getInstance()->getImmutableInstance();

                //@Throws(Exception.constructor)
            
    public: std::vector<PartInterface*> getUpdated(std::vector<PartInterface*> partInterfaceArray){
this->list= new BasicArrayListD();
    




                        for (
    int32_t index = 0;index < partInterfaceArray.size(); index++)
        {
this->list->add(partInterfaceArray[index]);
    
}


    BasicArrayList* countedBasicArrayList = CountedPickedUpLayerInterfaceFactoryPool::getInstance()->getList();;
    

    CountedPickedUpLayerInterfaceFactory* layerInterfaceFactoryInterface;;
    

    int32_t size = countedBasicArrayList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
layerInterfaceFactoryInterface= dynamic_cast<CountedPickedUpLayerInterfaceFactory*>(countedBasicArrayList->objectArray[index]);
    
this->list->add(new CountedLayerInterfaceFactoryPart(0, layerInterfaceFactoryInterface));
    
}


    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Total Parts: ");
    
stringBuffer->appendint(this->list->size());
    
stringBuffer->append(" Counted: ");
    
stringBuffer->appendint(countedBasicArrayList->size());
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(stringBuffer->toString(), this, commonStrings->GET_INSTANCE);
    

    std::vector<PartInterface*> newPartInterfaceArray = std::vector<PartInterface*>(this->list->size());;
    

    int32_t newSize = newPartInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < newSize; index++)
        {
newPartInterfaceArray[index]= dynamic_cast<PartInterface*>(this->list->get(index));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPartInterfaceArray;
    
}


};

            

