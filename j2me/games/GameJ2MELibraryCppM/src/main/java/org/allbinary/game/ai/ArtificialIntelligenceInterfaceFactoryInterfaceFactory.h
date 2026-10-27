
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
        



        #ifndef ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H

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

class ArtificialIntelligenceInterfaceFactoryInterfaceFactory
            : public Object
         {

    private: static ArtificialIntelligenceInterfaceFactoryInterfaceFactory* SINGLETON() { static std::unique_ptr<ArtificialIntelligenceInterfaceFactoryInterfaceFactory> value(new ArtificialIntelligenceInterfaceFactoryInterfaceFactory()); return value.get(); }

    public: static ArtificialIntelligenceInterfaceFactoryInterfaceFactory* getInstance();

    private: BasicArrayList* list = BasicArrayListUtil::getInstance()->getImmutableInstance();

    public: void clear();

    public: ArtificialIntelligenceInterfaceFactoryInterface* getInstanceFromCollection(ABHashtable<Object*, Object*>* hashtable);

    public: void add(ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H
