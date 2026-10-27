
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H
        #define ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CountedPickedUpLayerInterfaceFactory;
class CountedPickedUpLayerInterfaceFactoryPool;
class LogUtil;
class StringMaker;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CountedLayerInterfaceFactoryPart;
class PartInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MakeCountedPartsSingletonArrayFactory
            : public virtual Object
         {

    private: static MakeCountedPartsSingletonArrayFactory* instance_owner();
    private: static MakeCountedPartsSingletonArrayFactory* instance;

    public: static MakeCountedPartsSingletonArrayFactory* getInstance();


            
    public: MakeCountedPartsSingletonArrayFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayList* list;

                //@Throws(Exception.constructor)
            
    public: std::vector<PartInterface*> getUpdated(std::vector<PartInterface*> partInterfaceArray);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>)
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h>)
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
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
#if __has_include("org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h")
#include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"
#endif
#if __has_include("org/allbinary/game/part/PartInterface.h")
#include "org/allbinary/game/part/PartInterface.h"
#endif

        #endif
    
