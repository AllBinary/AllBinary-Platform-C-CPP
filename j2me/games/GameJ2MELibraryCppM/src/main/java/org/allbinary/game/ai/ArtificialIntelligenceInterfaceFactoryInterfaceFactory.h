
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicAI;
class ArtificialIntelligenceInterfaceFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ArtificialIntelligenceInterfaceFactoryInterfaceFactory
            : public virtual Object
         {

    private: static ArtificialIntelligenceInterfaceFactoryInterfaceFactory* SINGLETON_owner();
    private: static ArtificialIntelligenceInterfaceFactoryInterfaceFactory* SINGLETON;

    public: static ArtificialIntelligenceInterfaceFactoryInterfaceFactory* getInstance();


            
    public: ArtificialIntelligenceInterfaceFactoryInterfaceFactory();
        
    private: BasicArrayList* list;

    public: void clear();

    public: ArtificialIntelligenceInterfaceFactoryInterface* getInstanceFromCollection(ABHashtable<Object*, Object*>* hashtable);

    public: void add(ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/game/ai/BasicAI.h")
#include "org/allbinary/game/ai/BasicAI.h"
#endif
#if __has_include("org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h")
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#endif

        #endif
    
