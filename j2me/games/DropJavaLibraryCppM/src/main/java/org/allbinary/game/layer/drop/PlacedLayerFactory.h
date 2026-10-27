
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AllBinaryLayerFactoryInterface;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlacedLayerFactory
            : public virtual Object
         {

    private: static PlacedLayerFactory* instance_owner();
    private: static PlacedLayerFactory* instance;

    public: static PlacedLayerFactory* getInstance();

    private: BasicArrayList* list;

private: PlacedLayerFactory();

    public: void clear();

    public: int32_t getSize();

    private: BasicArrayListUtil* basicArrayListUtil;

    public: AllBinaryLayerFactoryInterface* getRandomInstance();

    public: void add(AllBinaryLayerFactoryInterface* layerInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_DROP_PLACEDLAYERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayerFactoryInterface.h>)
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>
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

        #endif
    
