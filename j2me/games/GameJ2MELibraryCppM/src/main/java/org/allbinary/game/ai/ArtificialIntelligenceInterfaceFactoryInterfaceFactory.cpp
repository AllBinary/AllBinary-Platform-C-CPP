
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
        



        #ifndef ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"


ArtificialIntelligenceInterfaceFactoryInterfaceFactory::ArtificialIntelligenceInterfaceFactoryInterfaceFactory() : list(BasicArrayListUtil::getInstance()->getImmutableInstance()) {
        }
        auto ArtificialIntelligenceInterfaceFactoryInterfaceFactory::SINGLETON_owner() -> ArtificialIntelligenceInterfaceFactoryInterfaceFactory* { static std::unique_ptr<ArtificialIntelligenceInterfaceFactoryInterfaceFactory> value(new ArtificialIntelligenceInterfaceFactoryInterfaceFactory()); return value.get(); }
ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory::SINGLETON = ArtificialIntelligenceInterfaceFactoryInterfaceFactory::SINGLETON_owner();

    auto ArtificialIntelligenceInterfaceFactoryInterfaceFactory::clear() -> void{
this->list= new BasicArrayListD();
    
}


    auto ArtificialIntelligenceInterfaceFactoryInterfaceFactory::getInstance() -> ArtificialIntelligenceInterfaceFactoryInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ArtificialIntelligenceInterfaceFactoryInterfaceFactory::SINGLETON;
    
}


    auto ArtificialIntelligenceInterfaceFactoryInterfaceFactory::getInstanceFromCollection(ABHashtable<Object*, Object*>* hashtable) -> ArtificialIntelligenceInterfaceFactoryInterface*{

    int32_t typeInteger = JavaBoxes::unbox<int32_t>(hashtable->get(BasicAI::ID));;
    

    int32_t type = typeInteger;;
    

    ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface = dynamic_cast<ArtificialIntelligenceInterfaceFactoryInterface*>(this->list->objectArray[type -1]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return artificialIntelligenceInterfaceFactoryInterface;
    
}


    auto ArtificialIntelligenceInterfaceFactoryInterfaceFactory::add(ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface) -> void{
this->list->add(artificialIntelligenceInterfaceFactoryInterface);
    
}




        #endif //ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_CPP
